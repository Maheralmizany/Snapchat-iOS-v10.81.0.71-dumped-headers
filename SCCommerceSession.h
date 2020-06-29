//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCommerceEventLogger-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol SCCommerceCartMetricsProvider;

@interface SCCommerceSession : NSObject <SCCommerceEventLogger>
{
    double _sessionStartTimestamp;
    _Bool _hasInputSearchTerms;
    _Bool _isShowcase;
    _Bool _isCheckoutOnboarding;
    NSString *_displayId;
    id <SCCommerceCartMetricsProvider> _cartMetricsProvider;
    NSString *_commerceSessionId;
    long long _originType;
    long long _source;
    long long _productType;
    NSString *_productId;
    NSString *_storeId;
    NSString *_productSetId;
    long long _productItemType;
    long long _primaryAvatarType;
    long long _secondaryAvatarType;
    NSString *_comicId;
    NSString *_currentCheckoutId;
    long long _snapAttachmentType;
    NSArray *_additionalParams;
    NSMutableArray *_pageIdStack;
}

@property(retain) NSMutableArray *pageIdStack; // @synthesize pageIdStack=_pageIdStack;
@property(readonly, nonatomic) NSArray *additionalParams; // @synthesize additionalParams=_additionalParams;
@property(nonatomic) _Bool isCheckoutOnboarding; // @synthesize isCheckoutOnboarding=_isCheckoutOnboarding;
@property(nonatomic) _Bool isShowcase; // @synthesize isShowcase=_isShowcase;
@property(nonatomic) long long snapAttachmentType; // @synthesize snapAttachmentType=_snapAttachmentType;
@property(nonatomic) _Bool hasInputSearchTerms; // @synthesize hasInputSearchTerms=_hasInputSearchTerms;
@property(copy, nonatomic) NSString *currentCheckoutId; // @synthesize currentCheckoutId=_currentCheckoutId;
@property(copy, nonatomic) NSString *comicId; // @synthesize comicId=_comicId;
@property(nonatomic) long long secondaryAvatarType; // @synthesize secondaryAvatarType=_secondaryAvatarType;
@property(nonatomic) long long primaryAvatarType; // @synthesize primaryAvatarType=_primaryAvatarType;
@property(nonatomic) long long productItemType; // @synthesize productItemType=_productItemType;
@property(retain, nonatomic) NSString *productSetId; // @synthesize productSetId=_productSetId;
@property(retain, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(readonly, nonatomic) long long productType; // @synthesize productType=_productType;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) long long originType; // @synthesize originType=_originType;
@property(readonly, nonatomic) NSString *commerceSessionId; // @synthesize commerceSessionId=_commerceSessionId;
@property(retain, nonatomic) id <SCCommerceCartMetricsProvider> cartMetricsProvider; // @synthesize cartMetricsProvider=_cartMetricsProvider;
@property(readonly, nonatomic) NSString *displayId; // @synthesize displayId=_displayId;
- (void).cxx_destruct;
- (void)logTextFieldInput:(long long)arg1;
- (void)logAttachmentCellSelect;
- (void)logAttachmentCellDeselect;
- (void)logRemoveAttachment;
- (void)logAddAttachment;
- (void)logPostAttachment:(_Bool)arg1 toGroup:(_Bool)arg2 toFriend:(_Bool)arg3;
- (void)logShippingMethodEventWithCheckout:(id)arg1 actionType:(long long)arg2 success:(_Bool)arg3 error:(id)arg4;
- (void)logCompletedCheckoutOrderWithCheckout:(id)arg1 order:(id)arg2 success:(_Bool)arg3 error:(id)arg4;
- (void)logCheckoutSessionWithCheckout:(id)arg1 actionType:(long long)arg2 success:(_Bool)arg3 error:(id)arg4;
- (void)logShippingMethodEventWithCheckoutMetricsProvider:(id)arg1 actionType:(long long)arg2 success:(_Bool)arg3 error:(id)arg4;
- (void)logCheckoutEventWithCheckoutMetricsProvider:(id)arg1 actionType:(long long)arg2 success:(_Bool)arg3 error:(id)arg4;
- (void)logContactDetailsEventWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)logShippingAddressEventWithShippingAddressId:(id)arg1 actionType:(long long)arg2 success:(_Bool)arg3 error:(id)arg4;
- (void)logCreditCardEventWithPaymentMethodId:(id)arg1 cardtype:(long long)arg2 actionType:(long long)arg3 success:(_Bool)arg4 error:(id)arg5;
- (void)logDiscountEventWithDiscountCode:(id)arg1 discountAmount:(id)arg2 currency:(id)arg3 actionType:(long long)arg4 success:(_Bool)arg5 error:(id)arg6;
- (id)_getUnlockMetadataFromLineItems:(id)arg1;
- (void)logBaseEvent:(id)arg1;
- (void)logBaseAPIEvent:(id)arg1 actionType:(long long)arg2 success:(_Bool)arg3 error:(id)arg4;
- (id)mutableJsonMetadataDictionaryForEvent:(id)arg1;
- (void)appendToJsonMetadataOnEvent:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)addCartToMetadata:(id)arg1;
- (void)populateBitmojiPropertiesForEvent:(id)arg1;
- (void)populateBasePropertiesForEvent:(id)arg1;
- (void)logOpenFromLink:(long long)arg1;
- (void)logValidationFailure:(long long)arg1;
- (void)logCommerceRestActionEventWithEndpoint:(long long)arg1 action:(long long)arg2 result:(_Bool)arg3 statusCode:(long long)arg4 latency:(long long)arg5 errorCode:(id)arg6 jsonMetadata:(id)arg7;
- (void)logUnlockMappingWithUnlockableId:(id)arg1 unlockableType:(long long)arg2 currentPage:(long long)arg3;
- (void)logOrder:(id)arg1 checkoutId:(id)arg2 lineItems:(id)arg3;
- (void)_logCommerceActionBaseEvent:(id)arg1 currentCard:(long long)arg2 currentPage:(long long)arg3;
- (void)logButtonTap:(long long)arg1 currentCard:(long long)arg2 currentPage:(long long)arg3 jsonMetadata:(id)arg4;
- (void)logButtonTap:(long long)arg1 currentCard:(long long)arg2 currentPage:(long long)arg3;
- (void)logButtonTap:(long long)arg1 currentPage:(long long)arg2 jsonMetadata:(id)arg3;
- (void)logButtonTap:(long long)arg1 currentPage:(long long)arg2;
- (void)logCardAction:(long long)arg1 card:(long long)arg2 currentPage:(long long)arg3;
- (void)logTapOnPage:(long long)arg1;
- (void)logSwipeUpOnPage:(long long)arg1;
- (void)logCardClose:(long long)arg1 currentPage:(long long)arg2 metricsDataSource:(id)arg3;
- (void)logCardOpen:(long long)arg1 currentPage:(long long)arg2 metricsDataSource:(id)arg3;
- (void)logCardOpen:(long long)arg1 currentPage:(long long)arg2;
- (void)_logCommercePageBaseEvent:(id)arg1 currentPage:(long long)arg2;
- (void)logPageClose:(long long)arg1 destinationPage:(long long)arg2 metricsDataSource:(id)arg3;
- (void)logPageClose:(long long)arg1 metricsDataSource:(id)arg2;
- (void)logPageOpen:(long long)arg1 sourcePage:(long long)arg2 metricsDataSource:(id)arg3 jsonMetadata:(id)arg4;
- (void)logPageOpen:(long long)arg1 sourcePage:(long long)arg2 metricsDataSource:(id)arg3;
- (void)logPageOpen:(long long)arg1 metricsDataSource:(id)arg2 jsonMetadata:(id)arg3;
- (void)logPageOpen:(long long)arg1 metricsDataSource:(id)arg2;
- (void)endCurrentPageSession;
- (id)pageSessionId;
- (void)startNewPageSession:(long long)arg1;
- (void)populateParametersForDeeplink:(id)arg1;
- (id)initWithDeeplinkURL:(id)arg1 source:(long long)arg2 productType:(long long)arg3 originType:(long long)arg4;
- (id)initWithSource:(long long)arg1 productType:(long long)arg2 originType:(long long)arg3;
- (void)clearProductTraits;
- (void)updateBitmojiTraitsWithPrimaryAvatarType:(long long)arg1 secondaryAvatarType:(long long)arg2 comicId:(id)arg3;
- (void)updateProductFieldsWithInfo:(id)arg1 bitmojiOptions:(id)arg2;

@end
