//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, SCOnDemandGeofilterDataControllerListenerAnnouncer, SCOnDemandGeofilterDataControllerNotificationListenerAnnouncer, SCPreferences, SOJUUnlockablesOndemandAssetDraftList, SOJUUnlockablesOndemandLineItem, SOJUUnlockablesOndemandLineItemList, SOJUUnlockablesOndemandOfferedInventory, SOJUUnlockablesOndemandStylizedTextList, SOJUUnlockablesOndemandTemplateCategoryList, SOJUUnlockablesOndemandUser;
@protocol SCOnDemandGeofilterNetworkingProtocol;

@interface SCOnDemandGeofilterDataController : NSObject
{
    id <SCOnDemandGeofilterNetworkingProtocol> _networkManager;
    SCOnDemandGeofilterDataControllerListenerAnnouncer *_announcer;
    SCOnDemandGeofilterDataControllerNotificationListenerAnnouncer *_notificationAnnouncer;
    SOJUUnlockablesOndemandUser *_user;
    SOJUUnlockablesOndemandOfferedInventory *_offeredInventory;
    SOJUUnlockablesOndemandLineItemList *_cachedLineItemList;
    SOJUUnlockablesOndemandTemplateCategoryList *_cachedTemplateCategoryList;
    SOJUUnlockablesOndemandTemplateCategoryList *_cachedLensTemplateCategoryList;
    SOJUUnlockablesOndemandStylizedTextList *_cachedStylizedTextPresetsODG;
    SOJUUnlockablesOndemandAssetDraftList *_cachedAssetDraftList;
    SOJUUnlockablesOndemandStylizedTextList *_cachedStylizedTextPresets;
    SOJUUnlockablesOndemandLineItem *_notificationLineItem;
    SCPreferences *_userPreferences;
    NSMutableDictionary *_purchasingDictionary;
    NSMutableSet *_failureToVerifyPaymentSet;
    SOJUUnlockablesOndemandLineItem *_purchasingLineItem;
}

- (void).cxx_destruct;
- (id)_saveCachedLineItemList:(id)arg1;
- (id)cachedLineItemWithId:(id)arg1;
- (unsigned long long)_indexOfLineItemIdValue:(id)arg1;
- (void)_updateLineItemInCachedLineItemListWithLineItem:(id)arg1 pendingItem:(_Bool)arg2;
- (void)_updateLineItemInCachedLineItemListWithLineItem:(id)arg1;
- (void)_insertLineItemInCachedLineItemListWithLineItem:(id)arg1;
- (void)fetchStylizedText;
- (id)stylizedTextPresets;
- (id)_fontsFromTemplateList;
- (id)stylizedTextStylesForODG;
- (id)lineItemDraftCreationTimestamp;
- (id)lineItemDraftNumRemindersShown;
- (void)setLineItemDraft:(id)arg1;
- (id)lineItemDraft;
- (void)deleteAssetDraft:(id)arg1;
- (void)fetchAssetDrafts;
- (void)createAssetDraftWithAssetDraft:(id)arg1;
- (id)assetDraftList;
- (id)_cachedTemplateCategoryListKeyForProductType:(long long)arg1;
- (void)_setCachedTemplateCategoryList:(id)arg1 withProductType:(long long)arg2;
- (void)fetchTemplatesForProductType:(long long)arg1 withFilterType:(unsigned long long)arg2;
- (id)templateCategoryList;
- (_Bool)lineItemRequiresAttention;
- (id)lineItemsPendingCollection;
- (void)_fetchLineItemWithId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchLineItemFromNotificationWithId:(id)arg1;
- (void)fetchLineItemWithId:(id)arg1;
- (void)updateFailToVerifyPaymentSet:(id)arg1;
- (void)updateUserPurchasingDictionary:(id)arg1;
- (void)updateLastUsedEmail:(id)arg1;
- (void)updateUserInfo:(id)arg1;
- (void)updateApprovedValidDate:(id)arg1;
- (void)resyncFailAndExpiredItems;
- (id)lineItemInPurchasingDictionaryMatchingLineItem:(id)arg1;
- (id)_latestApprovedItemExpiredDateInLineItemList:(id)arg1;
- (void)_updateNotificationLineItemFromLatestItemList:(id)arg1;
- (void)updateNotificationListenerByCurrentData;
- (void)updateListenerByCurrentData:(id)arg1;
- (void)removeNotificationItemListener:(id)arg1;
- (void)addNotificationItemListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)updateCurrentUserLineItemListWithPreloadFromCache:(_Bool)arg1 pageSize:(long long)arg2;
- (void)updateCurrentUserLineItemListWithPreloadFromCache:(_Bool)arg1;
- (void)checkRecentItemsInApprovedState;
- (void)updateCurrentEditingLineItem:(id)arg1 shouldUpdatePrice:(_Bool)arg2;
- (void)fetchOfferedInventory;
- (void)fetchODGUser;
- (void)cancelGeofilterWithLineItem:(id)arg1;
- (void)fetchOfferPreviewWithLineItem:(id)arg1;
- (void)resubmitCreativeWithLineItem:(id)arg1;
- (void)resubmitGeofilterWithLineItem:(id)arg1;
- (void)createGeofilterWithLineItem:(id)arg1 emailAddress:(id)arg2 shouldPayOnSubmission:(_Bool)arg3;
- (void)uploadAssetMetadata:(id)arg1;
- (id)mobilePaymentEventWithLineItem:(id)arg1;
- (void)completeTransactionBasedOn:(id)arg1;
- (id)updatePurchasingLineItems:(id)arg1;
- (void)finishTransactionBasedOnId:(id)arg1;
- (_Bool)initPurchaseLineItem:(id)arg1;
- (void)_productPurchasing:(id)arg1;
- (void)_productPurchaseFailed:(id)arg1;
- (void)_productPurchased:(id)arg1;
- (id)notificationLineItem;
- (id)currentUserLineItemList;
- (id)offeredInventory;
- (id)user;
- (id)lastUsedEmail;
- (id)initWithNetworkManager:(id)arg1 userPreferences:(id)arg2 cachedCurrentUserLineItemList:(id)arg3;

@end
