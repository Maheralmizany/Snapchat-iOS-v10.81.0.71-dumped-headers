//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCDiscoverTopSnapSubtitlesExperimentContext : SCExperimentContext
{
    _Bool _enabled;
    _Bool _isFontBold;
    double _fontSizeMultiplier;
    long long _fontBorderType;
    NSString *_backgroundColorArgb;
    NSString *_fontColorArgb;
    NSString *_fontFamily;
}

@property(readonly, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(readonly, nonatomic) _Bool isFontBold; // @synthesize isFontBold=_isFontBold;
@property(readonly, nonatomic) NSString *fontColorArgb; // @synthesize fontColorArgb=_fontColorArgb;
@property(readonly, nonatomic) NSString *backgroundColorArgb; // @synthesize backgroundColorArgb=_backgroundColorArgb;
@property(readonly, nonatomic) long long fontBorderType; // @synthesize fontBorderType=_fontBorderType;
@property(readonly, nonatomic) double fontSizeMultiplier; // @synthesize fontSizeMultiplier=_fontSizeMultiplier;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)setupParameters;
- (id)experimentName;

@end

