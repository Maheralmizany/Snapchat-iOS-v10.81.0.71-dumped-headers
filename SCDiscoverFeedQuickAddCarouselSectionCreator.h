//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedCollectionViewSectionCreating-Protocol.h"
#import "SCDiscoverFeedLocalSectionDescriptorProviding-Protocol.h"

@class NSString, SCAddFriendsQuickAddCarouselUpdateDecider, SCExperimentManager, SCLazy, SCSessionRequestManager;
@protocol SCEventAnnouncing, SCImageDownloading;

@interface SCDiscoverFeedQuickAddCarouselSectionCreator : NSObject <SCDiscoverFeedLocalSectionDescriptorProviding, SCDiscoverFeedCollectionViewSectionCreating>
{
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_userInfoProvider;
    SCLazy *_storyPrivacySettingManager;
    id <SCEventAnnouncing> _discoverFeedEventsAnnouncer;
    id <SCImageDownloading> _imageDownloader;
    SCExperimentManager *_experimentManager;
    SCSessionRequestManager *_sessionRequestManager;
    SCAddFriendsQuickAddCarouselUpdateDecider *_quickAddCarouselUpdateDecider;
}

- (void).cxx_destruct;
- (id)localSectionDescriptorWithSource:(id)arg1;
- (id)carouselSectionLayoutCalculator:(id)arg1;
- (id)sectionTitleForDescriptor:(id)arg1;
- (id)_createAddFriendsSectionDataProvider;
- (CDUnknownBlockType)sectionDataProviderCreator;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataMutator:(id)arg2 snapchattersDataTracker:(id)arg3 userInfoProvider:(id)arg4 storyPrivacySettingManager:(id)arg5 imageDownloader:(id)arg6 discoverFeedEventsAnnouncer:(id)arg7 experimentManager:(id)arg8 sessionRequestManager:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
