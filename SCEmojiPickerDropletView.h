//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDrawingDropletView.h"

@class NSString, UILabel;

@interface SCEmojiPickerDropletView : SCDrawingDropletView
{
    UILabel *_emojiView;
    struct CGSize _previousBoundsSize;
    NSString *_emoji;
}

+ (id)closedPath;
@property(retain, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
- (void).cxx_destruct;
- (void)setCurrentPath:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

