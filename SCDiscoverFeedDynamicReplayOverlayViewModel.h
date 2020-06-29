//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, UIColor, UIImage;

@interface SCDiscoverFeedDynamicReplayOverlayViewModel : NSObject <NSCopying>
{
    _Bool _showMiddleSeparator;
    UIImage *_primaryIconImage;
    NSAttributedString *_primaryIconSubtitle;
    unsigned long long _primaryIconSubtitleMaxLines;
    UIImage *_secondaryIconImage;
    NSAttributedString *_secondaryIconSubtitle;
    unsigned long long _secondaryIconSubtitleMaxLines;
    NSAttributedString *_replayOverlayTitle;
    UIColor *_middleSeparatorColor;
    UIColor *_maskOverlayColor;
}

@property(readonly, copy, nonatomic) UIColor *maskOverlayColor; // @synthesize maskOverlayColor=_maskOverlayColor;
@property(readonly, copy, nonatomic) UIColor *middleSeparatorColor; // @synthesize middleSeparatorColor=_middleSeparatorColor;
@property(readonly, nonatomic) _Bool showMiddleSeparator; // @synthesize showMiddleSeparator=_showMiddleSeparator;
@property(readonly, copy, nonatomic) NSAttributedString *replayOverlayTitle; // @synthesize replayOverlayTitle=_replayOverlayTitle;
@property(readonly, nonatomic) unsigned long long secondaryIconSubtitleMaxLines; // @synthesize secondaryIconSubtitleMaxLines=_secondaryIconSubtitleMaxLines;
@property(readonly, copy, nonatomic) NSAttributedString *secondaryIconSubtitle; // @synthesize secondaryIconSubtitle=_secondaryIconSubtitle;
@property(readonly, copy, nonatomic) UIImage *secondaryIconImage; // @synthesize secondaryIconImage=_secondaryIconImage;
@property(readonly, nonatomic) unsigned long long primaryIconSubtitleMaxLines; // @synthesize primaryIconSubtitleMaxLines=_primaryIconSubtitleMaxLines;
@property(readonly, copy, nonatomic) NSAttributedString *primaryIconSubtitle; // @synthesize primaryIconSubtitle=_primaryIconSubtitle;
@property(readonly, copy, nonatomic) UIImage *primaryIconImage; // @synthesize primaryIconImage=_primaryIconImage;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrimaryIconImage:(id)arg1 primaryIconSubtitle:(id)arg2 primaryIconSubtitleMaxLines:(unsigned long long)arg3 secondaryIconImage:(id)arg4 secondaryIconSubtitle:(id)arg5 secondaryIconSubtitleMaxLines:(unsigned long long)arg6 replayOverlayTitle:(id)arg7 showMiddleSeparator:(_Bool)arg8 middleSeparatorColor:(id)arg9 maskOverlayColor:(id)arg10;

@end

