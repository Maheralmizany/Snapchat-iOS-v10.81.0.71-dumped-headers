//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchSectionCreating-Protocol.h"

@class NSString, SCLazy, SCNewGroupConfiguration, SCSendToDocObjectRecipientDataSource, SCSendToLatencyMetricLogger, UIColor;
@protocol SCActionHandling, SCLegacySendToLogger, SCSendToIdentifierMapping, SCSendToScrollViewCoordinating, SCUserSelectionManaging;

@interface SCNewGroupSectionCreator : NSObject <SCSearchSectionCreating>
{
    SCNewGroupConfiguration *_configuration;
    id <SCActionHandling> _actionHandler;
    SCSendToDocObjectRecipientDataSource *_docObjectRecipientDataSource;
    id <SCUserSelectionManaging> _selectionStateManager;
    SCLazy *_userInfoProvider;
    _Bool _newUserTooltipEnabled;
    id <SCLegacySendToLogger> _logger;
    long long _recipientViewStyle;
    long long _headerViewStyle;
    UIColor *_headerTextColor;
    SCSendToLatencyMetricLogger *_latencyLogger;
    id <SCSendToIdentifierMapping> _identifierMapper;
    id <SCSendToScrollViewCoordinating> _scrollViewCoordinator;
}

- (void).cxx_destruct;
- (id)_searchHeaderTitle;
- (id)_searchAddFriendsSection;
- (id)_friendsSectionForIdentifier:(id)arg1;
- (id)_allFriendsSection;
- (id)_searchGeneralSection;
- (id)_recentsSectionWithHeader:(id)arg1;
- (id)_bestFriendsSection;
- (id)_createGroupLinkCTASection;
- (id)_newGroupCTASection;
- (id)sectionForDescriptor:(id)arg1;
- (id)initWithConfiguration:(id)arg1 actionHandler:(id)arg2 docObjectRecipientDataSource:(id)arg3 selectionStateManager:(id)arg4 userInfoProvider:(id)arg5 latencyLogger:(id)arg6 identifierMapper:(id)arg7 scrollViewCoordinator:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

