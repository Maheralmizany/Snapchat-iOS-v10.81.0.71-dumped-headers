//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface SCDiscoverFeedReportTileStoryData : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_publisherStory_tileId;
    NSString *_publisherStory_tileImageUrl;
    long long _publisherStory_editionId;
    long long _publisherStory_publisherId;
    NSString *_publisherStory_publisherName;
    NSString *_publicUserStory_username;
    NSString *_publicUserStory_snapId;
    NSData *_publicUserStory_tileMedia;
    _Bool _publicUserStory_isOfficial;
}

+ (id)publisherStoryWithTileId:(id)arg1 tileImageUrl:(id)arg2 editionId:(long long)arg3 publisherId:(long long)arg4 publisherName:(id)arg5;
+ (id)publicUserStoryWithUsername:(id)arg1 snapId:(id)arg2 tileMedia:(id)arg3 isOfficial:(_Bool)arg4;
- (void).cxx_destruct;
- (void)matchPublisherStory:(CDUnknownBlockType)arg1 publicUserStory:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

