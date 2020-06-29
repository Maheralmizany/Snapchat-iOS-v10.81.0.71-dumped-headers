//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface SCNMessagingMediaReference : NSObject
{
    NSData *_contentObject;
    long long _mediaListId;
    long long _mediaType;
}

+ (id)MediaReferenceWithContentObject:(id)arg1 mediaListId:(long long)arg2 mediaType:(long long)arg3;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) long long mediaListId; // @synthesize mediaListId=_mediaListId;
@property(readonly, nonatomic) NSData *contentObject; // @synthesize contentObject=_contentObject;
- (void).cxx_destruct;
- (id)description;
- (id)initWithContentObject:(id)arg1 mediaListId:(long long)arg2 mediaType:(long long)arg3;

@end

