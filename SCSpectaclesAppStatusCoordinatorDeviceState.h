//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSpectaclesTransferSession;

@interface SCSpectaclesAppStatusCoordinatorDeviceState : NSObject
{
    float _firmwareUpdateProgress;
    long long _state;
    SCSpectaclesTransferSession *_transferSession;
}

@property(readonly, nonatomic) float firmwareUpdateProgress; // @synthesize firmwareUpdateProgress=_firmwareUpdateProgress;
@property(readonly, nonatomic) SCSpectaclesTransferSession *transferSession; // @synthesize transferSession=_transferSession;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToAppStatusCoordinatorDeviceState:(id)arg1;
- (id)initWithState:(long long)arg1 transferSession:(id)arg2 firmwareUpdateProgress:(float)arg3;
- (id)initWithState:(long long)arg1;

@end

