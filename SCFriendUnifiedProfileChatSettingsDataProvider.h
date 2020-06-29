//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedActionMenuDataProvider-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSString, SCFeatureSettingsService, SCFriendUnifiedProfileDataSource;
@protocol SCUnifiedActionMenuDataProviderDelegate;

@interface SCFriendUnifiedProfileChatSettingsDataProvider : NSObject <SCUpdateListener, SCTraceEnabled, SCUnifiedActionMenuDataProvider>
{
    SCFriendUnifiedProfileDataSource *_dataSource;
    SCFeatureSettingsService *_featureSettingsService;
    id <SCUnifiedActionMenuDataProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCUnifiedActionMenuDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)_chatSettingActionMenuViewModel;
- (void)updateViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithFriendUnifiedProfileDataSource:(id)arg1 featureSettingsService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

