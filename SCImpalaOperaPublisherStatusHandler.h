//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"
#import "SCOperaNotificationOptInStatusHandler-Protocol.h"
#import "SCOperaSubscribeButtonLayerViewControllerSubscribeStatusHandler-Protocol.h"

@class NSString, SCCreatorSettingsDataFetcher, SCCreatorSettingsDataMutator, SCCreatorSettingsDataTracker;

@interface SCImpalaOperaPublisherStatusHandler : NSObject <SCEventListener, SCOperaSubscribeButtonLayerViewControllerSubscribeStatusHandler, SCOperaNotificationOptInStatusHandler>
{
    NSString *_publisherId;
    SCCreatorSettingsDataFetcher *_creatorSettingsFetcher;
    SCCreatorSettingsDataMutator *_creatorSettingsMutator;
    SCCreatorSettingsDataTracker *_creatorSettingsTracker;
    CDUnknownBlockType _subscribedCallback;
    CDUnknownBlockType _optInCallback;
}

- (void).cxx_destruct;
- (void)setCallbackForStoryUpdate:(CDUnknownBlockType)arg1;
- (_Bool)isOptedInForNotifications;
- (_Bool)canOptInForNotifications;
- (void)setCallbackForSubscriptionUpdate:(CDUnknownBlockType)arg1;
- (_Bool)isSubscribed;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)updateOptInNotifications:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSubscribed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPublisherId:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

