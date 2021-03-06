//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCStackedNoteCollectionViewCell.h"

#import "SCChatAudioNotePlayerDelegate-Protocol.h"

@class NSString, SCAudioNoteView, SCLoadingIndicatorView;

@interface SCStackedAudioNoteCollectionViewCell : SCStackedNoteCollectionViewCell <SCChatAudioNotePlayerDelegate>
{
    SCAudioNoteView *_audioNoteView;
    SCLoadingIndicatorView *_activityIndicatorView;
}

+ (id)cellReuseIdentifier;
- (void).cxx_destruct;
- (void)audioNotePlayerDidFinishPlayingWithMediaId:(id)arg1;
- (void)audioNotePlayerStateChangeWithMediaId:(id)arg1;
- (void)_updateAudioNoteView;
- (void)_play;
- (void)onTap;
- (void)_showSpinner:(_Bool)arg1;
- (void)_didShowPendingDisplay;
- (void)_didShowCompleteDisplay;
- (void)_setAudioNoteViewCellIsReadyForDisplay:(_Bool)arg1 forViewModel:(id)arg2;
- (void)_setIsSender:(_Bool)arg1;
- (_Bool)_animationFramesAreLoaded;
- (void)configureWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)clearContents;
- (id)activityIndicatorView;
- (void)_initAudioNoteView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

