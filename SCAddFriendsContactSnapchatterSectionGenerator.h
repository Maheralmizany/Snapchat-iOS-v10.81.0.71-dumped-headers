//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAddFriendsCollectionViewSectionGenerating-Protocol.h"
#import "SCAddFriendsSearchResultSectionDescriptorGenerating-Protocol.h"
#import "SCAddFriendsSectionDisplayTimeMutator-Protocol.h"

@class NSString, SCExperimentManager, SCLazy;
@protocol SCImageDownloading, SCLegacyItemDownloading;

@interface SCAddFriendsContactSnapchatterSectionGenerator : NSObject <SCAddFriendsCollectionViewSectionGenerating, SCAddFriendsSearchResultSectionDescriptorGenerating, SCAddFriendsSectionDisplayTimeMutator>
{
    SCLazy *_snapchattersDataTracker;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _labelInfoProvider;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_userInfoProvider;
    SCLazy *_storyPrivacySettingManager;
    SCLazy *_viewedIncomingFriendsTracker;
    SCExperimentManager *_experimentManager;
    double _displayTimestamp;
}

@property(nonatomic) double displayTimestamp; // @synthesize displayTimestamp=_displayTimestamp;
- (void).cxx_destruct;
- (id)_sectionDataProviderForSectionType:(id)arg1;
- (id)_sectionInsetsForSectionType:(id)arg1;
- (id)sectionDescriptorForSectionType:(id)arg1 queryText:(id)arg2;
- (id)sectionForSectionType:(id)arg1 actionHandler:(id)arg2;
- (id)initWithSnapchattersDataTracker:(id)arg1 snapchattersDataFetcher:(id)arg2 userInfoProvider:(id)arg3 viewedIncomingFriendsTracker:(id)arg4 storyPrivacySettingManager:(id)arg5 labelInfoProvider:(id)arg6 imageDownloader:(id)arg7 exprimentManager:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
