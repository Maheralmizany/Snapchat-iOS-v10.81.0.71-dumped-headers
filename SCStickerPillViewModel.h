//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;

@interface SCStickerPillViewModel : NSObject
{
    NSString *_text;
    NSURL *_iconURL;
    UIImage *_placeholderIcon;
    long long _iconRenderingMode;
}

@property(readonly, nonatomic) long long iconRenderingMode; // @synthesize iconRenderingMode=_iconRenderingMode;
@property(readonly, nonatomic) UIImage *placeholderIcon; // @synthesize placeholderIcon=_placeholderIcon;
@property(readonly, copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copy;
- (id)initWithText:(id)arg1 iconURL:(id)arg2 placeholderIcon:(id)arg3 iconRenderingMode:(long long)arg4;
- (id)initWithText:(id)arg1 iconURL:(id)arg2 placeholderIcon:(id)arg3;

@end

