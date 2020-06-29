//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaPlaybackObserving-Protocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, FBKVOController, NSString;

@interface SCOperaPlayerView : UIView <SCOperaPlaybackObserving>
{
    AVPlayerItem *_playerItem;
    FBKVOController *_kvoController;
    id _closeToEndObserver;
    id _startToDisplayObserver;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    double _timeToPrepareSec;
    double _startPreparingTimeSec;
    NSString *_pageId;
}

@property(copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(readonly, nonatomic) double startPreparingTimeSec; // @synthesize startPreparingTimeSec=_startPreparingTimeSec;
@property(readonly, nonatomic) double timeToPrepareSec; // @synthesize timeToPrepareSec=_timeToPrepareSec;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(readonly, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)dealloc;
- (id)snapShotFromPlayer;
- (void)setViewModel:(id)arg1;
- (void)_clearStartToDisplayObserverIfNecessary;
- (void)schedulePlaybackAtTime:(CDStruct_1b6d18a9)arg1 startingPlayingCallback:(CDUnknownBlockType)arg2;
- (void)_clearCloseToEndNotificationIfNecessary;
- (CDStruct_1b6d18a9)_audioDuration;
- (void)enableCloseToEndCallback:(CDUnknownBlockType)arg1;
- (void)playerItemStatusDidChange:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

