//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSNumber, NSString, SCAdOrganicSnapLogParameters, SCAdSnapAppInfoLogParameters, SCAdSnapLoadStatusLogParameters;

@interface SCAdSnapViewLogParameters : NSObject <NSCopying>
{
    _Bool _isFullViewAd;
    _Bool _isTopSnapFullyViewed;
    _Bool _isOnTopSnap;
    _Bool _isArchivedChannel;
    _Bool _reachedAdSlot;
    _Bool _logTapPosition;
    _Bool _logCardMetrics;
    _Bool _deepLinkFromCard;
    _Bool _deepLinkFallBackToAppStore;
    _Bool _deepLinkFallBackToWebview;
    _Bool _isCameraAd;
    _Bool _logInteractionZone;
    _Bool _webViewLoadedOnEntry;
    _Bool _webViewLoadedOnExit;
    _Bool _longformVideoStartedWithCaption;
    _Bool _lensIsLoadedOnEntry;
    _Bool _lensIsLoadedOnExit;
    long long _mediaType;
    double _videoViewedTimeInSec;
    double _topSnapDurationInSec;
    double _totalTopSnapsDurationInSec;
    double _timeViewed;
    long long _snapCount;
    long long _adSkippableType;
    SCAdSnapLoadStatusLogParameters *_loadStatus;
    long long _storyType;
    long long _storyTypeSpecific;
    NSString *_posterId;
    long long _viewLocation;
    long long _autoAdvanceIndex;
    long long _adIndexPos;
    long long _adIndexCount;
    long long _snapIndexPos;
    long long _snapIndexCount;
    long long _entryEvent;
    long long _exitEvent;
    long long _entryIntent;
    long long _exitIntent;
    NSNumber *_storySessionId;
    long long _previousStoryItemType;
    long long _nextStoryItemType;
    NSString *_publisherId;
    NSString *_editionId;
    NSString *_channelDeepLinkId;
    long long _channelViewSource;
    long long _editionEntrySnapIndex;
    NSString *_adId;
    NSString *_adKey;
    NSString *_adPlacementId;
    NSString *_adLineItemId;
    NSString *_adRequestClientId;
    NSString *_adRequestId;
    NSString *_adUnitId;
    long long _adProductSourceType;
    long long _adReportFlaggedReason;
    long long _adReportExitType;
    long long _adReportExitLevel;
    long long _adSkipReason;
    long long _adInsertRetryCount;
    long long _adShareEntryEvent;
    long long _adShareRecipientCount;
    double _videoRollMinDegree;
    double _videoRollMaxDegree;
    double _tapPositionX;
    double _tapPositionY;
    double _tapPositionXRelative;
    double _tapPositionYRelative;
    long long _cardExitEvent;
    double _cardLastVisibleTimeSec;
    SCAdSnapLoadStatusLogParameters *_appInstallLoadStatus;
    long long _interactionZoneTotalItemCount;
    NSNumber *_lastInteractiveItemIndex;
    long long _interactionZoneStyle;
    long long _interactionZoneTotalViewCount;
    long long _interactionZoneUniqueViewCount;
    long long _interactionZoneMaxInteractedItemIndex;
    long long _webViewPageLoadCount;
    long long _webViewPageLoadErrorCount;
    double _webViewVisiblePageLoadTimeInSec;
    long long _webViewUserPermissionPromptCount;
    long long _webViewUserPermissionPromptAllowedCount;
    NSString *_webViewAutofillDetectedFields;
    NSString *_webViewDetectedFields;
    NSString *_webViewOnEditAutofilledFields;
    double _longformVideoDurationInSec;
    NSString *_longformVideoPartnerId;
    double _longformVideoAspectRatio;
    double _longformVideoCaptionTimeInSec;
    double _longformVideoLandscapeTimeInSec;
    SCAdSnapAppInfoLogParameters *_appInfo;
    NSString *_lensSessionId;
    double _lensLoadTimeInSec;
    NSString *_serveItemId;
    long long _winningDemandType;
    NSArray *_thirdPartryDemandSourceEligibleList;
    NSString *_petraQueryId;
    SCAdOrganicSnapLogParameters *_priorContentInfo;
    SCAdOrganicSnapLogParameters *_followingContentInfo;
}

@property(readonly, copy, nonatomic) SCAdOrganicSnapLogParameters *followingContentInfo; // @synthesize followingContentInfo=_followingContentInfo;
@property(readonly, copy, nonatomic) SCAdOrganicSnapLogParameters *priorContentInfo; // @synthesize priorContentInfo=_priorContentInfo;
@property(readonly, copy, nonatomic) NSString *petraQueryId; // @synthesize petraQueryId=_petraQueryId;
@property(readonly, copy, nonatomic) NSArray *thirdPartryDemandSourceEligibleList; // @synthesize thirdPartryDemandSourceEligibleList=_thirdPartryDemandSourceEligibleList;
@property(readonly, nonatomic) long long winningDemandType; // @synthesize winningDemandType=_winningDemandType;
@property(readonly, copy, nonatomic) NSString *serveItemId; // @synthesize serveItemId=_serveItemId;
@property(readonly, nonatomic) double lensLoadTimeInSec; // @synthesize lensLoadTimeInSec=_lensLoadTimeInSec;
@property(readonly, copy, nonatomic) NSString *lensSessionId; // @synthesize lensSessionId=_lensSessionId;
@property(readonly, nonatomic) _Bool lensIsLoadedOnExit; // @synthesize lensIsLoadedOnExit=_lensIsLoadedOnExit;
@property(readonly, nonatomic) _Bool lensIsLoadedOnEntry; // @synthesize lensIsLoadedOnEntry=_lensIsLoadedOnEntry;
@property(readonly, copy, nonatomic) SCAdSnapAppInfoLogParameters *appInfo; // @synthesize appInfo=_appInfo;
@property(readonly, nonatomic) double longformVideoLandscapeTimeInSec; // @synthesize longformVideoLandscapeTimeInSec=_longformVideoLandscapeTimeInSec;
@property(readonly, nonatomic) _Bool longformVideoStartedWithCaption; // @synthesize longformVideoStartedWithCaption=_longformVideoStartedWithCaption;
@property(readonly, nonatomic) double longformVideoCaptionTimeInSec; // @synthesize longformVideoCaptionTimeInSec=_longformVideoCaptionTimeInSec;
@property(readonly, nonatomic) double longformVideoAspectRatio; // @synthesize longformVideoAspectRatio=_longformVideoAspectRatio;
@property(readonly, copy, nonatomic) NSString *longformVideoPartnerId; // @synthesize longformVideoPartnerId=_longformVideoPartnerId;
@property(readonly, nonatomic) double longformVideoDurationInSec; // @synthesize longformVideoDurationInSec=_longformVideoDurationInSec;
@property(readonly, copy, nonatomic) NSString *webViewOnEditAutofilledFields; // @synthesize webViewOnEditAutofilledFields=_webViewOnEditAutofilledFields;
@property(readonly, copy, nonatomic) NSString *webViewDetectedFields; // @synthesize webViewDetectedFields=_webViewDetectedFields;
@property(readonly, copy, nonatomic) NSString *webViewAutofillDetectedFields; // @synthesize webViewAutofillDetectedFields=_webViewAutofillDetectedFields;
@property(readonly, nonatomic) long long webViewUserPermissionPromptAllowedCount; // @synthesize webViewUserPermissionPromptAllowedCount=_webViewUserPermissionPromptAllowedCount;
@property(readonly, nonatomic) long long webViewUserPermissionPromptCount; // @synthesize webViewUserPermissionPromptCount=_webViewUserPermissionPromptCount;
@property(readonly, nonatomic) double webViewVisiblePageLoadTimeInSec; // @synthesize webViewVisiblePageLoadTimeInSec=_webViewVisiblePageLoadTimeInSec;
@property(readonly, nonatomic) _Bool webViewLoadedOnExit; // @synthesize webViewLoadedOnExit=_webViewLoadedOnExit;
@property(readonly, nonatomic) _Bool webViewLoadedOnEntry; // @synthesize webViewLoadedOnEntry=_webViewLoadedOnEntry;
@property(readonly, nonatomic) long long webViewPageLoadErrorCount; // @synthesize webViewPageLoadErrorCount=_webViewPageLoadErrorCount;
@property(readonly, nonatomic) long long webViewPageLoadCount; // @synthesize webViewPageLoadCount=_webViewPageLoadCount;
@property(readonly, nonatomic) long long interactionZoneMaxInteractedItemIndex; // @synthesize interactionZoneMaxInteractedItemIndex=_interactionZoneMaxInteractedItemIndex;
@property(readonly, nonatomic) long long interactionZoneUniqueViewCount; // @synthesize interactionZoneUniqueViewCount=_interactionZoneUniqueViewCount;
@property(readonly, nonatomic) long long interactionZoneTotalViewCount; // @synthesize interactionZoneTotalViewCount=_interactionZoneTotalViewCount;
@property(readonly, nonatomic) long long interactionZoneStyle; // @synthesize interactionZoneStyle=_interactionZoneStyle;
@property(readonly, copy, nonatomic) NSNumber *lastInteractiveItemIndex; // @synthesize lastInteractiveItemIndex=_lastInteractiveItemIndex;
@property(readonly, nonatomic) long long interactionZoneTotalItemCount; // @synthesize interactionZoneTotalItemCount=_interactionZoneTotalItemCount;
@property(readonly, nonatomic) _Bool logInteractionZone; // @synthesize logInteractionZone=_logInteractionZone;
@property(readonly, copy, nonatomic) SCAdSnapLoadStatusLogParameters *appInstallLoadStatus; // @synthesize appInstallLoadStatus=_appInstallLoadStatus;
@property(readonly, nonatomic) _Bool isCameraAd; // @synthesize isCameraAd=_isCameraAd;
@property(readonly, nonatomic) double cardLastVisibleTimeSec; // @synthesize cardLastVisibleTimeSec=_cardLastVisibleTimeSec;
@property(readonly, nonatomic) _Bool deepLinkFallBackToWebview; // @synthesize deepLinkFallBackToWebview=_deepLinkFallBackToWebview;
@property(readonly, nonatomic) _Bool deepLinkFallBackToAppStore; // @synthesize deepLinkFallBackToAppStore=_deepLinkFallBackToAppStore;
@property(readonly, nonatomic) _Bool deepLinkFromCard; // @synthesize deepLinkFromCard=_deepLinkFromCard;
@property(readonly, nonatomic) long long cardExitEvent; // @synthesize cardExitEvent=_cardExitEvent;
@property(readonly, nonatomic) _Bool logCardMetrics; // @synthesize logCardMetrics=_logCardMetrics;
@property(readonly, nonatomic) double tapPositionYRelative; // @synthesize tapPositionYRelative=_tapPositionYRelative;
@property(readonly, nonatomic) double tapPositionXRelative; // @synthesize tapPositionXRelative=_tapPositionXRelative;
@property(readonly, nonatomic) double tapPositionY; // @synthesize tapPositionY=_tapPositionY;
@property(readonly, nonatomic) double tapPositionX; // @synthesize tapPositionX=_tapPositionX;
@property(readonly, nonatomic) _Bool logTapPosition; // @synthesize logTapPosition=_logTapPosition;
@property(readonly, nonatomic) double videoRollMaxDegree; // @synthesize videoRollMaxDegree=_videoRollMaxDegree;
@property(readonly, nonatomic) double videoRollMinDegree; // @synthesize videoRollMinDegree=_videoRollMinDegree;
@property(readonly, nonatomic) long long adShareRecipientCount; // @synthesize adShareRecipientCount=_adShareRecipientCount;
@property(readonly, nonatomic) long long adShareEntryEvent; // @synthesize adShareEntryEvent=_adShareEntryEvent;
@property(readonly, nonatomic) long long adInsertRetryCount; // @synthesize adInsertRetryCount=_adInsertRetryCount;
@property(readonly, nonatomic) _Bool reachedAdSlot; // @synthesize reachedAdSlot=_reachedAdSlot;
@property(readonly, nonatomic) long long adSkipReason; // @synthesize adSkipReason=_adSkipReason;
@property(readonly, nonatomic) long long adReportExitLevel; // @synthesize adReportExitLevel=_adReportExitLevel;
@property(readonly, nonatomic) long long adReportExitType; // @synthesize adReportExitType=_adReportExitType;
@property(readonly, nonatomic) long long adReportFlaggedReason; // @synthesize adReportFlaggedReason=_adReportFlaggedReason;
@property(readonly, nonatomic) long long adProductSourceType; // @synthesize adProductSourceType=_adProductSourceType;
@property(readonly, copy, nonatomic) NSString *adUnitId; // @synthesize adUnitId=_adUnitId;
@property(readonly, copy, nonatomic) NSString *adRequestId; // @synthesize adRequestId=_adRequestId;
@property(readonly, copy, nonatomic) NSString *adRequestClientId; // @synthesize adRequestClientId=_adRequestClientId;
@property(readonly, copy, nonatomic) NSString *adLineItemId; // @synthesize adLineItemId=_adLineItemId;
@property(readonly, copy, nonatomic) NSString *adPlacementId; // @synthesize adPlacementId=_adPlacementId;
@property(readonly, copy, nonatomic) NSString *adKey; // @synthesize adKey=_adKey;
@property(readonly, copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(readonly, nonatomic) long long editionEntrySnapIndex; // @synthesize editionEntrySnapIndex=_editionEntrySnapIndex;
@property(readonly, nonatomic) long long channelViewSource; // @synthesize channelViewSource=_channelViewSource;
@property(readonly, copy, nonatomic) NSString *channelDeepLinkId; // @synthesize channelDeepLinkId=_channelDeepLinkId;
@property(readonly, nonatomic) _Bool isArchivedChannel; // @synthesize isArchivedChannel=_isArchivedChannel;
@property(readonly, copy, nonatomic) NSString *editionId; // @synthesize editionId=_editionId;
@property(readonly, copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
@property(readonly, nonatomic) long long nextStoryItemType; // @synthesize nextStoryItemType=_nextStoryItemType;
@property(readonly, nonatomic) long long previousStoryItemType; // @synthesize previousStoryItemType=_previousStoryItemType;
@property(readonly, copy, nonatomic) NSNumber *storySessionId; // @synthesize storySessionId=_storySessionId;
@property(readonly, nonatomic) long long exitIntent; // @synthesize exitIntent=_exitIntent;
@property(readonly, nonatomic) long long entryIntent; // @synthesize entryIntent=_entryIntent;
@property(readonly, nonatomic) long long exitEvent; // @synthesize exitEvent=_exitEvent;
@property(readonly, nonatomic) long long entryEvent; // @synthesize entryEvent=_entryEvent;
@property(readonly, nonatomic) long long snapIndexCount; // @synthesize snapIndexCount=_snapIndexCount;
@property(readonly, nonatomic) long long snapIndexPos; // @synthesize snapIndexPos=_snapIndexPos;
@property(readonly, nonatomic) long long adIndexCount; // @synthesize adIndexCount=_adIndexCount;
@property(readonly, nonatomic) long long adIndexPos; // @synthesize adIndexPos=_adIndexPos;
@property(readonly, nonatomic) long long autoAdvanceIndex; // @synthesize autoAdvanceIndex=_autoAdvanceIndex;
@property(readonly, nonatomic) long long viewLocation; // @synthesize viewLocation=_viewLocation;
@property(readonly, copy, nonatomic) NSString *posterId; // @synthesize posterId=_posterId;
@property(readonly, nonatomic) long long storyTypeSpecific; // @synthesize storyTypeSpecific=_storyTypeSpecific;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, copy, nonatomic) SCAdSnapLoadStatusLogParameters *loadStatus; // @synthesize loadStatus=_loadStatus;
@property(readonly, nonatomic) long long adSkippableType; // @synthesize adSkippableType=_adSkippableType;
@property(readonly, nonatomic) long long snapCount; // @synthesize snapCount=_snapCount;
@property(readonly, nonatomic) _Bool isOnTopSnap; // @synthesize isOnTopSnap=_isOnTopSnap;
@property(readonly, nonatomic) double timeViewed; // @synthesize timeViewed=_timeViewed;
@property(readonly, nonatomic) _Bool isTopSnapFullyViewed; // @synthesize isTopSnapFullyViewed=_isTopSnapFullyViewed;
@property(readonly, nonatomic) double totalTopSnapsDurationInSec; // @synthesize totalTopSnapsDurationInSec=_totalTopSnapsDurationInSec;
@property(readonly, nonatomic) double topSnapDurationInSec; // @synthesize topSnapDurationInSec=_topSnapDurationInSec;
@property(readonly, nonatomic) double videoViewedTimeInSec; // @synthesize videoViewedTimeInSec=_videoViewedTimeInSec;
@property(readonly, nonatomic) _Bool isFullViewAd; // @synthesize isFullViewAd=_isFullViewAd;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaType:(long long)arg1 isFullViewAd:(_Bool)arg2 videoViewedTimeInSec:(double)arg3 topSnapDurationInSec:(double)arg4 totalTopSnapsDurationInSec:(double)arg5 isTopSnapFullyViewed:(_Bool)arg6 timeViewed:(double)arg7 isOnTopSnap:(_Bool)arg8 snapCount:(long long)arg9 adSkippableType:(long long)arg10 loadStatus:(id)arg11 storyType:(long long)arg12 storyTypeSpecific:(long long)arg13 posterId:(id)arg14 viewLocation:(long long)arg15 autoAdvanceIndex:(long long)arg16 adIndexPos:(long long)arg17 adIndexCount:(long long)arg18 snapIndexPos:(long long)arg19 snapIndexCount:(long long)arg20 entryEvent:(long long)arg21 exitEvent:(long long)arg22 entryIntent:(long long)arg23 exitIntent:(long long)arg24 storySessionId:(id)arg25 previousStoryItemType:(long long)arg26 nextStoryItemType:(long long)arg27 publisherId:(id)arg28 editionId:(id)arg29 isArchivedChannel:(_Bool)arg30 channelDeepLinkId:(id)arg31 channelViewSource:(long long)arg32 editionEntrySnapIndex:(long long)arg33 adId:(id)arg34 adKey:(id)arg35 adPlacementId:(id)arg36 adLineItemId:(id)arg37 adRequestClientId:(id)arg38 adRequestId:(id)arg39 adUnitId:(id)arg40 adProductSourceType:(long long)arg41 adReportFlaggedReason:(long long)arg42 adReportExitType:(long long)arg43 adReportExitLevel:(long long)arg44 adSkipReason:(long long)arg45 reachedAdSlot:(_Bool)arg46 adInsertRetryCount:(long long)arg47 adShareEntryEvent:(long long)arg48 adShareRecipientCount:(long long)arg49 videoRollMinDegree:(double)arg50 videoRollMaxDegree:(double)arg51 logTapPosition:(_Bool)arg52 tapPositionX:(double)arg53 tapPositionY:(double)arg54 tapPositionXRelative:(double)arg55 tapPositionYRelative:(double)arg56 logCardMetrics:(_Bool)arg57 cardExitEvent:(long long)arg58 deepLinkFromCard:(_Bool)arg59 deepLinkFallBackToAppStore:(_Bool)arg60 deepLinkFallBackToWebview:(_Bool)arg61 cardLastVisibleTimeSec:(double)arg62 isCameraAd:(_Bool)arg63 appInstallLoadStatus:(id)arg64 logInteractionZone:(_Bool)arg65 interactionZoneTotalItemCount:(long long)arg66 lastInteractiveItemIndex:(id)arg67 interactionZoneStyle:(long long)arg68 interactionZoneTotalViewCount:(long long)arg69 interactionZoneUniqueViewCount:(long long)arg70 interactionZoneMaxInteractedItemIndex:(long long)arg71 webViewPageLoadCount:(long long)arg72 webViewPageLoadErrorCount:(long long)arg73 webViewLoadedOnEntry:(_Bool)arg74 webViewLoadedOnExit:(_Bool)arg75 webViewVisiblePageLoadTimeInSec:(double)arg76 webViewUserPermissionPromptCount:(long long)arg77 webViewUserPermissionPromptAllowedCount:(long long)arg78 webViewAutofillDetectedFields:(id)arg79 webViewDetectedFields:(id)arg80 webViewOnEditAutofilledFields:(id)arg81 longformVideoDurationInSec:(double)arg82 longformVideoPartnerId:(id)arg83 longformVideoAspectRatio:(double)arg84 longformVideoCaptionTimeInSec:(double)arg85 longformVideoStartedWithCaption:(_Bool)arg86 longformVideoLandscapeTimeInSec:(double)arg87 appInfo:(id)arg88 lensIsLoadedOnEntry:(_Bool)arg89 lensIsLoadedOnExit:(_Bool)arg90 lensSessionId:(id)arg91 lensLoadTimeInSec:(double)arg92 serveItemId:(id)arg93 winningDemandType:(long long)arg94 thirdPartryDemandSourceEligibleList:(id)arg95 petraQueryId:(id)arg96 priorContentInfo:(id)arg97 followingContentInfo:(id)arg98;

@end

