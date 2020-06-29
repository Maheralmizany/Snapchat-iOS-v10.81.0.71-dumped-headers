//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SCFriendmojiView, UIImage, UIImageView, UILabel, UIView;

@interface SCCheckmarkSelectionCell : UITableViewCell
{
    UIImageView *_checkmarkImageView;
    UIImageView *_circle;
    UILabel *_nameLabel;
    UILabel *_subNameLabel;
    SCFriendmojiView *_friendmojiView;
    UIView *_bottomBorder;
    UIImage *_checkmarkImage;
}

- (void).cxx_destruct;
- (id)detailTextLabel;
- (id)textLabel;
- (void)layoutSubviews;
- (void)_setupFriendmojiViewWithSnapchatter:(id)arg1;
- (void)updateFriendmojiViewWithSnapchatter:(id)arg1 viewType:(long long)arg2;
- (void)_setupFriendmojiViewWithFriend:(id)arg1;
- (void)updateFriendmojiViewWithFriend:(id)arg1;
- (void)prepareForReuse;
- (void)toggleRightOffsetIsSearching:(_Bool)arg1;
- (void)_setFontSelected:(_Bool)arg1;
- (void)_setupCheckMark;
- (void)setCheckmarkVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCheckmarkImage:(id)arg1;
- (void)setBackgroundSelectedForTopSearch:(_Bool)arg1;
- (void)setCellSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCellSelected:(_Bool)arg1;
- (void)_setupCircle;
- (void)configGroupCell;
- (void)_setUnselectedBackground;
- (void)_setSelectedBackground;
- (void)_setBackgroundSelected:(_Bool)arg1;
- (void)_setupLabels;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

