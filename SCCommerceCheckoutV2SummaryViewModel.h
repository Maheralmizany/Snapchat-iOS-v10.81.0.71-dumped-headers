//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCCommerceCheckoutFlowHeaderViewModel, SCCommerceCheckoutPopUpViewModel, SCCommerceCheckoutSummaryFooterViewModel;

@interface SCCommerceCheckoutV2SummaryViewModel : NSObject <NSCopying>
{
    _Bool _isLoading;
    SCCommerceCheckoutFlowHeaderViewModel *_header;
    NSArray *_sections;
    SCCommerceCheckoutSummaryFooterViewModel *_footer;
    SCCommerceCheckoutPopUpViewModel *_popupViewModel;
}

@property(readonly, copy, nonatomic) SCCommerceCheckoutPopUpViewModel *popupViewModel; // @synthesize popupViewModel=_popupViewModel;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, copy, nonatomic) SCCommerceCheckoutSummaryFooterViewModel *footer; // @synthesize footer=_footer;
@property(readonly, copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, copy, nonatomic) SCCommerceCheckoutFlowHeaderViewModel *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeader:(id)arg1 sections:(id)arg2 footer:(id)arg3 isLoading:(_Bool)arg4 popupViewModel:(id)arg5;

@end
