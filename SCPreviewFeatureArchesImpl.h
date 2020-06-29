//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCPreviewFeatureArches-Protocol.h"

@class NSString, SCArchesSelection, SCMusicServices, SCPreviewConfiguration;
@protocol SCArchesIconProvider, SCFeatureVideoPlayback, SCPreviewFeatureAudioPlayback;

@interface SCPreviewFeatureArchesImpl : SCFeature <SCPreviewFeatureArches>
{
    SCArchesSelection *_selection;
    id <SCPreviewFeatureAudioPlayback> _audioPlayback;
    SCMusicServices *_musicServices;
    SCPreviewConfiguration *_previewConfiguration;
    id <SCFeatureVideoPlayback> _videoPlayback;
    id <SCArchesIconProvider> _iconProvider;
}

@property(retain, nonatomic) id <SCArchesIconProvider> iconProvider; // @synthesize iconProvider=_iconProvider;
@property(readonly, nonatomic) __weak id <SCFeatureVideoPlayback> videoPlayback; // @synthesize videoPlayback=_videoPlayback;
@property(readonly, nonatomic) __weak SCPreviewConfiguration *previewConfiguration; // @synthesize previewConfiguration=_previewConfiguration;
@property(readonly, nonatomic) __weak SCMusicServices *musicServices; // @synthesize musicServices=_musicServices;
@property(readonly, nonatomic) __weak id <SCPreviewFeatureAudioPlayback> audioPlayback; // @synthesize audioPlayback=_audioPlayback;
@property(retain, nonatomic) SCArchesSelection *selection; // @synthesize selection=_selection;
- (void).cxx_destruct;
- (void)_play;
- (void)pauseTrack;
- (void)playTrack;
- (_Bool)shouldShowInToolbar;
- (id)toolbarItemConfiguration;
- (id)initWithIconProvider:(id)arg1 musicServices:(id)arg2 previewConfiguration:(id)arg3 videoPlayback:(id)arg4 audioPlayback:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

