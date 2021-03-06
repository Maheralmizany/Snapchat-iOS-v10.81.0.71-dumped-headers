//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDate, SCSpectaclesExportSettings;

@protocol SCStoryExporterItem <NSObject, NSCopying>
- (void)exportToVideoURLCompletion:(void (^)(NSURL *, NSError *))arg1 progressBlock:(void (^)(float))arg2 spectaclesExportSettings:(SCSpectaclesExportSettings *)arg3;
- (double)time;
- (struct CGRect)spectaclesExportSize;
- (_Bool)isSpectacles60fps;
- (_Bool)isSpectaclesImage;
- (_Bool)isSpectaclesMedia;

@optional
- (struct CGSize)spectaclesExportTargetSizeForExportFormat:(long long)arg1;
- (NSDate *)createTimeUtc;
@end

