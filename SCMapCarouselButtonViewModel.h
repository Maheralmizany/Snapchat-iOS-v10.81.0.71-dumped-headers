//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIColor, UIImage;

@interface SCMapCarouselButtonViewModel : NSObject <NSCopying>
{
    _Bool _showsBorder;
    _Bool _usesBoldTitle;
    NSString *_text;
    UIColor *_color;
    UIImage *_iconImage;
    UIColor *_fillColor;
}

+ (id)viewModelWithUnreadChat:(_Bool)arg1;
+ (id)viewModelWithCurrentUserId:(id)arg1 item:(id)arg2 itemStyle:(unsigned long long)arg3 unreadChat:(_Bool)arg4;
@property(readonly, nonatomic) _Bool usesBoldTitle; // @synthesize usesBoldTitle=_usesBoldTitle;
@property(readonly, nonatomic) _Bool showsBorder; // @synthesize showsBorder=_showsBorder;
@property(readonly, copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(readonly, copy, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithText:(id)arg1 color:(id)arg2 iconImage:(id)arg3 fillColor:(id)arg4 showsBorder:(_Bool)arg5 usesBoldTitle:(_Bool)arg6;

@end

