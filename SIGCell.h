//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString, NSString, SCAvatarView, SIGLabel, UIColor, UIImageView, UILayoutGuide;

@interface SIGCell : UIView
{
    NSArray *_leadingAccessoryViewConstraints;
    UILayoutGuide *_labelsLayoutGuide;
    NSArray *_labelsContainerConstraints;
    NSArray *_titleLabelConstraints;
    NSArray *_detailLabelConstraints;
    NSArray *_alternateLabelConstraints;
    NSArray *_trailingAccessoryViewConstraints;
    UIImageView *_actionIndicatorView;
    UIImageView *_starBadgeView;
    NSArray *_actionIndicatorConstraints;
    NSArray *_starBadgeConstraints;
    _Bool _alternateLabelIsValue;
    UIColor *_preHighlightBackgroundColor;
    _Bool _selected;
    _Bool _highlighted;
    _Bool _enabled;
    _Bool _starBadge;
    _Bool _destructive;
    _Bool _centered;
    unsigned long long _style;
    UIView *_leadingAccessoryView;
    NSString *_badgeText;
    UIView *_trailingAccessoryView;
    unsigned long long _actionIndicator;
    unsigned long long _textStyle;
    SIGLabel *_textLabel;
    SIGLabel *_detailLabel;
    SIGLabel *_alternateLabel;
    struct UIEdgeInsets _edgeInsets;
}

+ (double)heightForCellWithStyle:(unsigned long long)arg1;
+ (id)tallCellWithAvatar;
+ (id)tallCell;
+ (id)compressedCellWithAvatar;
+ (id)compressedCell;
+ (id)standardCellWithAvatar;
+ (id)standardCell;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) SIGLabel *alternateLabel; // @synthesize alternateLabel=_alternateLabel;
@property(readonly, nonatomic) SIGLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) SIGLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic, getter=isCentered) _Bool centered; // @synthesize centered=_centered;
@property(nonatomic, getter=isDestructive) _Bool destructive; // @synthesize destructive=_destructive;
@property(nonatomic) unsigned long long textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) unsigned long long actionIndicator; // @synthesize actionIndicator=_actionIndicator;
@property(retain, nonatomic) UIView *trailingAccessoryView; // @synthesize trailingAccessoryView=_trailingAccessoryView;
@property(copy, nonatomic) NSString *badgeText; // @synthesize badgeText=_badgeText;
@property(nonatomic, getter=isStarBadge) _Bool starBadge; // @synthesize starBadge=_starBadge;
@property(retain, nonatomic) UIView *leadingAccessoryView; // @synthesize leadingAccessoryView=_leadingAccessoryView;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_setTextLabelSelected:(_Bool)arg1;
- (id)_constraintsForBadge;
- (void)_updateConstraintsForStarBadge;
- (id)_constraintsForActionIndicator;
- (void)_updateConstraintsForActionIndicator;
- (id)_constraintsForTrailingAccessoryView;
- (void)_updateConstraintsForTrailingAccessoryView;
- (void)_configureLayoutDirection;
- (id)_constraintsForAlternateLabel;
- (void)_updateConstraintsForAlternateLabel;
- (id)_constraintsForDetailsLabel;
- (void)_updateConstraintsForDetailLabel;
- (id)_constraintsForTitleLabel;
- (void)_updateConstraintsForTitleLabel;
- (id)_constraintsForLabelsContainer;
- (void)_updateConstraintsForLabelsContainer;
- (id)_constraintsForLeadingAccessoryView;
- (void)_updateConstraintsForLeadingAccessoryView;
- (void)_setupAutolayoutConstraints;
- (void)_createAlternateLabelIfNeeded;
- (void)_createDetailsLabelIfNeeded;
- (struct CGSize)intrinsicContentSize;
@property(copy, nonatomic) NSString *valueText;
@property(copy, nonatomic) NSString *emojiText;
@property(copy, nonatomic) NSAttributedString *attributedDetailText;
@property(copy, nonatomic) NSString *detailText;
@property(copy, nonatomic) NSAttributedString *attributedTitleText;
@property(copy, nonatomic) NSString *titleText;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
@property(retain, nonatomic) SCAvatarView *avatarView;
- (id)initWithStyle:(unsigned long long)arg1;

@end

