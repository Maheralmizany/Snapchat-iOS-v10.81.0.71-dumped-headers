//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSData, NSNumber, NSString, SCSnapDocVideoDescription;

@interface SCSnapDocMediaReference : NSObject <NSCopying, NSCoding>
{
    NSNumber *_mediaListId;
    long long _claimBehaviorType;
    NSString *_URL;
    NSData *_contentObject;
    SCSnapDocVideoDescription *_videoDescription;
    long long _mediaType;
}

@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) SCSnapDocVideoDescription *videoDescription; // @synthesize videoDescription=_videoDescription;
@property(readonly, copy, nonatomic) NSData *contentObject; // @synthesize contentObject=_contentObject;
@property(readonly, copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) long long claimBehaviorType; // @synthesize claimBehaviorType=_claimBehaviorType;
@property(readonly, copy, nonatomic) NSNumber *mediaListId; // @synthesize mediaListId=_mediaListId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaListId:(id)arg1 claimBehaviorType:(long long)arg2 URL:(id)arg3 contentObject:(id)arg4 videoDescription:(id)arg5 mediaType:(long long)arg6;
- (id)initWithCoder:(id)arg1;

@end

