//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SCDrawingCache : NSObject
{
    NSMutableArray *_indices;
    NSMutableArray *_cachedImageData;
}

- (void).cxx_destruct;
- (id)mostRecentImageBeforeIndex:(long long *)arg1;
- (void)removeCachedImageAfterIndex:(long long)arg1;
- (void)setCachedImage:(id)arg1 forIndex:(long long)arg2;
- (void)receivedMemoryWarning;
- (id)init;

@end

