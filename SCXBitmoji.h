//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCClusteredUserIDComparable-Protocol.h"

@class NSString, SCMapBitmojiSticker, SCXSpeechBubble, UIColor;

@interface SCXBitmoji : NSObject <SCClusteredUserIDComparable, NSCopying>
{
    _Bool _faded;
    NSString *_userId;
    NSString *_avatarId;
    SCMapBitmojiSticker *_sticker;
    UIColor *_missingBitmojiColor;
    SCXSpeechBubble *_speechBubble;
}

@property(readonly, copy, nonatomic) SCXSpeechBubble *speechBubble; // @synthesize speechBubble=_speechBubble;
@property(readonly, nonatomic, getter=isFaded) _Bool faded; // @synthesize faded=_faded;
@property(readonly, copy, nonatomic) UIColor *missingBitmojiColor; // @synthesize missingBitmojiColor=_missingBitmojiColor;
@property(readonly, copy, nonatomic) SCMapBitmojiSticker *sticker; // @synthesize sticker=_sticker;
@property(readonly, copy, nonatomic) NSString *avatarId; // @synthesize avatarId=_avatarId;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserId:(id)arg1 avatarId:(id)arg2 sticker:(id)arg3 missingBitmojiColor:(id)arg4 faded:(_Bool)arg5 speechBubble:(id)arg6;
- (_Bool)hasSpeech;

@end

