//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPPhotoCapturerSettings : NSObject
{
    long long _devicePosition;
    NSString *_sessionPreset;
}

@property(copy, nonatomic) NSString *sessionPreset; // @synthesize sessionPreset=_sessionPreset;
@property(nonatomic) long long devicePosition; // @synthesize devicePosition=_devicePosition;
- (void).cxx_destruct;
- (id)initWithCaptureDevicePosition:(long long)arg1 sessionPreset:(id)arg2;

@end

