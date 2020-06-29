//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, SCImageProcessCPUCommand, SCImageProcessCommand, SCImageProcessCommandConfiguration, SCSpectaclesRectificationConfiguration;

@protocol SCImageProcessCommandProvider <NSObject>
- (SCImageProcessCommand *)spectaclesVideoRectificationCommandForConfig:(SCSpectaclesRectificationConfiguration *)arg1;
- (SCImageProcessCommand *)spectaclesImageRectificationCommandForConfig:(SCSpectaclesRectificationConfiguration *)arg1;
- (NSArray *)imageCommandForMultiSnapV2ThumbnailFromFilterName:(NSString *)arg1;
- (SCImageProcessCommand *)imageCommandForCommandConfiguration:(SCImageProcessCommandConfiguration *)arg1 filterConfiguration:(NSDictionary *)arg2;
- (SCImageProcessCommand *)imageCommandForFilterName:(NSString *)arg1 config:(NSDictionary *)arg2;
- (SCImageProcessCPUCommand *)videoCPUCommandForFilterName:(NSString *)arg1;
- (SCImageProcessCommand *)videoCommandForFilterName:(NSString *)arg1 config:(NSDictionary *)arg2;
- (SCImageProcessCommand *)videoCommandForFilterName:(NSString *)arg1;
@end

