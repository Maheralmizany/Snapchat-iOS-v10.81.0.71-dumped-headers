//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensTestSessionProtocol-Protocol.h"

@interface SCEmptyLensTestSession : NSObject <SCLensTestSessionProtocol>
{
}

- (void)startCollectLensMemoryUsage;
- (void)updateLensFrameProcessingInfo:(CDStruct_488ba8aa)arg1;
- (void)notifyApplyStartedWithLens:(id)arg1;
- (void)fire;

@end

