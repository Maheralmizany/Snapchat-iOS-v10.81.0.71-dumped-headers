//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, NSString, SCActionModel, SCAvatarContainerViewModel, SCCornerRadii, SCFriendsFeedComponentViewRightButtonViewModel, SCFriendsFeedFriendmojiViewModel, SCFriendsFeedIcon, UIFont;

@interface SCFriendsFeedComponentViewModel : NSObject <NSCopying>
{
    _Bool _showOfficialBadge;
    _Bool _isPinned;
    NSAttributedString *_attributedDisplayText;
    NSAttributedString *_attributedSublabelText;
    NSString *_substringToTruncateInSubLabel;
    SCFriendsFeedIcon *_feedIcon;
    SCAvatarContainerViewModel *_friendsFeedAvatarViewModel;
    SCFriendsFeedComponentViewRightButtonViewModel *_rightButtonViewModel;
    UIFont *_separatorFont;
    SCFriendsFeedFriendmojiViewModel *_friendmojiViewModel;
    SCFriendsFeedFriendmojiViewModel *_sublabelFriendmojiViewModel;
    SCActionModel *_animationModel;
    SCActionModel *_tapActionModel;
    SCActionModel *_swipeActionModel;
    SCActionModel *_doubleTapActionModel;
    SCActionModel *_longPressActionModel;
    SCActionModel *_avatarTapActionModel;
    SCActionModel *_buttonTapActionModel;
    SCActionModel *_autoRetryActionModel;
    SCCornerRadii *_cornerRadii;
}

@property(readonly, nonatomic) _Bool isPinned; // @synthesize isPinned=_isPinned;
@property(readonly, nonatomic) _Bool showOfficialBadge; // @synthesize showOfficialBadge=_showOfficialBadge;
@property(readonly, copy, nonatomic) SCCornerRadii *cornerRadii; // @synthesize cornerRadii=_cornerRadii;
@property(readonly, copy, nonatomic) SCActionModel *autoRetryActionModel; // @synthesize autoRetryActionModel=_autoRetryActionModel;
@property(readonly, copy, nonatomic) SCActionModel *buttonTapActionModel; // @synthesize buttonTapActionModel=_buttonTapActionModel;
@property(readonly, copy, nonatomic) SCActionModel *avatarTapActionModel; // @synthesize avatarTapActionModel=_avatarTapActionModel;
@property(readonly, copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, copy, nonatomic) SCActionModel *doubleTapActionModel; // @synthesize doubleTapActionModel=_doubleTapActionModel;
@property(readonly, copy, nonatomic) SCActionModel *swipeActionModel; // @synthesize swipeActionModel=_swipeActionModel;
@property(readonly, copy, nonatomic) SCActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;
@property(readonly, copy, nonatomic) SCActionModel *animationModel; // @synthesize animationModel=_animationModel;
@property(readonly, copy, nonatomic) SCFriendsFeedFriendmojiViewModel *sublabelFriendmojiViewModel; // @synthesize sublabelFriendmojiViewModel=_sublabelFriendmojiViewModel;
@property(readonly, copy, nonatomic) SCFriendsFeedFriendmojiViewModel *friendmojiViewModel; // @synthesize friendmojiViewModel=_friendmojiViewModel;
@property(readonly, copy, nonatomic) UIFont *separatorFont; // @synthesize separatorFont=_separatorFont;
@property(readonly, copy, nonatomic) SCFriendsFeedComponentViewRightButtonViewModel *rightButtonViewModel; // @synthesize rightButtonViewModel=_rightButtonViewModel;
@property(readonly, copy, nonatomic) SCAvatarContainerViewModel *friendsFeedAvatarViewModel; // @synthesize friendsFeedAvatarViewModel=_friendsFeedAvatarViewModel;
@property(readonly, copy, nonatomic) SCFriendsFeedIcon *feedIcon; // @synthesize feedIcon=_feedIcon;
@property(readonly, copy, nonatomic) NSString *substringToTruncateInSubLabel; // @synthesize substringToTruncateInSubLabel=_substringToTruncateInSubLabel;
@property(readonly, copy, nonatomic) NSAttributedString *attributedSublabelText; // @synthesize attributedSublabelText=_attributedSublabelText;
@property(readonly, copy, nonatomic) NSAttributedString *attributedDisplayText; // @synthesize attributedDisplayText=_attributedDisplayText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttributedDisplayText:(id)arg1 attributedSublabelText:(id)arg2 substringToTruncateInSubLabel:(id)arg3 feedIcon:(id)arg4 friendsFeedAvatarViewModel:(id)arg5 rightButtonViewModel:(id)arg6 separatorFont:(id)arg7 friendmojiViewModel:(id)arg8 sublabelFriendmojiViewModel:(id)arg9 animationModel:(id)arg10 tapActionModel:(id)arg11 swipeActionModel:(id)arg12 doubleTapActionModel:(id)arg13 longPressActionModel:(id)arg14 avatarTapActionModel:(id)arg15 buttonTapActionModel:(id)arg16 autoRetryActionModel:(id)arg17 cornerRadii:(id)arg18 showOfficialBadge:(_Bool)arg19 isPinned:(_Bool)arg20;

@end

