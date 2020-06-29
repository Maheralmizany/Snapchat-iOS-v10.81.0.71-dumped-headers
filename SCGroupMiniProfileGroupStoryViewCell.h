//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileCollectionViewCell.h"

@class NSString, SCAvatarView, SCUserSession, UILabel, UITapGestureRecognizer;

@interface SCGroupMiniProfileGroupStoryViewCell : SCMiniProfileCollectionViewCell
{
    UILabel *_nameLabel;
    SCAvatarView *_avatarView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    SCUserSession *_userSession;
    NSString *_groupId;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setUserSession:(id)arg1;
- (void)layoutLabel;
- (void)layoutSubviews;
- (void)updateWithGroupName:(id)arg1 groupId:(id)arg2;
- (id)nameLabelFont;
- (double)nameLabelWidth;
- (void)_setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

