//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaRemoteVideoViewProvider.h"

#import "SCMotionManagerListener-Protocol.h"
#import "SCOperaLayerViewControllerMediaContainer-Protocol.h"
#import "SCOperaRemoteVideoDelegate-Protocol.h"
#import "SCOperaRemoteVideoViewDelegate-Protocol.h"
#import "SCOperaVideoViewControllingDataSource-Protocol.h"
#import "SCOperaVideoViewControllingDelegate-Protocol.h"

@class FBKVOController, NSDictionary, NSString, NSTimer, SCDisposableObserverLifecycle, SCOperaConfiguration, SCOperaEventListenerAnnouncer, SCOperaPlayerQueueManager, SCOperaRemoteVideoController, SCOperaRemoteVideoView, UIColor;
@protocol SCOperaImageProvider, SCOperaPageableViewControllerDelegate, SCOperaRemoteVideoControllerDelegate;

@interface SCOperaLongFormVideoViewController : SCOperaRemoteVideoViewProvider <SCMotionManagerListener, SCOperaVideoViewControllingDelegate, SCOperaRemoteVideoViewDelegate, SCOperaRemoteVideoDelegate, SCOperaLayerViewControllerMediaContainer, SCOperaVideoViewControllingDataSource>
{
    SCOperaRemoteVideoView *_view;
    SCDisposableObserverLifecycle *_observerLifecycle;
    SCOperaPlayerQueueManager *_playerQueueManager;
    SCOperaRemoteVideoController *_remoteVideoController;
    NSString *_deviceOrientationManagerToken;
    _Bool _videoHasPlayed;
    _Bool _shouldAutoPlayWhenReady;
    _Bool _isFullscreen;
    _Bool _wasBeingPresented;
    _Bool _shouldHideControlsWhilePaused;
    FBKVOController *_kvoController;
    SCOperaEventListenerAnnouncer *_announcer;
    NSDictionary *_context;
    SCOperaConfiguration *_configuration;
    double _aspectRatio;
    _Bool _isInline;
    NSString *_firstFrameImageKey;
    UIColor *_primaryColor;
    id <SCOperaImageProvider> _imageProvider;
    NSString *_videoURL;
    _Bool _isListeningForMotionUpdates;
    _Bool _videoRotationEnabled;
    double _rotationVideoScale;
    double _minRollDegree;
    double _maxRollDegree;
    long long _virtualOrientation;
    NSTimer *_controlsFadeTimer;
    _Bool _showActionMenuButtonEnabled;
    NSString *_videoID;
    id <SCOperaRemoteVideoControllerDelegate> _delegate;
    id <SCOperaPageableViewControllerDelegate> _pageableViewControllerDelegate;
}

+ (id)remoteVideoViewControllerWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 isInline:(_Bool)arg3;
@property(nonatomic) __weak id <SCOperaPageableViewControllerDelegate> pageableViewControllerDelegate; // @synthesize pageableViewControllerDelegate=_pageableViewControllerDelegate;
@property(nonatomic) __weak id <SCOperaRemoteVideoControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)videoID;
- (void).cxx_destruct;
- (_Bool)isShowingVideoFrame;
- (id)snapshotFromPlayer;
- (id)imageSnapshot;
- (id)additionalVideoParamters;
- (id)videoParameters;
- (void)setResumeVideoPosition:(double)arg1;
- (void)didSetFullscreen:(_Bool)arg1;
- (void)updateWithScreenshot:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)rotateVideoWithTransform:(struct CGAffineTransform)arg1;
- (void)setTargetOrientation:(long long)arg1 andRotateView:(_Bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)rotateVideoBasedOnOrientation;
- (double)totalVideoDurationSeconds;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)currentTime;
- (CDStruct_1b6d18a9)videoControlsViewDuration:(id)arg1;
- (CDStruct_1b6d18a9)videoControlsViewCurrentTime:(id)arg1;
- (void)videoControlsViewDidPressSendButton:(id)arg1;
- (void)videoControlsViewDidPressShowActionMenuButton:(id)arg1;
- (void)videoControlsViewDidPressExit:(id)arg1;
- (void)videoControlsViewDidBeginSeeking:(id)arg1;
- (void)videoControlsView:(id)arg1 didToggleVolume:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didToggleControlsVisibility:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didToggleRotateLeft:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didTogglePlay:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didToggleCaption:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didSeekToTime:(double)arg2 reason:(long long)arg3;
- (void)videoControlsView:(id)arg1 didEndSeekingWithPlayButtonToggled:(_Bool)arg2;
- (void)_updateRollDegreeWithCurrentRotation:(double)arg1;
- (void)_updateLayerViewTransformWithRotation:(double)arg1;
- (void)motionManager:(id)arg1 didUpdateRotation:(double)arg2 translation:(struct CGVector)arg3;
- (void)_observeViewModelChange;
- (void)_observePlayerItemPresentationSize;
- (void)_observePlaybackLifecycleEvent;
- (struct CGRect)mediaViewFrame;
- (double)mediaHeightToWidthAspectRatio;
- (_Bool)isOverlay;
- (void)invalidateControlsFadeTimerAndShowControls;
- (void)_setupControlsFadeTimer;
- (void)fadeOutControls;
- (void)fadeInControls;
- (_Bool)shouldPassDownTapGesture:(id)arg1;
- (void)didTapRemoteVideoView:(id)arg1;
- (void)viewDidFullyDisappear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillFullyAppearAtTime:(CDStruct_1b6d18a9)arg1;
- (void)viewWillFullyAppear;
- (void)viewDidPartiallyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)viewDidFullyAppear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)teardown;
- (void)stop;
- (void)start;
- (void)playVideo:(_Bool)arg1;
- (void)loadVideo;
- (void)setVolume:(double)arg1;
- (void)setPausedForAttachment:(_Bool)arg1;
- (void)resume;
- (_Bool)isPaused;
- (void)pause;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (_Bool)mediaIsBeingPreparedForDisplay;
- (_Bool)isPausedForAttachment;
- (void)didUpdateBottomPageViewProperties:(id)arg1;
- (void)cancelViewWillFullyAppearAtTime;
- (_Bool)canHandleRoundCorner;
- (_Bool)prefersStatusBarHidden;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)updateWithVideoId:(id)arg1 videoURL:(id)arg2 eventContext:(id)arg3 firstFrameImageKey:(id)arg4 primaryColor:(id)arg5 videoRotationEnabled:(_Bool)arg6 showActionMenuButtonEnabled:(_Bool)arg7 imageProvider:(id)arg8;
- (id)initWithVideoId:(id)arg1 configuration:(id)arg2 eventAnnouncer:(id)arg3 eventContext:(id)arg4 isInline:(_Bool)arg5 firstFrameImageKey:(id)arg6 primaryColor:(id)arg7 kvoController:(id)arg8 imageProvider:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
