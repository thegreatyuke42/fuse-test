#import <MapKit/MapKit.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void (^TouchesEventBlock)(NSSet * touches, UIEvent * event);

@interface TouchRecognizer : UIGestureRecognizer 
	{
	    TouchesEventBlock touchesBeganCallback;
	}
	@property(copy) TouchesEventBlock touchesBeganCallback;
	@property(copy) TouchesEventBlock touchesEndedCallback;
	@property(copy) TouchesEventBlock touchesCancelledCallback;

@end

@interface MapViewDelegate : NSObject<MKMapViewDelegate>
	+(MapViewDelegate*) instance;
	-(void)setAsDelegate:(MKMapView*)mv;
	-(void)setMapMoveAction:(void(^)(bool))action;
	-(void)setMapTouchAction:(void(^)(int, double, double))action;
	-(void)setMarkerSelectAction:(void(^)(NSString*))action;
	-(int)addMarker:(NSString*)label latitude:(double)lat longitude:(double)lng;
	-(void)removeMarker:(int)identifier;
	-(void)clearMarkers;
	@property (nonatomic) void (^mapMoveBlock)(bool);
	@property (nonatomic) void (^touchBlock)(int type, double x, double y);
	@property (nonatomic) void (^markerSelectBlock)(NSString* label);
@end
