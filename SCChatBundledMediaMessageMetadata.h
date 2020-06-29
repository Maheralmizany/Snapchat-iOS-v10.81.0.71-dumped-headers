//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, SCChatMediaContentMetadata;

@interface SCChatBundledMediaMessageMetadata : NSObject <NSCopying, NSCoding>
{
    NSDictionary *_mediaDictionary;
    SCChatMediaContentMetadata *_mediaMetadata;
}

@property(readonly, copy, nonatomic) SCChatMediaContentMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(readonly, copy, nonatomic) NSDictionary *mediaDictionary; // @synthesize mediaDictionary=_mediaDictionary;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaDictionary:(id)arg1 mediaMetadata:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

