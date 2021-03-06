//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCGalleryOperaSnapEntryInfo, UIColor, UIFont;
@protocol SCGallerySnap;

@interface SCGalleryOperaChromeViewModel : NSObject
{
    id <SCGallerySnap> _snap;
    SCGalleryOperaSnapEntryInfo *_entryInfo;
    NSString *_currentUserId;
}

- (void).cxx_destruct;
- (id)_snapTimeFormattedString;
@property(readonly, nonatomic) _Bool shouldDisplayChromeView;
@property(readonly, nonatomic) _Bool hasShadow;
@property(readonly, nonatomic) _Bool hasGradient;
@property(readonly, nonatomic) UIColor *snapDisplaySubTitleColor;
@property(readonly, nonatomic) UIFont *snapDisplayTitleFont;
@property(readonly, copy, nonatomic) NSString *snapDisplaySubTitle;
@property(readonly, nonatomic) UIColor *snapDisplayTitleColor;
@property(readonly, copy, nonatomic) NSString *snapDisplayTitle;
- (id)initWithGallerySnap:(id)arg1 entryInfo:(id)arg2 currentUserId:(id)arg3;

@end

