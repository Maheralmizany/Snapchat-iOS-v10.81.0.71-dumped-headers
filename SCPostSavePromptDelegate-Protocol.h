//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol SCPostSavePromptDelegate <NSObject>
- (void)selectedRecipientsDidChangeWithSnapchatters:(NSArray *)arg1 directSend:(_Bool)arg2 isShowingSuggestedFriends:(_Bool)arg3;
- (void)postSavePromptDidDismiss;
- (void)postSavePromptDidScrollWithIncrementalOffset:(double)arg1;
- (void)postSavePromptWillDimissWithDuration:(double)arg1 fromHeight:(double)arg2;
- (void)postSavePromptDidAppearWithHeight:(double)arg1;
- (void)postSavePromptDataDidBecomeAvailable;
@end

