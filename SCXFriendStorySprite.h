//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCXSprite.h"

@class NSString, SCStoriesThumbnailInfo;

@interface SCXFriendStorySprite : SCXSprite
{
    _Bool _visible;
    SCStoriesThumbnailInfo *_thumbnailInfo;
    NSString *_userId;
}

@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(copy, nonatomic) SCStoriesThumbnailInfo *thumbnailInfo; // @synthesize thumbnailInfo=_thumbnailInfo;
- (void).cxx_destruct;
- (_Bool)isEmpty;
- (id)init;

@end

