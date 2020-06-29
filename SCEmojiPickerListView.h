//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString;

@interface SCEmojiPickerListView : UIView
{
    UIView *_emojiViewsContainer;
    NSMutableArray *_emojiArray;
    NSMutableArray *_additionalEmojiArray;
    NSMutableArray *_emojiLabelViews;
    struct CGSize _previousBoundsSize;
    long long _defaultEmojiCount;
    _Bool _expanded;
    NSString *_additionalEmojiSelected;
}

- (void).cxx_destruct;
- (double)_getEmojiCenterOffset:(long long)arg1;
- (void)_refreshAdditionalEmojiViews;
- (double)estimateContentHeightWithExpand:(_Bool)arg1;
- (struct CGPoint)emojiViewCenterForLocation:(struct CGPoint)arg1;
- (struct CGPoint)locationForEmoji:(id)arg1;
- (struct CGPoint)locationForEmojiIndex:(long long)arg1;
- (id)emojiForLocation:(struct CGPoint)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setExpanded:(_Bool)arg1;
- (_Bool)selectedAdditionalEmoji:(id)arg1;
- (_Bool)isEmojiInAdditionalMenu:(id)arg1;
- (void)layoutSubviews;
- (void)_addEmojiView:(id)arg1 count:(long long)arg2;
- (id)initWithEmojiList:(id)arg1 emojiExtendList:(id)arg2;

@end

