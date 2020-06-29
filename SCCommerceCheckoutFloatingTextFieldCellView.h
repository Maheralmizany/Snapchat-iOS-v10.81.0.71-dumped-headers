//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSString, SCCommerceFloatingTextFieldCellViewModel, SCFloatLabeledTextField, UIImageView;
@protocol SCCommerceCheckoutFloatingTextFieldCellDelegate, SCCommerceCheckoutPaymentFieldFormatting;

@interface SCCommerceCheckoutFloatingTextFieldCellView : UIView <UITextFieldDelegate>
{
    SCCommerceFloatingTextFieldCellViewModel *_viewModel;
    UIImageView *_rightImage;
    NSArray *_constraints;
    _Bool _hasBeenEdited;
    id <SCCommerceCheckoutFloatingTextFieldCellDelegate> _delegate;
    id <SCCommerceCheckoutPaymentFieldFormatting> _textFieldFormatter;
    NSString *_validationRegex;
    NSString *_inputRegex;
    SCFloatLabeledTextField *_textField;
    CDUnknownBlockType _validator;
}

@property(nonatomic) _Bool hasBeenEdited; // @synthesize hasBeenEdited=_hasBeenEdited;
@property(copy, nonatomic) CDUnknownBlockType validator; // @synthesize validator=_validator;
@property(retain, nonatomic) SCFloatLabeledTextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) NSString *inputRegex; // @synthesize inputRegex=_inputRegex;
@property(copy, nonatomic) NSString *validationRegex; // @synthesize validationRegex=_validationRegex;
@property(retain, nonatomic) id <SCCommerceCheckoutPaymentFieldFormatting> textFieldFormatter; // @synthesize textFieldFormatter=_textFieldFormatter;
@property(nonatomic) __weak id <SCCommerceCheckoutFloatingTextFieldCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shouldShowWarning:(_Bool)arg1;
- (_Bool)isValidText;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (void)_updateConstraints;
- (void)_updateViewContent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
