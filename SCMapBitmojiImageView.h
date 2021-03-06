//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString, SCLazy, SCLoadingIndicatorView;

@interface SCMapBitmojiImageView : UIImageView
{
    SCLazy *_bitmojiImageFetcher;
    _Bool _showsLoadIndicator;
    NSString *_bitmojiStickerId;
    NSString *_bitmojiAvatarId;
    SCLoadingIndicatorView *_loadingView;
}

+ (void)bindAttributes:(id)arg1;
@property(retain, nonatomic) SCLoadingIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool showsLoadIndicator; // @synthesize showsLoadIndicator=_showsLoadIndicator;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(copy, nonatomic) NSString *bitmojiStickerId; // @synthesize bitmojiStickerId=_bitmojiStickerId;
- (void).cxx_destruct;
- (void)_load;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 bitmojiImageFetcher:(id)arg2 bitmojiAvatarId:(id)arg3;
- (_Bool)composer_setShowsLoadIndicator:(_Bool)arg1;
- (_Bool)composer_setAvatarId:(id)arg1;
- (_Bool)composer_setStickerId:(id)arg1;

@end

