//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCManagedCaptureDeviceExposureHandler-Protocol.h"

@class AVCaptureDevice, NSString;

@interface SCManagedCaptureDeviceAutoExposureHandler : NSObject <SCManagedCaptureDeviceExposureHandler>
{
    struct CGPoint _exposurePointOfInterest;
    AVCaptureDevice *_device;
}

- (void).cxx_destruct;
- (void)setExposurePointOfInterest:(struct CGPoint)arg1 fromUser:(_Bool)arg2;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

