//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, SCMagicMomentController;

@protocol SCMagicMomentControllerDelegate <NSObject>
- (void)magicMomentControllerDidFailEnablingMagicMoment:(SCMagicMomentController *)arg1;
- (void)magicMomentController:(SCMagicMomentController *)arg1 didUpdateFrameTimeForSaving:(NSNumber *)arg2;
- (void)magicMomentController:(SCMagicMomentController *)arg1 didSetCommandActive:(_Bool)arg2;
- (void)magicMomentController:(SCMagicMomentController *)arg1 didSetPlaybackPaused:(_Bool)arg2;
- (void)magicMomentController:(SCMagicMomentController *)arg1 didSetShowingSpinner:(_Bool)arg2;
@end

