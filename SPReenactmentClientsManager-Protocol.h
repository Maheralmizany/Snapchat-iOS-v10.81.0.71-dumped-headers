//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol SPReenactmentClientsManagerOutput;

@protocol SPReenactmentClientsManager <NSObject>
- (void)stopPrefetchingOneFramePreviewScenariosForOutput:(id <SPReenactmentClientsManagerOutput>)arg1;
- (void)prefetchOneFramePreviewScenariosWithRequests:(NSArray *)arg1 forOutput:(id <SPReenactmentClientsManagerOutput>)arg2;
- (void)stopPrefetchingFullscreenScenariosForOutput:(id <SPReenactmentClientsManagerOutput>)arg1;
- (void)prefetchFullscreenScenariosWithRequests:(NSArray *)arg1 forOutput:(id <SPReenactmentClientsManagerOutput>)arg2;
- (void)stopPrefetchingFullsizePreviewScenariosForOutput:(id <SPReenactmentClientsManagerOutput>)arg1;
- (void)prefetchFullsizePreviewScenariosWithRequests:(NSArray *)arg1 forOutput:(id <SPReenactmentClientsManagerOutput>)arg2;
- (void)stopPrefetchingPreviewScenariosForOutput:(id <SPReenactmentClientsManagerOutput>)arg1;
- (void)prefetchPreviewScenariosWithRequests:(NSArray *)arg1 forOutput:(id <SPReenactmentClientsManagerOutput>)arg2;
@end

