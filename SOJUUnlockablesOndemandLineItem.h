//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesOndemandLineItem-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUUnlockablesOndemandApprovalStatus, SOJUUnlockablesOndemandAsset, SOJUUnlockablesOndemandAutoApprovalResult, SOJUUnlockablesOndemandCancellation, SOJUUnlockablesOndemandCountry, SOJUUnlockablesOndemandLease, SOJUUnlockablesOndemandLineItemProperties, SOJUUnlockablesOndemandMobilePayment, SOJUUnlockablesOndemandOwner, SOJUUnlockablesOndemandPayment, SOJUUnlockablesOndemandPriceCalculation, SOJUUnlockablesOndemandSchedule, SOJUUnlockablesOndemandServing, SOJUUnlockablesOndemandSubmission, SOJUUnlockablesOndemandTargeting;

@interface SOJUUnlockablesOndemandLineItem : SCSojuMessage <SOJUUnlockablesOndemandLineItem>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIdValue:(id)arg1 submission:(id)arg2 owner:(id)arg3 asset:(id)arg4 assets:(id)arg5 targeting:(id)arg6 schedule:(id)arg7 properties:(id)arg8 offer:(id)arg9 payment:(id)arg10 approval:(id)arg11 serving:(id)arg12 cancellation:(id)arg13 locale:(id)arg14 tosVersion:(id)arg15 country:(id)arg16 orgCountry:(id)arg17 lease:(id)arg18 userAgent:(id)arg19 mobilePayment:(id)arg20 preRenderingAssetsStructuredId:(id)arg21 templateId:(id)arg22 discountCode:(id)arg23 templateInstanceId:(id)arg24 autoApprovalResult:(id)arg25 productType:(id)arg26 previewRequestId:(id)arg27 paymentCollectedBeforeSubmission:(id)arg28 bundleLineitemId:(id)arg29 canSubmitRedesignForAccepted:(id)arg30 canResubmitRejectedFilter:(id)arg31 paymentOnSubmission:(id)arg32;
- (id)setPendingLineItemStatus:(id)arg1 itemId:(id)arg2;
- (id)setPendingLineItemStatus:(id)arg1;
- (_Bool)canResubmitForApproved;
- (_Bool)canResubmitForRejected;
- (_Bool)canCreateDraft;
- (id)stringForRejectionCode;
- (_Bool)flightTimeLessThan24Hours;
- (_Bool)shouldPayOnSubmission:(id)arg1;
- (_Bool)canCollectPaymentFirst;
- (_Bool)autoRejected;
- (_Bool)autoApproved;
- (_Bool)shouldEnableCancellation;
- (_Bool)shouldShowManageSection;
- (_Bool)shouldShowMetrics;
- (_Bool)shouldShowRejectionReason;
- (id)statusMessage;
- (_Bool)isUnsubmitted;
- (id)localizedPrice;
- (_Bool)isFreeGeoFilter;
- (_Bool)notificationHasShown;
- (void)setPaymentSource:(id)arg1;
- (id)paymentSource;
- (void)setNotificationHasShown:(_Bool)arg1;
- (id)validationErrorWithCode:(unsigned long long)arg1;
- (id)validationAndFixWithGeofilterSession:(id)arg1;
- (id)submissionInvalidInfo;
- (void)setSubmissionInvalidInfo:(id)arg1;
- (id)lineItemStatusColor;
- (id)lineItemStatusBackgroundColor;
- (id)lineItemApprovalStatusMessage;
- (unsigned long long)lineItemApprovalStatus;

// Remaining properties
@property(readonly, nonatomic) SOJUUnlockablesOndemandApprovalStatus *approval; // @dynamic approval;
@property(readonly, nonatomic) SOJUUnlockablesOndemandAsset *asset; // @dynamic asset;
@property(readonly, nonatomic) NSArray *assets; // @dynamic assets;
@property(readonly, nonatomic) SOJUUnlockablesOndemandAutoApprovalResult *autoApprovalResult; // @dynamic autoApprovalResult;
@property(readonly, nonatomic) NSString *bundleLineitemId; // @dynamic bundleLineitemId;
@property(readonly, nonatomic) NSNumber *canResubmitRejectedFilter; // @dynamic canResubmitRejectedFilter;
@property(readonly, nonatomic) NSNumber *canSubmitRedesignForAccepted; // @dynamic canSubmitRedesignForAccepted;
@property(readonly, nonatomic) SOJUUnlockablesOndemandCancellation *cancellation; // @dynamic cancellation;
@property(readonly, nonatomic) SOJUUnlockablesOndemandCountry *country; // @dynamic country;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *discountCode; // @dynamic discountCode;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) SOJUUnlockablesOndemandLease *lease; // @dynamic lease;
@property(readonly, nonatomic) NSString *locale; // @dynamic locale;
@property(readonly, nonatomic) SOJUUnlockablesOndemandMobilePayment *mobilePayment; // @dynamic mobilePayment;
@property(readonly, nonatomic) SOJUUnlockablesOndemandPriceCalculation *offer; // @dynamic offer;
@property(readonly, nonatomic) NSString *orgCountry; // @dynamic orgCountry;
@property(readonly, nonatomic) SOJUUnlockablesOndemandOwner *owner; // @dynamic owner;
@property(readonly, nonatomic) SOJUUnlockablesOndemandPayment *payment; // @dynamic payment;
@property(readonly, nonatomic) NSNumber *paymentCollectedBeforeSubmission; // @dynamic paymentCollectedBeforeSubmission;
@property(readonly, nonatomic) NSNumber *paymentOnSubmission; // @dynamic paymentOnSubmission;
@property(readonly, nonatomic) NSString *preRenderingAssetsStructuredId; // @dynamic preRenderingAssetsStructuredId;
@property(readonly, nonatomic) NSString *previewRequestId; // @dynamic previewRequestId;
@property(readonly, nonatomic) NSString *productType; // @dynamic productType;
@property(readonly, nonatomic) SOJUUnlockablesOndemandLineItemProperties *properties; // @dynamic properties;
@property(readonly, nonatomic) SOJUUnlockablesOndemandSchedule *schedule; // @dynamic schedule;
@property(readonly, nonatomic) SOJUUnlockablesOndemandServing *serving; // @dynamic serving;
@property(readonly, nonatomic) SOJUUnlockablesOndemandSubmission *submission; // @dynamic submission;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SOJUUnlockablesOndemandTargeting *targeting; // @dynamic targeting;
@property(readonly, nonatomic) NSString *templateId; // @dynamic templateId;
@property(readonly, nonatomic) NSString *templateInstanceId; // @dynamic templateInstanceId;
@property(readonly, nonatomic) NSString *tosVersion; // @dynamic tosVersion;
@property(readonly, nonatomic) NSString *userAgent; // @dynamic userAgent;

@end

