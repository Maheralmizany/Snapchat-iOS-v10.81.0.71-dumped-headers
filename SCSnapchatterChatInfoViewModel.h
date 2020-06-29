//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, UIImage;

@interface SCSnapchatterChatInfoViewModel : NSObject <NSCopying>
{
    NSAttributedString *_primaryLabelAttributedText;
    NSAttributedString *_secondaryLabelAttributedText;
    UIImage *_seondaryIconImage;
}

@property(readonly, copy, nonatomic) UIImage *seondaryIconImage; // @synthesize seondaryIconImage=_seondaryIconImage;
@property(readonly, copy, nonatomic) NSAttributedString *secondaryLabelAttributedText; // @synthesize secondaryLabelAttributedText=_secondaryLabelAttributedText;
@property(readonly, copy, nonatomic) NSAttributedString *primaryLabelAttributedText; // @synthesize primaryLabelAttributedText=_primaryLabelAttributedText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrimaryLabelAttributedText:(id)arg1 secondaryLabelAttributedText:(id)arg2 seondaryIconImage:(id)arg3;

@end

