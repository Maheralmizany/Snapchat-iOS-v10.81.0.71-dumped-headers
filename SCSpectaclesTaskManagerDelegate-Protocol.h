//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SCSpectaclesContent, SCSpectaclesNetworkRequest, SCSpectaclesTaskManager;

@protocol SCSpectaclesTaskManagerDelegate <NSObject>
- (void)taskManager:(SCSpectaclesTaskManager *)arg1 didDownloadContent:(SCSpectaclesContent *)arg2 component:(unsigned long long)arg3;
- (void)taskManagerHandledResponse:(SCSpectaclesTaskManager *)arg1;
- (void)taskManager:(SCSpectaclesTaskManager *)arg1 sawError:(NSError *)arg2;
- (void)taskManagerComplete:(SCSpectaclesTaskManager *)arg1;
- (void)taskManager:(SCSpectaclesTaskManager *)arg1 sendNetworkRequest:(SCSpectaclesNetworkRequest *)arg2 withDelay:(double)arg3;
@end

