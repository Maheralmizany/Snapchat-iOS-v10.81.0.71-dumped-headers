//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SIGAnimationContext-Protocol.h"
#import "SIGHeaderEditingTextFieldDelgate-Protocol.h"
#import "SIGHeaderItemObserverDelegate-Protocol.h"
#import "SIGHeaderItemViewTransitioning-Protocol.h"

@class NSLayoutConstraint, NSString, SIGAnimationContext, SIGHeaderEditingTextField, SIGHeaderItem, SIGHeaderItemKeyValueObserver, UILabel, UITapGestureRecognizer;

@interface SIGHeaderTitle : UIView <SIGHeaderItemObserverDelegate, SIGAnimationContext, SIGHeaderEditingTextFieldDelgate, SIGHeaderItemViewTransitioning>
{
    SIGHeaderItemKeyValueObserver *_headerItemKVO;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_incomingTitleLabel;
    SIGHeaderItem *_incomingHeaderItem;
    UILabel *_incomingSubtitleLabel;
    SIGAnimationContext *_currentAnimation;
    NSLayoutConstraint *_subtitleHeightConstraint;
    SIGHeaderEditingTextField *_titleTextField;
    UITapGestureRecognizer *_titleLabelTapGestureRecognizer;
    SIGHeaderItem *_headerItem;
}

@property(readonly, nonatomic) SIGHeaderItem *headerItem; // @synthesize headerItem=_headerItem;
- (void).cxx_destruct;
- (double)_heightForSubtitleLabel:(id)arg1;
- (void)completeAnimation:(_Bool)arg1;
- (id)startAnimationForTransitionTo:(id)arg1 style:(long long)arg2;
- (_Bool)headerItemViewCanTransitionInPlaceTo:(id)arg1;
- (void)headerItem:(id)arg1 didChangeEditableTitlePlaceholderText:(id)arg2;
- (void)headerItem:(id)arg1 didChangeTitleEditable:(_Bool)arg2;
- (void)headerItem:(id)arg1 didChangeSubtitle:(id)arg2;
- (void)headerItem:(id)arg1 didChangeTitle:(id)arg2;
- (void)SIGHeaderEditingTextFieldDidResign:(id)arg1;
- (void)_exitTitleEditMode;
- (void)_removeEditableTitle;
- (void)_titleTapped:(id)arg1;
- (void)resignTextField;
- (void)setHeaderItem:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithHeaderItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
