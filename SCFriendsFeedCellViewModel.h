//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "SCFeedComponentViewModel-Protocol.h"

@class NSString, SCFriendsFeedComponentViewModel, SCFriendsFeedEntity;

@interface SCFriendsFeedCellViewModel : NSObject <SCFeedComponentViewModel, IGListDiffable, NSCopying>
{
    NSString *_identifier;
    SCFriendsFeedEntity *_entity;
    SCFriendsFeedComponentViewModel *_feedComponentViewModel;
    NSString *_debugDisplayPrefix;
}

@property(readonly, copy, nonatomic) NSString *debugDisplayPrefix; // @synthesize debugDisplayPrefix=_debugDisplayPrefix;
@property(readonly, copy, nonatomic) SCFriendsFeedComponentViewModel *feedComponentViewModel; // @synthesize feedComponentViewModel=_feedComponentViewModel;
@property(readonly, copy, nonatomic) SCFriendsFeedEntity *entity; // @synthesize entity=_entity;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)diffIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 entity:(id)arg2 feedComponentViewModel:(id)arg3 debugDisplayPrefix:(id)arg4;
- (id)nameToCompare;
- (_Bool)shouldDisableFeedSwiping;
- (id)buttonTapActionModel;
- (id)avatarTapActionModel;
- (id)longPressActionModel;
- (id)doubleTapActionModel;
- (id)tapActionModel;
- (_Bool)shouldAllowTapToRetryOnCell;
- (_Bool)isGroupConversation;
- (_Bool)_old_isGroupConversation;
- (_Bool)hasUnreadMessages;
- (id)reusableCellIdentifier;
- (_Bool)isPinned;
- (_Bool)showOfficialBadge;
- (id)rightButtonViewModel;
- (unsigned long long)typingAnimationState;
- (id)animationModel;
- (id)cornerRadii;
- (id)feedIcon;
- (id)sublabelFriendmojiViewModel;
- (id)friendmojiViewModel;
- (id)friendsFeedAvatarViewModel;
- (id)separatorFont;
- (id)substringToTruncateInSubLabel;
- (id)attributedSublabelText;
- (id)displayNameAttributedStringWithWidth:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
