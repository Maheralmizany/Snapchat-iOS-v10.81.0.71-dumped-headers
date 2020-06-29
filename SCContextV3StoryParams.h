//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCMediaEncryptionInfo;

@interface SCContextV3StoryParams : NSObject <NSCopying>
{
    _Bool _isDurationInfinite;
    NSString *_snapId;
    NSString *_mediaId;
    NSString *_sourceId;
    SCMediaEncryptionInfo *_mediaEncryptionInfo;
    long long _mediaType;
}

@property(readonly, nonatomic) _Bool isDurationInfinite; // @synthesize isDurationInfinite=_isDurationInfinite;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) SCMediaEncryptionInfo *mediaEncryptionInfo; // @synthesize mediaEncryptionInfo=_mediaEncryptionInfo;
@property(readonly, copy, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapId:(id)arg1 mediaId:(id)arg2 sourceId:(id)arg3 mediaEncryptionInfo:(id)arg4 mediaType:(long long)arg5 isDurationInfinite:(_Bool)arg6;

@end

