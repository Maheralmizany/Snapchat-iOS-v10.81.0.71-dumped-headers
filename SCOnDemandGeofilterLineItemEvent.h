//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOnDemandGeofilterDataControllerListener-Protocol.h"

@class NSString, SCAGeofilterOndemandOfferPreview, SCAGeofilterOndemandPurchaseLineItem, SCOnDemandGeofilterEventsLogger, SOJUUnlockablesOndemandLineItem;

@interface SCOnDemandGeofilterLineItemEvent : NSObject <SCOnDemandGeofilterDataControllerListener>
{
    SCOnDemandGeofilterEventsLogger *_eventsLogger;
    SCAGeofilterOndemandOfferPreview *_offerPreviewEvent;
    SCAGeofilterOndemandPurchaseLineItem *_purchaseLineItemEvent;
    _Bool _fromLineItemDraft;
    SOJUUnlockablesOndemandLineItem *_lineItem;
    NSString *_viewportNorthWest;
    NSString *_viewportNorthEast;
    NSString *_viewportSouthEast;
    NSString *_viewportSouthWest;
    unsigned long long _offerSequenceId;
    NSString *_creativeTemplateId;
    NSString *_creativeColorUsed;
    NSString *_creativeStickerIds;
    unsigned long long _creativeStickerCount;
    NSString *_creativeTextBoxes;
    unsigned long long _creativeTextBoxesCount;
    NSString *_creativeBitmojiIds;
    unsigned long long _creativeBitmojiCount;
    NSString *_creativeNonSelfBitmojiIds;
    unsigned long long _creativeNonSelfBitmojiCount;
    NSString *_creativeFriendmojiIds;
    unsigned long long _creativeFriendmojiCount;
    NSString *_referrer;
    NSString *_draftId;
}

@property(nonatomic, getter=isFromLineItemDraft) _Bool fromLineItemDraft; // @synthesize fromLineItemDraft=_fromLineItemDraft;
@property(retain, nonatomic) NSString *draftId; // @synthesize draftId=_draftId;
@property(retain, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
@property(nonatomic) unsigned long long creativeFriendmojiCount; // @synthesize creativeFriendmojiCount=_creativeFriendmojiCount;
@property(retain, nonatomic) NSString *creativeFriendmojiIds; // @synthesize creativeFriendmojiIds=_creativeFriendmojiIds;
@property(nonatomic) unsigned long long creativeNonSelfBitmojiCount; // @synthesize creativeNonSelfBitmojiCount=_creativeNonSelfBitmojiCount;
@property(retain, nonatomic) NSString *creativeNonSelfBitmojiIds; // @synthesize creativeNonSelfBitmojiIds=_creativeNonSelfBitmojiIds;
@property(nonatomic) unsigned long long creativeBitmojiCount; // @synthesize creativeBitmojiCount=_creativeBitmojiCount;
@property(retain, nonatomic) NSString *creativeBitmojiIds; // @synthesize creativeBitmojiIds=_creativeBitmojiIds;
@property(nonatomic) unsigned long long creativeTextBoxesCount; // @synthesize creativeTextBoxesCount=_creativeTextBoxesCount;
@property(retain, nonatomic) NSString *creativeTextBoxes; // @synthesize creativeTextBoxes=_creativeTextBoxes;
@property(nonatomic) unsigned long long creativeStickerCount; // @synthesize creativeStickerCount=_creativeStickerCount;
@property(retain, nonatomic) NSString *creativeStickerIds; // @synthesize creativeStickerIds=_creativeStickerIds;
@property(retain, nonatomic) NSString *creativeColorUsed; // @synthesize creativeColorUsed=_creativeColorUsed;
@property(retain, nonatomic) NSString *creativeTemplateId; // @synthesize creativeTemplateId=_creativeTemplateId;
@property(nonatomic) unsigned long long offerSequenceId; // @synthesize offerSequenceId=_offerSequenceId;
@property(retain, nonatomic) NSString *viewportSouthWest; // @synthesize viewportSouthWest=_viewportSouthWest;
@property(retain, nonatomic) NSString *viewportSouthEast; // @synthesize viewportSouthEast=_viewportSouthEast;
@property(retain, nonatomic) NSString *viewportNorthEast; // @synthesize viewportNorthEast=_viewportNorthEast;
@property(retain, nonatomic) NSString *viewportNorthWest; // @synthesize viewportNorthWest=_viewportNorthWest;
@property(retain, nonatomic) SOJUUnlockablesOndemandLineItem *lineItem; // @synthesize lineItem=_lineItem;
- (void).cxx_destruct;
- (void)dataController:(id)arg1 didSubmitGeofilterWithId:(id)arg2 success:(_Bool)arg3 approved:(_Bool)arg4 error:(id)arg5;
- (void)dataController:(id)arg1 didFetchOffer:(id)arg2 success:(_Bool)arg3 validationErrors:(id)arg4;
- (id)initWithLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

