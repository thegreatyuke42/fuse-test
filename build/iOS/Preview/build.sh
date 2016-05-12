#!/bin/sh
# This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.20/Targets/iOS/build.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

mkdir -p data
xcodebuild -project "Mods4Minecraft.xcodeproj"
