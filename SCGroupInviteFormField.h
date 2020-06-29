//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIImageView, UITextField;
@protocol SCGroupInviteFormFieldDelegate;

@interface SCGroupInviteFormField : UIView <UITextFieldDelegate>
{
    UITextField *_field;
    UIImageView *_icon;
    UIView *_bottomBorderView;
    UIView *_chevron;
    _Bool _editingEnabled;
    _Bool _chevronVisible;
    id <SCGroupInviteFormFieldDelegate> _delegate;
    UIView *_inputView;
}

+ (double)height;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) _Bool chevronVisible; // @synthesize chevronVisible=_chevronVisible;
@property(nonatomic) _Bool editingEnabled; // @synthesize editingEnabled=_editingEnabled;
@property(nonatomic) __weak id <SCGroupInviteFormFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)canBecomeFirstResponder;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)resignTextField;
- (void)focusTextField;
@property(nonatomic) _Bool showsBottomDivider;
@property(copy, nonatomic) NSString *text;
- (void)_tapped;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithIcon:(id)arg1 placeholder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

