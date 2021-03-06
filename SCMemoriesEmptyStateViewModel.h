//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCMemoriesEmptyStateViewModel : NSObject
{
    unsigned long long _viewType;
    NSString *_bitmojiId;
    NSString *_title;
    NSString *_descTitle;
    NSString *_buttonTitle;
    NSString *_urlString;
}

@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(readonly, copy, nonatomic) NSString *descTitle; // @synthesize descTitle=_descTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *bitmojiId; // @synthesize bitmojiId=_bitmojiId;
@property(readonly, nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
- (void).cxx_destruct;
- (id)initWithViewType:(unsigned long long)arg1 bitmojiId:(id)arg2 title:(id)arg3 descTitle:(id)arg4 buttonTitle:(id)arg5 urlString:(id)arg6;

@end

