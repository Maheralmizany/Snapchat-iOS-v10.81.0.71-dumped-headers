//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFideliusWrapInput-Protocol.h"

@class NSArray, NSString, SOJUSecurityFideliusFriendsKeysResponse;

@interface SCFideliusWrapInput : NSObject <SCFideliusWrapInput>
{
    NSArray *_recipientUsernames;
    NSString *_clientId;
    NSString *_key;
    SOJUSecurityFideliusFriendsKeysResponse *_rewrapFriendKeys;
    long long _rewrapCount;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) long long rewrapCount; // @synthesize rewrapCount=_rewrapCount;
@property(readonly, copy, nonatomic) SOJUSecurityFideliusFriendsKeysResponse *rewrapFriendKeys; // @synthesize rewrapFriendKeys=_rewrapFriendKeys;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(readonly, copy, nonatomic) NSArray *recipientUsernames; // @synthesize recipientUsernames=_recipientUsernames;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecipientUsernames:(id)arg1 clientId:(id)arg2 key:(id)arg3 rewrapFriendKeys:(id)arg4 rewrapCount:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

