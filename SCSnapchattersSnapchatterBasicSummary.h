//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCSnapchattersBitmojiInfo;

@interface SCSnapchattersSnapchatterBasicSummary : NSObject <NSCopying>
{
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
    SCSnapchattersBitmojiInfo *_bitmojiInfo;
}

@property(readonly, copy, nonatomic) SCSnapchattersBitmojiInfo *bitmojiInfo; // @synthesize bitmojiInfo=_bitmojiInfo;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 bitmojiInfo:(id)arg4;

@end

