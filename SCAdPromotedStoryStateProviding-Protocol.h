//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSValue;

@protocol SCAdPromotedStoryStateProviding <NSObject>
- (NSValue *)resolutionValueForMediaId:(NSString *)arg1;
- (void)setResolutionValue:(NSValue *)arg1 forMediaId:(NSString *)arg2;
- (NSString *)filePathForMediaId:(NSString *)arg1;
- (void)setFilePath:(NSString *)arg1 forMediaId:(NSString *)arg2;
- (_Bool)isAdSnapViewedForSnapId:(NSString *)arg1;
- (void)markAdSnapViewedForSnapId:(NSString *)arg1;
@end

