//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCShazamDataProvider-Protocol.h"
#import "SCShazamManagerDelegate-Protocol.h"

@class NSString, SCLazy, SCObservable, SCPublishSubject, SCShazamAudioCapturer, SCShazamManager;

@interface SCShazamDataProviderImpl : NSObject <SCShazamManagerDelegate, SCShazamDataProvider>
{
    SCShazamManager *_shazamManager;
    SCShazamAudioCapturer *_audioCapturer;
    SCLazy *_userPreferences;
    SCLazy *_shazamConfigManager;
    SCPublishSubject *_shazamUpdateObservable;
    double _startTime;
}

- (void).cxx_destruct;
- (void)_setupShazamAudioCapturerIfNeeded;
- (void)shazamManagerDidSubmitSearchRequest;
- (void)shazamManagerDidFinish:(id)arg1;
@property(readonly, nonatomic) SCObservable *shazamUpdateObservable;
- (void)deactivate;
- (void)activate;
- (id)initWithUserPreferences:(id)arg1 shazamConfigManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
