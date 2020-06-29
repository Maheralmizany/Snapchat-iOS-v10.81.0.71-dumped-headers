//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface SCNFideliusFriendKeyDBRecord : NSObject
{
    int _version;
    NSString *_userId;
    NSString *_publicKeyB64;
    NSData *_sharedSecret;
}

+ (id)FriendKeyDBRecordWithUserId:(id)arg1 publicKeyB64:(id)arg2 sharedSecret:(id)arg3 version:(int)arg4;
@property(readonly, nonatomic) int version; // @synthesize version=_version;
@property(readonly, nonatomic) NSData *sharedSecret; // @synthesize sharedSecret=_sharedSecret;
@property(readonly, nonatomic) NSString *publicKeyB64; // @synthesize publicKeyB64=_publicKeyB64;
@property(readonly, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUserId:(id)arg1 publicKeyB64:(id)arg2 sharedSecret:(id)arg3 version:(int)arg4;

@end

