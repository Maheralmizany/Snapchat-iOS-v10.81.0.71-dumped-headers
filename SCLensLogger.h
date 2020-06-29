//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensCompoundLogger-Protocol.h"

@class NSMutableDictionary, NSString, SCLens, SCLensAnalyticsDataStore, SCLensFpsLogger, SCLensInitLogger, SCLensSession, SCLensThumbnailLogger, SCLogger, SCSnappableLensLogger, SCUserSession;
@protocol SCLensPerformanceAutomationLogger, SCLensReadyLoggerProtocol, SCLensUsageTrackerProtocol, SCSnappableLensLogger, SCUnlockableLensTracking;

@interface SCLensLogger : NSObject <SCLensCompoundLogger>
{
    SCLogger *_generalPurposeLogger;
    SCLensSession *_lensSession;
    id <SCLensUsageTrackerProtocol> _lensUsageTracker;
    SCUserSession *_userSession;
    _Bool _isCapturing;
    unsigned long long _lensSessionState;
    id <SCLensPerformanceAutomationLogger> _performanceAutomationLogger;
    SCSnappableLensLogger *_snappablesLogger;
    _Bool _frontCameraActive;
    _Bool _isRedirectToStore;
    _Bool _isRedirectToWebview;
    _Bool _withAttachmentOpen;
    id <SCLensReadyLoggerProtocol> _lensReadyLogger;
    long long _snapSource;
    long long _mediaType;
    long long _productMediaType;
    SCLensAnalyticsDataStore *_lensAnalyticsDataStore;
    SCLensFpsLogger *_lensFpsLogger;
    SCLensInitLogger *_lensInitLogger;
    SCLensThumbnailLogger *_lensThumbnailLogger;
    NSString *_topSnapAdId;
    NSString *_topSnapAdRequestId;
    NSString *_sceneIntRequestId;
    NSString *_lensSessionId;
    double _startViewingTime;
    double _cameraStartViewingTime;
    double _startRecordingTime;
    double _endRecordingTime;
    double _spinStartTime;
    SCLens *_currentViewingLens;
    SCLens *_currentSpinningLens;
    unsigned long long _lensCount;
    long long _currentLensIndex;
    double _startViewingTimeLensOption;
    unsigned long long _lensOptionCount;
    long long _currentLensOptionIndex;
    NSString *_currentLensOptionId;
    long long _lensOptionSwipeCount;
    NSMutableDictionary *_triggerFiredForCurrentLens;
    unsigned long long _frontCameraMaxFacesCount;
    unsigned long long _backCameraMaxFacesCount;
    unsigned long long _frontCameraSnapFacesCount;
    unsigned long long _backCameraSnapFacesCount;
    double _firstFaceRenderTimestampSec;
    double _firstTriggerTimestampSec;
}

+ (void)logAssetConsumption:(id)arg1;
+ (void)logLensConsumption:(id)arg1;
@property(nonatomic) double firstTriggerTimestampSec; // @synthesize firstTriggerTimestampSec=_firstTriggerTimestampSec;
@property(nonatomic) double firstFaceRenderTimestampSec; // @synthesize firstFaceRenderTimestampSec=_firstFaceRenderTimestampSec;
@property(nonatomic) unsigned long long backCameraSnapFacesCount; // @synthesize backCameraSnapFacesCount=_backCameraSnapFacesCount;
@property(nonatomic) unsigned long long frontCameraSnapFacesCount; // @synthesize frontCameraSnapFacesCount=_frontCameraSnapFacesCount;
@property(nonatomic) unsigned long long backCameraMaxFacesCount; // @synthesize backCameraMaxFacesCount=_backCameraMaxFacesCount;
@property(nonatomic) unsigned long long frontCameraMaxFacesCount; // @synthesize frontCameraMaxFacesCount=_frontCameraMaxFacesCount;
@property(retain, nonatomic) NSMutableDictionary *triggerFiredForCurrentLens; // @synthesize triggerFiredForCurrentLens=_triggerFiredForCurrentLens;
@property(nonatomic) long long lensOptionSwipeCount; // @synthesize lensOptionSwipeCount=_lensOptionSwipeCount;
@property(copy, nonatomic) NSString *currentLensOptionId; // @synthesize currentLensOptionId=_currentLensOptionId;
@property(nonatomic) long long currentLensOptionIndex; // @synthesize currentLensOptionIndex=_currentLensOptionIndex;
@property(nonatomic) unsigned long long lensOptionCount; // @synthesize lensOptionCount=_lensOptionCount;
@property(nonatomic) double startViewingTimeLensOption; // @synthesize startViewingTimeLensOption=_startViewingTimeLensOption;
@property(nonatomic) long long currentLensIndex; // @synthesize currentLensIndex=_currentLensIndex;
@property(nonatomic) unsigned long long lensCount; // @synthesize lensCount=_lensCount;
@property(nonatomic) _Bool withAttachmentOpen; // @synthesize withAttachmentOpen=_withAttachmentOpen;
@property(retain, nonatomic) SCLens *currentSpinningLens; // @synthesize currentSpinningLens=_currentSpinningLens;
@property(retain, nonatomic) SCLens *currentViewingLens; // @synthesize currentViewingLens=_currentViewingLens;
@property(nonatomic) double spinStartTime; // @synthesize spinStartTime=_spinStartTime;
@property(nonatomic) double endRecordingTime; // @synthesize endRecordingTime=_endRecordingTime;
@property(nonatomic) double startRecordingTime; // @synthesize startRecordingTime=_startRecordingTime;
@property(nonatomic) double cameraStartViewingTime; // @synthesize cameraStartViewingTime=_cameraStartViewingTime;
@property(nonatomic) double startViewingTime; // @synthesize startViewingTime=_startViewingTime;
@property(copy, nonatomic) NSString *lensSessionId; // @synthesize lensSessionId=_lensSessionId;
@property(retain, nonatomic) NSString *sceneIntRequestId; // @synthesize sceneIntRequestId=_sceneIntRequestId;
@property(retain, nonatomic) NSString *topSnapAdRequestId; // @synthesize topSnapAdRequestId=_topSnapAdRequestId;
@property(retain, nonatomic) NSString *topSnapAdId; // @synthesize topSnapAdId=_topSnapAdId;
@property(readonly, nonatomic) SCLensThumbnailLogger *lensThumbnailLogger; // @synthesize lensThumbnailLogger=_lensThumbnailLogger;
@property(readonly, nonatomic) SCLensInitLogger *lensInitLogger; // @synthesize lensInitLogger=_lensInitLogger;
@property(retain, nonatomic) SCLensFpsLogger *lensFpsLogger; // @synthesize lensFpsLogger=_lensFpsLogger;
@property(readonly, nonatomic) SCLensAnalyticsDataStore *lensAnalyticsDataStore; // @synthesize lensAnalyticsDataStore=_lensAnalyticsDataStore;
@property(nonatomic) _Bool isRedirectToWebview; // @synthesize isRedirectToWebview=_isRedirectToWebview;
@property(nonatomic) _Bool isRedirectToStore; // @synthesize isRedirectToStore=_isRedirectToStore;
@property(nonatomic) long long productMediaType; // @synthesize productMediaType=_productMediaType;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) long long snapSource; // @synthesize snapSource=_snapSource;
@property(retain, nonatomic) id <SCLensReadyLoggerProtocol> lensReadyLogger; // @synthesize lensReadyLogger=_lensReadyLogger;
@property(nonatomic) _Bool frontCameraActive; // @synthesize frontCameraActive=_frontCameraActive;
- (void).cxx_destruct;
- (void)_logPerformanceAutomationEvent:(id)arg1;
- (void)lensMetricsEventEmitted:(struct LSAProfilingMetrics)arg1 effectID:(id)arg2;
- (void)logCustomLensEventsForLens:(id)arg1 sessionId:(id)arg2 eventsArray:(id)arg3;
- (long long)_currentCameraType;
- (void)trackLensInteraction:(id)arg1 appliedLensId:(id)arg2 beforeSnap:(_Bool)arg3;
- (void)lensOptionSessionStopped;
- (void)lensOptionPresentedAtIndex:(long long)arg1 lensOptionId:(id)arg2 lensOptionCount:(unsigned long long)arg3;
- (void)faceCountChanged:(unsigned long long)arg1;
- (void)triggerFired:(id)arg1;
- (void)_logCameraFlipEvent:(long long)arg1 isRecording:(_Bool)arg2 action:(long long)arg3 sourceType:(long long)arg4;
- (void)cameraToggledWithAction:(long long)arg1 recording:(_Bool)arg2;
- (void)recordingStopped;
- (void)recordingStarted;
- (void)resetCurrentViewingLensIfPossibleAfterRecording:(_Bool)arg1;
- (void)resetPresentedLensAfterRecording:(_Bool)arg1;
- (void)logLensSwipeEvent:(long long)arg1 afterRecording:(_Bool)arg2;
- (long long)_getLensAttachmentType:(id)arg1;
- (id)_fillLensSwipeEvent:(id)arg1 lensSourceType:(long long)arg2 lens:(id)arg3 lensSwipeOptionCount:(long long)arg4 isGeoEvent:(_Bool)arg5 indexPos:(long long)arg6 snapSource:(long long)arg7;
- (void)openAttachmentView;
- (void)closeAttachmentView;
- (void)lensPresented:(id)arg1 atIndex:(unsigned long long)arg2 originalLensIndex:(unsigned long long)arg3 count:(unsigned long long)arg4 afterRecording:(_Bool)arg5 launchData:(id)arg6;
- (void)lensSpinning:(id)arg1 atIndex:(unsigned long long)arg2 originalLensIndex:(unsigned long long)arg3 count:(unsigned long long)arg4;
- (void)lensSessionStopped:(id)arg1;
- (void)lensSessionPaused:(id)arg1;
- (void)lensSessionResumed:(id)arg1;
@property(readonly, nonatomic) _Bool isLensSessionPaused;
- (id)lensSessionStartedWithSessionId:(id)arg1 sourceType:(long long)arg2;
- (id)lensSessionStartedForSourceType:(long long)arg1;
@property(readonly, nonatomic) id <SCUnlockableLensTracking> unlockableLensTracker;
@property(readonly, nonatomic) long long lensSource;
@property(readonly, nonatomic) id <SCSnappableLensLogger> snappablesLogger;
- (id)initWithGeneralPurposeLogger:(id)arg1 lensUsageTracker:(id)arg2 lensAnalyticsDataStore:(id)arg3 userSession:(id)arg4 performanceAutomationLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

