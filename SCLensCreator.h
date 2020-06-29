//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCLensCreator : NSObject <NSCopying, NSCoding>
{
    _Bool _snapProIsDeactivated;
    _Bool _isOfficialCreator;
    NSString *_userId;
    NSString *_userAvatarId;
    NSString *_userSelfieId;
    NSString *_snapProIdentifier;
}

@property(readonly, nonatomic) _Bool isOfficialCreator; // @synthesize isOfficialCreator=_isOfficialCreator;
@property(readonly, nonatomic) _Bool snapProIsDeactivated; // @synthesize snapProIsDeactivated=_snapProIsDeactivated;
@property(readonly, copy, nonatomic) NSString *snapProIdentifier; // @synthesize snapProIdentifier=_snapProIdentifier;
@property(readonly, copy, nonatomic) NSString *userSelfieId; // @synthesize userSelfieId=_userSelfieId;
@property(readonly, copy, nonatomic) NSString *userAvatarId; // @synthesize userAvatarId=_userAvatarId;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserId:(id)arg1 userAvatarId:(id)arg2 userSelfieId:(id)arg3 snapProIdentifier:(id)arg4 snapProIsDeactivated:(_Bool)arg5 isOfficialCreator:(_Bool)arg6;
- (id)initWithCoder:(id)arg1;
- (id)snapProIdentifierIfActivated;

@end
