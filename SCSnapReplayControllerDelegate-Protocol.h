//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, SCSnapReplayController;

@protocol SCSnapReplayControllerDelegate
- (void)replayController:(SCSnapReplayController *)arg1 didReplaySnapsInConversation:(NSString *)arg2;
- (void)replayControllerDidDismissAlertView:(SCSnapReplayController *)arg1;
- (void)replayControllerWillDisplayAlertView:(SCSnapReplayController *)arg1;
@end
