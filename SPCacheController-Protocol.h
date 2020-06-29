//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SPCacheController <NSObject>
- (void)clearAll:(NSArray *)arg1;
- (void)collectGarbage;
- (NSString *)getFolderPathForKey:(NSString *)arg1;
- (void)commitForKey:(NSString *)arg1;
- (_Bool)cacheExistsForKey:(NSString *)arg1;
- (void)initializeMapFromDisk;
@end

