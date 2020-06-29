//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "SCMapBadgeableButton-Protocol.h"

@class NSArray, SCBitmojiAvatarView, SCGroupBitmojiAvatarView, UIView;
@protocol SCImageDownloading;

@interface SCMapBitmojiButton : UIControl <SCMapBadgeableButton>
{
    id <SCImageDownloading> _imageDownloader;
    UIView *_bitmojiContainerView;
    SCBitmojiAvatarView *_singleAvatarView;
    SCGroupBitmojiAvatarView *_groupAvatarView;
    UIView *_labelContainerView;
    UIView *_badgeView;
    NSArray *_people;
}

@property(copy, nonatomic) NSArray *people; // @synthesize people=_people;
- (void).cxx_destruct;
- (void)setBadgeVisible:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithImageDownloader:(id)arg1 title:(id)arg2 showsBitmojiGroup:(_Bool)arg3;

@end

