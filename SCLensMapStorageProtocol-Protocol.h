//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SCLensMapStorageProtocol <NSObject>
@property(readonly, nonatomic) unsigned long long keysCount;
- (void)clear;
- (NSArray *)allLenses;
- (NSArray *)lensesForKey:(NSString *)arg1;
- (void)setLenses:(NSArray *)arg1 forKey:(NSString *)arg2;
@end

