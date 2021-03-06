//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSString, NSURL, SCEventListenerAnnouncer, SCOperaPage, SCOperaWebAppImageResources, SCOperaWebAppPositionedPresentUser;
@protocol SCImageDownloading, SCLegacyItemDownloading, SCOperaViewProvider, SCOperaWebAppPresenceFrameProvider;

@interface SCOperaWebAppLayer : NSObject <SCOperaLayer>
{
    _Bool _hasPresentUsers;
    _Bool _availableToInvite;
    _Bool _supportUnifiedLoadingScreen;
    _Bool _enableVideoLoadingView;
    _Bool _gameAudioDisabled;
    NSURL *_url;
    NSString *_appName;
    NSString *_conversationName;
    NSString *_conversationSubtitle;
    NSString *_sessionId;
    NSString *_appId;
    SCOperaWebAppPositionedPresentUser *_localUser;
    unsigned long long _playerState;
    id <SCOperaViewProvider> _presenceBarViewProvider;
    id <SCOperaWebAppPresenceFrameProvider> _presenceFrameProvider;
    SCEventListenerAnnouncer *_dataUpdateAnnouncer;
    SCOperaWebAppImageResources *_imageResources;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _videoDownloader;
    SCOperaPage *_page;
    struct UIEdgeInsets _contentInsets;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, nonatomic) _Bool gameAudioDisabled; // @synthesize gameAudioDisabled=_gameAudioDisabled;
@property(readonly, nonatomic) _Bool enableVideoLoadingView; // @synthesize enableVideoLoadingView=_enableVideoLoadingView;
@property(readonly, nonatomic) id <SCLegacyItemDownloading> videoDownloader; // @synthesize videoDownloader=_videoDownloader;
@property(readonly, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(readonly, nonatomic) SCOperaWebAppImageResources *imageResources; // @synthesize imageResources=_imageResources;
@property(readonly, nonatomic) SCEventListenerAnnouncer *dataUpdateAnnouncer; // @synthesize dataUpdateAnnouncer=_dataUpdateAnnouncer;
@property(readonly, nonatomic) __weak id <SCOperaWebAppPresenceFrameProvider> presenceFrameProvider; // @synthesize presenceFrameProvider=_presenceFrameProvider;
@property(readonly, nonatomic) __weak id <SCOperaViewProvider> presenceBarViewProvider; // @synthesize presenceBarViewProvider=_presenceBarViewProvider;
@property(readonly, nonatomic) _Bool supportUnifiedLoadingScreen; // @synthesize supportUnifiedLoadingScreen=_supportUnifiedLoadingScreen;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) unsigned long long playerState; // @synthesize playerState=_playerState;
@property(readonly, nonatomic) _Bool availableToInvite; // @synthesize availableToInvite=_availableToInvite;
@property(readonly, nonatomic) _Bool hasPresentUsers; // @synthesize hasPresentUsers=_hasPresentUsers;
@property(readonly, nonatomic) SCOperaWebAppPositionedPresentUser *localUser; // @synthesize localUser=_localUser;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, copy, nonatomic) NSString *conversationSubtitle; // @synthesize conversationSubtitle=_conversationSubtitle;
@property(readonly, copy, nonatomic) NSString *conversationName; // @synthesize conversationName=_conversationName;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

