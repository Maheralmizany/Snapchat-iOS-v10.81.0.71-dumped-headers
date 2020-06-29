//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LSATrackerAvailability;

@interface LSAComponentInitializationConfiguration : NSObject
{
    _Bool _asyncTracking;
    _Bool _enableAudioPlayback;
    LSATrackerAvailability *_trackerAvailability;
}

@property(readonly, nonatomic) _Bool enableAudioPlayback; // @synthesize enableAudioPlayback=_enableAudioPlayback;
@property(readonly, nonatomic) _Bool asyncTracking; // @synthesize asyncTracking=_asyncTracking;
@property(readonly, nonatomic) LSATrackerAvailability *trackerAvailability; // @synthesize trackerAvailability=_trackerAvailability;
- (void).cxx_destruct;
- (id)initWithTrackerAvailability:(id)arg1 asyncTracking:(_Bool)arg2 enableAudioPlayback:(_Bool)arg3;

@end
