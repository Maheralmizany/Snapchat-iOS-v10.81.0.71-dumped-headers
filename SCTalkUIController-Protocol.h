//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCTalkUIController <NSObject>
- (void)setAudioRouteMenuDisplayedIfNeeded:(_Bool)arg1;
- (void)setLocalFullscreenModeIfPossible:(_Bool)arg1;
- (_Bool)expandedLocalMediaMode;
- (void)setExpandedLocalMediaModeIfPossible:(_Bool)arg1;
- (_Bool)fullscreenMode;
- (void)setFullscreenModeIfPossible:(_Bool)arg1;
- (void)requestUIUpdate;
- (void)resumeUIUpdates:(NSString *)arg1;
- (void)pauseUIUpdates:(NSString *)arg1 completion:(void (^)(void))arg2;
@end

