//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCMotionManager;

@protocol SCMotionManagerListener <NSObject>
- (void)motionManager:(SCMotionManager *)arg1 didUpdateRotation:(double)arg2 translation:(struct CGVector)arg3;
@end
