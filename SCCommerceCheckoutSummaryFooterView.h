//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCViewModelConfigurable-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSArray, NSString, SCCommerceCheckoutSummaryFooterViewModel, SIGButton, UITextView;
@protocol SCCommerceSummaryFooterViewDelegate;

@interface SCCommerceCheckoutSummaryFooterView : UIView <SCViewModelConfigurable, UITextViewDelegate>
{
    NSArray *_constraints;
    SCCommerceCheckoutSummaryFooterViewModel *_viewModel;
    UITextView *_termsTextView;
    SIGButton *_orderButton;
    UIView *_backgroundView;
    id <SCCommerceSummaryFooterViewDelegate> _delegate;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(nonatomic) __weak id <SCCommerceSummaryFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)_nextButtonTapped;
- (void)_updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

