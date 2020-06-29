//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class CTPMediaContent, NSString;

@interface CTPSnapStickerEntity : NSObject <NSCopying>
{
    _Bool _isAnimated;
    NSString *_snapStickerId;
    CTPMediaContent *_mediaContent;
}

@property(readonly, copy, nonatomic) CTPMediaContent *mediaContent; // @synthesize mediaContent=_mediaContent;
@property(readonly, nonatomic) _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property(readonly, copy, nonatomic) NSString *snapStickerId; // @synthesize snapStickerId=_snapStickerId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapStickerId:(id)arg1 isAnimated:(_Bool)arg2 mediaContent:(id)arg3;

@end
