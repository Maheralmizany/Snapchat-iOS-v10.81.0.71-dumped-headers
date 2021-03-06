//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSString, SCCommerceCheckoutDiscountTextFieldCellViewModel, SIGButton, UITextField;
@protocol SCCommerceCheckoutTextFieldCellDelegate;

@interface SCCommerceCheckoutTextFieldCellView : UIView <UITextFieldDelegate>
{
    NSArray *_constraints;
    UITextField *_textField;
    SIGButton *_actionButton;
    SCCommerceCheckoutDiscountTextFieldCellViewModel *_viewModel;
    id <SCCommerceCheckoutTextFieldCellDelegate> _delegate;
}

@property(nonatomic) __weak id <SCCommerceCheckoutTextFieldCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateActionButtonState;
- (void)_updateConstraints;
- (void)_actionButtonTapped;
- (void)_updateViewContent:(id)arg1;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

