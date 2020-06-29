//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedActionMenuDataProvider-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSString, SCFeatureSettingsService, SCFriendUnifiedProfileDataSource, SCLazy;
@protocol SCUnifiedActionMenuDataProviderDelegate;

@interface SCFriendUnifiedProfileMenuDataProvider : NSObject <SCUpdateListener, SCTraceEnabled, SCUnifiedActionMenuDataProvider>
{
    SCFriendUnifiedProfileDataSource *_dataSource;
    SCFeatureSettingsService *_featureSettingsService;
    SCLazy *_customStoriesDataFetcher;
    _Bool _hideSendUsername;
    _Bool _hideAddFriendItem;
    NSString *_sourcePageType;
    id <SCUnifiedActionMenuDataProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCUnifiedActionMenuDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_getLeavePrivateStoryViewModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)_nonFriendActionMenuViewModel;
- (id)_mutualFriendActionMenuViewModelWithLeavePrivateStoryViewModel:(id)arg1;
- (void)_mutualFriendActionMenuViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithFriendUnifiedProfileDataSource:(id)arg1 customStoriesDataFetcher:(id)arg2 hideSendUsername:(_Bool)arg3 hideAddFriendItem:(_Bool)arg4 featureSettingsService:(id)arg5 sourcePageType:(id)arg6;
- (id)initWithFriendUnifiedProfileDataSource:(id)arg1 featureSettingsService:(id)arg2 customStoriesDataFetcher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

