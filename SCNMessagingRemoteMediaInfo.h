//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface SCNMessagingRemoteMediaInfo : NSObject
{
    _Bool _hasAudio;
    NSData *_contentObject;
    NSString *_legacyMediaId;
    long long _mediaType;
}

+ (id)RemoteMediaInfoWithContentObject:(id)arg1 legacyMediaId:(id)arg2 mediaType:(long long)arg3 hasAudio:(_Bool)arg4;
@property(readonly, nonatomic) _Bool hasAudio; // @synthesize hasAudio=_hasAudio;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) NSString *legacyMediaId; // @synthesize legacyMediaId=_legacyMediaId;
@property(readonly, nonatomic) NSData *contentObject; // @synthesize contentObject=_contentObject;
- (void).cxx_destruct;
- (id)description;
- (id)initWithContentObject:(id)arg1 legacyMediaId:(id)arg2 mediaType:(long long)arg3 hasAudio:(_Bool)arg4;

@end

