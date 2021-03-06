//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionable-Protocol.h"
#import "SCAddFriendsSectionDisplayTimeMutator-Protocol.h"
#import "SCSearchSectionCreating-Protocol.h"

@class NSDictionary, NSString, SCExperimentManager, SCLazy, SCPreferences;
@protocol SCActionHandling, SCImageDownloading, SCLegacyItemDownloading;

@interface SCAddFriendsV2SearchSectionCreator : NSObject <SCSearchSectionCreating, SCActionable, SCAddFriendsSectionDisplayTimeMutator>
{
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_snapchattersDataSearcher;
    id <SCActionHandling> _actionHandler;
    SCLazy *_viewedIncomingFriendsTracker;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _labelInfoProvider;
    SCLazy *_userInfoProvider;
    SCLazy *_storyPrivacySettingManager;
    double _displayTimestamp;
    SCExperimentManager *_experimentManager;
    SCPreferences *_userPreferences;
    long long _placement;
    SCLazy *_addFriendsViewModelsDecorator;
    NSDictionary *_collectionViewSectionGenerators;
}

@property(nonatomic) double displayTimestamp; // @synthesize displayTimestamp=_displayTimestamp;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (id)_sectionForFindFriends;
- (id)sectionForDescriptor:(id)arg1;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataSearcher:(id)arg2 snapchattersDataTracker:(id)arg3 viewedIncomingFriendsTracker:(id)arg4 imageDownloader:(id)arg5 labelInfoProvider:(id)arg6 userInfoProvider:(id)arg7 storyPrivacySettingManager:(id)arg8 displayTimestamp:(double)arg9 userSession:(id)arg10 placement:(long long)arg11 addFriendsViewModelsDecorator:(id)arg12 collectionViewSectionGenerators:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

