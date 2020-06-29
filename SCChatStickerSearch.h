//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatStickerSearching-Protocol.h"

@class NSMutableSet, SCStickerSearchDatabase;
@protocol OS_dispatch_queue;

@interface SCChatStickerSearch : NSObject <SCChatStickerSearching>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SCStickerSearchDatabase *_searchDatabase;
    NSMutableSet *_publishedContextualStickerPackIds;
    NSMutableSet *_publishedSnapchatStickerPackIds;
}

+ (id)_mergeSearchResultsWithStickers:(id)arg1 emojis:(id)arg2;
+ (id)localeURL;
+ (id)shared;
- (void).cxx_destruct;
- (id)_buildSOJUStickersFromStickerIdSet:(id)arg1;
- (id)_buildSOJUStickersFromStickerIds:(id)arg1;
- (void)addActiveSnapchatPackId:(id)arg1;
- (void)addActiveContextualPackId:(id)arg1;
- (void)getAllTagsWithPrefix:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getFrequentTags:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)searchStickersWithText:(id)arg1 stickerTarget:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_retryFetchingMetadataWithSearchPack:(id)arg1;
- (void)_fetchStickerSearchMetadataWithSearchPack:(id)arg1;
- (void)updateWithSearchPack:(id)arg1;
- (void)resetSnapchatPacks;
- (void)resetContextualPacks;
- (id)init;

@end
