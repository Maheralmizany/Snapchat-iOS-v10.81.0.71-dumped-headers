//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCPostRegistrationState : NSObject <NSCopying>
{
    unsigned long long _subtype;
}

+ (id)legacyAddFriends;
+ (id)done;
+ (id)contactPermissionRequest;
+ (id)begin;
+ (id)addFriends;
- (void)matchBegin:(CDUnknownBlockType)arg1 contactPermissionRequest:(CDUnknownBlockType)arg2 addFriends:(CDUnknownBlockType)arg3 legacyAddFriends:(CDUnknownBlockType)arg4 done:(CDUnknownBlockType)arg5;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

