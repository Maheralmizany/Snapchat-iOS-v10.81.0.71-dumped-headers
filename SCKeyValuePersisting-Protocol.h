//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SCKeyValuePersisting <NSObject>
- (void)removeObjectForKey:(NSString *)arg1;
- (id)objectForKey:(NSString *)arg1 deserializeToClass:(Class)arg2;
- (_Bool)setObject:(id)arg1 forKey:(NSString *)arg2;
- (NSArray *)allKeys;
@end

