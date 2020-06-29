//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCSnapchattersSnapchatterBasicSummary;

@interface SCSnapchattersGroupParticipantSummary : NSObject <NSCopying>
{
    SCSnapchattersSnapchatterBasicSummary *_basicSummary;
    NSString *_uniqueDisplayName;
    NSString *_colorHex;
    NSString *_talkSessionUserID;
    NSString *_videoChatUserID;
}

@property(readonly, copy, nonatomic) NSString *videoChatUserID; // @synthesize videoChatUserID=_videoChatUserID;
@property(readonly, copy, nonatomic) NSString *talkSessionUserID; // @synthesize talkSessionUserID=_talkSessionUserID;
@property(readonly, copy, nonatomic) NSString *colorHex; // @synthesize colorHex=_colorHex;
@property(readonly, copy, nonatomic) NSString *uniqueDisplayName; // @synthesize uniqueDisplayName=_uniqueDisplayName;
@property(readonly, copy, nonatomic) SCSnapchattersSnapchatterBasicSummary *basicSummary; // @synthesize basicSummary=_basicSummary;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBasicSummary:(id)arg1 uniqueDisplayName:(id)arg2 colorHex:(id)arg3 talkSessionUserID:(id)arg4 videoChatUserID:(id)arg5;

@end

