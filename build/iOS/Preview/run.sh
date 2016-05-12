#!/bin/sh
# This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.20/Targets/iOS/run.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Xcode"
    open -aXcode "Mods4Minecraft.xcodeproj"
    exit $?
    ;;
esac

"/usr/local/share/uno/Packages/UnoCore/0.27.20/Prebuilt/iOS/bin/ios-deploy" --justlaunch --debug --bundle "build/Release-iphoneos/Mods4Minecraft.app" "$@"
