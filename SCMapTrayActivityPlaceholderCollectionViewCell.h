//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SCBitmojiAvatarView, UILabel;

@interface SCMapTrayActivityPlaceholderCollectionViewCell : UICollectionViewCell
{
    UILabel *_label;
    SCBitmojiAvatarView *_bitmojiView;
}

+ (struct CGSize)sizeForWidth:(double)arg1 includingBitmoji:(_Bool)arg2;
- (void).cxx_destruct;
- (void)configureWithMapPerson:(id)arg1 imageDownloader:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

