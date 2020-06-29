//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSnapChatTableViewCellViewModel.h"

@class NSArray, SCChatMediaContent;

@interface SCGroupSnapChatTableViewCellViewModel : SCSnapChatTableViewCellViewModel
{
    NSArray *_groupParticipants;
    _Bool _isReceivedSnapSentToSelf;
    SCChatMediaContent *_media;
}

@property(readonly, nonatomic) SCChatMediaContent *media; // @synthesize media=_media;
- (void).cxx_destruct;
- (id)description;
- (double)replayNotificationLabelHeight;
- (double)screenshotNotificationLabelHeight;
- (id)textForSenderHeaderLabel;
- (id)subLabelText;
- (id)displayLoggingAction;
- (_Bool)shouldRecognizeLongPress;
- (_Bool)shouldRecognizeTap;
- (void)setSnapReplayAnimationState:(long long)arg1;
- (void)attemptToReplaySnap;
- (void)refreshViewModel;
- (void)_setupWithSnap:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;

@end

