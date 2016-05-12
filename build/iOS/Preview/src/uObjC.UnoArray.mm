#include <Uno/Uno.h>
#include <uObjC.UnoArray.h>

@implementation StrongUnoArray

@synthesize unoArray = _unoArray;
@synthesize getAt = _getAt;
@synthesize setAt = _setAt;

+ (instancetype)strongUnoArrayWithUnoArray:(uArray*)array
	getAt:(id (^) (uArray*, int))get
	setAt:(void (^) (uArray*, int, id))set
{
	if (array == NULL)
	{
		return nil;
	}
	return [[[StrongUnoArray alloc]
		initWithUnoArray: array
		getAt: get
		setAt: set] autorelease];
}

- (id)initWithUnoArray:(uArray*)array
	getAt:(id (^) (uArray*, int))get
	setAt:(void (^) (uArray*, int, id))set
{
	self = [super init];

	if (self)
	{
		uRetain(array);
		_unoArray = array;
		self.getAt = get;
		self.setAt = set;
	}

	return self;
}

- (id)init
{
	return [self initWithUnoArray: NULL getAt: nil setAt: nil];
}

- (instancetype)copyWithZone:(NSZone*)zone
{
	return [[[self class] allocWithZone: zone] initWithUnoArray: self.unoArray getAt: self.getAt setAt: self.setAt];
}

- (uArray*)unoArray
{
	uRetain(_unoArray);
	uAutoRelease(_unoArray);

	return _unoArray;
}

- (id)objectAtIndexedSubscript:(int)idx
{
	uAutoReleasePool autoReleasePool;
	return self.getAt(_unoArray, idx);
}

- (void)setObject:(id)obj atIndexedSubscript:(int)idx;
{
	uAutoReleasePool autoReleasePool;
	self.setAt(_unoArray, idx, obj);
}

- (NSUInteger)count
{
	uAutoReleasePool autoReleasePool;
	return (NSUInteger)_unoArray->Length();
}

- (void)dealloc
{
	uRelease(_unoArray);
	_unoArray = NULL;
	self.getAt = nil;
	self.setAt = nil;

	[super dealloc];
}

- (NSArray*)copyArray
{
	NSUInteger len = [self count];
	NSMutableArray* result = [NSMutableArray arrayWithCapacity: len];
	for (NSUInteger i = 0; i < len; ++i)
	{
		[result addObject: self[(int)i]];
	}
	return result;
}

@end
