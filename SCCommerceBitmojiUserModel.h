//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCommerceBitmojiUserModel : NSObject <NSCopying>
{
    _Bool _isPlaceholder;
    NSString *_userId;
    NSString *_displayName;
    NSString *_avatarId;
    NSString *_selfieId;
}

+ (id)placeholderUserModelFromBitmojiInfo:(id)arg1;
+ (id)userModelFromSnapchatter:(id)arg1;
+ (id)userModelForCurrentUser;
@property(readonly, nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, copy, nonatomic) NSString *selfieId; // @synthesize selfieId=_selfieId;
@property(readonly, copy, nonatomic) NSString *avatarId; // @synthesize avatarId=_avatarId;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserId:(id)arg1 displayName:(id)arg2 avatarId:(id)arg3 selfieId:(id)arg4 isPlaceholder:(_Bool)arg5;

@end

