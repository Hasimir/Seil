// -*- Mode: objc; Coding: utf-8; indent-tabs-mode: nil; -*-

@import Cocoa;
#import "SeilProtocol.h"

@interface ServerForUserspace : NSObject <SeilProtocol>

- (BOOL) register;

@end
