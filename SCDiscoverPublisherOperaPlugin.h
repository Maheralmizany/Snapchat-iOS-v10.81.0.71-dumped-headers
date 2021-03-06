//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaPlaylistFeaturePlugin.h"

@class SCDiscoverPublisherOperaDataSource, SCDiscoverPublisherOperaSession;

@interface SCDiscoverPublisherOperaPlugin : SCOperaPlaylistFeaturePlugin
{
    SCDiscoverPublisherOperaDataSource *_discoverPublisherOperaDataSource;
    SCDiscoverPublisherOperaSession *_discoverPublisherOperaSession;
}

@property(readonly, nonatomic) SCDiscoverPublisherOperaSession *discoverPublisherOperaSession; // @synthesize discoverPublisherOperaSession=_discoverPublisherOperaSession;
- (void).cxx_destruct;
- (void)setOperaViewController:(id)arg1;
- (id)extraPropertiesProvider;
- (void)setPlaylistItemController:(id)arg1;
- (void)addEventListenersWithEventAnnouncer:(id)arg1;
- (void)setExtraInfo:(id)arg1;
- (id)playlistDataSource;
- (id)type;
- (id)initWithUserSession:(id)arg1 context:(unsigned long long)arg2 loggingContext:(id)arg3 startWithAttachment:(_Bool)arg4 navigationDelegate:(id)arg5 enableAutoAdvance:(_Bool)arg6;

@end

