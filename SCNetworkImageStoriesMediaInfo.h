//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCNetworkImageStoriesBoltContentInfo, SCNetworkImageStoriesEncryptionInfo;

@interface SCNetworkImageStoriesMediaInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _isZipped;
    _Bool _needsAuth;
    _Bool _isEligibleForStreaming;
    NSString *_mediaId;
    NSString *_appUrl;
    NSString *_directToStorageUrl;
    SCNetworkImageStoriesEncryptionInfo *_mediaEncryptionInfo;
    long long _type;
    unsigned long long _storyType;
    SCNetworkImageStoriesBoltContentInfo *_boltContentInfo;
}

@property(readonly, nonatomic) _Bool isEligibleForStreaming; // @synthesize isEligibleForStreaming=_isEligibleForStreaming;
@property(readonly, copy, nonatomic) SCNetworkImageStoriesBoltContentInfo *boltContentInfo; // @synthesize boltContentInfo=_boltContentInfo;
@property(readonly, nonatomic) _Bool needsAuth; // @synthesize needsAuth=_needsAuth;
@property(readonly, nonatomic) _Bool isZipped; // @synthesize isZipped=_isZipped;
@property(readonly, nonatomic) unsigned long long storyType; // @synthesize storyType=_storyType;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) SCNetworkImageStoriesEncryptionInfo *mediaEncryptionInfo; // @synthesize mediaEncryptionInfo=_mediaEncryptionInfo;
@property(readonly, copy, nonatomic) NSString *directToStorageUrl; // @synthesize directToStorageUrl=_directToStorageUrl;
@property(readonly, copy, nonatomic) NSString *appUrl; // @synthesize appUrl=_appUrl;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaId:(id)arg1 appUrl:(id)arg2 directToStorageUrl:(id)arg3 mediaEncryptionInfo:(id)arg4 type:(long long)arg5 storyType:(unsigned long long)arg6 isZipped:(_Bool)arg7 needsAuth:(_Bool)arg8 boltContentInfo:(id)arg9 isEligibleForStreaming:(_Bool)arg10;
- (id)initWithCoder:(id)arg1;

@end
