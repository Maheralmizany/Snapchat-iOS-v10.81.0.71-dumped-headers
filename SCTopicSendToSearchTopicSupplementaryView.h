//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "SCViewModelConfigurable-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel, UITextField, UIView;
@protocol SCTopicSendToAddTopicsFromSearchDelegate, SCTopicSendToSearchTopicsDelegate;

@interface SCTopicSendToSearchTopicSupplementaryView : UICollectionReusableView <UITextFieldDelegate, SCViewModelConfigurable>
{
    UILabel *_hashLabel;
    UIView *_containerView;
    UITextField *_textField;
    id _viewModel;
    id <SCTopicSendToSearchTopicsDelegate> _searchDelegate;
    id <SCTopicSendToAddTopicsFromSearchDelegate> _addTopicDelegate;
}

@property(nonatomic) __weak id <SCTopicSendToAddTopicsFromSearchDelegate> addTopicDelegate; // @synthesize addTopicDelegate=_addTopicDelegate;
@property(nonatomic) __weak id <SCTopicSendToSearchTopicsDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

