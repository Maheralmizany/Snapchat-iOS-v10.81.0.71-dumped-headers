//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCCameraGestureResponder-Protocol.h"
#import "SCFeatureShazam-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"
#import "SCShazamManagerDelegate-Protocol.h"

@class NSString, SCLazy, SCManagedCapturerState, SCShazamAudioCapturer, SCShazamConfiguration, SCShazamManager;
@protocol SCCapturer, SCFeatureShazamDelegate;

@interface SCFeatureShazamImpl : SCFeature <SCManagedCapturerListener, SCShazamManagerDelegate, SCFeatureShazam, SCCameraGestureResponder>
{
    SCShazamManager *_shazamManager;
    SCShazamConfiguration *_shazamConfigurationDuringLongPress;
    SCShazamAudioCapturer *_audioCapturer;
    double _longPressStartTime;
    SCLazy *_utilityLensesController;
    SCLazy *_userPreferences;
    SCLazy *_shazamConfigManager;
    id <SCFeatureShazamDelegate> _delegate;
    id <SCCapturer> _capturer;
    SCManagedCapturerState *_managedCapturerState;
}

@property(retain, nonatomic) SCManagedCapturerState *managedCapturerState; // @synthesize managedCapturerState=_managedCapturerState;
@property(retain, nonatomic) id <SCCapturer> capturer; // @synthesize capturer=_capturer;
@property(nonatomic) __weak id <SCFeatureShazamDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shazamManagerDidSubmitSearchRequest;
- (void)shazamManagerDidFinish:(id)arg1;
- (void)_setupShazamAudioCapturerIfNeeded;
- (void)_shazamScanningEnabled;
- (void)_handleShazamScanResult:(id)arg1;
- (id)_shazamUtilityLensDataState;
- (void)configureWithView:(id)arg1;
- (void)forwardLongPressGesture:(id)arg1;
- (void)stopShazaming;
- (void)startShazaming;
- (void)stopAudioRecordingAsynchronously;
- (void)resetInfo;
- (void)dealloc;
- (id)initWithCapturer:(id)arg1 utilityLensesController:(id)arg2 userPreferences:(id)arg3 shazamConfigManager:(id)arg4;
- (void)managedCapturer:(id)arg1 didChangeState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

