//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSNumber, NSString;

@interface SCFideliusMessageEncryptionKeyRecord : NSObject <NSCopying>
{
    NSData *_conversationId;
    long long _messageId;
    NSData *_encryptionKey;
    NSNumber *_timestamp;
    NSString *_purgePolicy;
}

@property(readonly, copy, nonatomic) NSString *purgePolicy; // @synthesize purgePolicy=_purgePolicy;
@property(readonly, copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(readonly, nonatomic) long long messageId; // @synthesize messageId=_messageId;
@property(readonly, copy, nonatomic) NSData *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConversationId:(id)arg1 messageId:(long long)arg2 encryptionKey:(id)arg3 timestamp:(id)arg4 purgePolicy:(id)arg5;

@end
