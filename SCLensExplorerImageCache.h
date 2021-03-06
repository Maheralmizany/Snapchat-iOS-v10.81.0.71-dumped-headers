//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSLock, NSOperationQueue, SCLRUCache;
@protocol SCCache;

@interface SCLensExplorerImageCache : NSObject
{
    id <SCCache> _diskCache;
    SCLRUCache *_memoryCache;
    NSLock *_memoryCacheLock;
    NSOperationQueue *_cacheQueue;
    NSDate *_expiration;
}

@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
- (void).cxx_destruct;
- (void)clearMemoryCache;
- (id)_operationWithMediaKey:(id)arg1;
- (void)cancelOperationsForKeys:(id)arg1;
- (id)lensExplorerAnimationForLensItem:(id)arg1 preferredSize:(struct CGSize)arg2;
- (id)lensExplorerImageForKey:(id)arg1 preferredSize:(struct CGSize)arg2;
- (void)storeLensExplorerImage:(id)arg1 forKey:(id)arg2;
- (void)storeLensExplorerAnimation:(id)arg1 animatedImage:(id)arg2;
- (void)storeInMemoryImage:(id)arg1 key:(id)arg2;
- (id)initWithCache:(id)arg1;

@end

