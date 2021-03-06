//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSString, SCActionModel, SCContextV3PostSnapParams, UIImage;

@protocol SCSnapChatCellViewConfig <NSObject>
@property(readonly, copy, nonatomic) SCContextV3PostSnapParams *postSnapActionsParams;
@property(readonly, nonatomic) double postSnapActionsHeight;
- (SCActionModel *)displayLoggingAction;
- (NSString *)subLabelText;
- (NSAttributedString *)attributedActionText;
- (UIImage *)statusIconImage;
- (_Bool)shouldShowActivity;
@property(readonly, nonatomic) double mediaCardHeight;
- (double)replayNotificationLabelHeight;
- (double)screenshotNotificationLabelHeight;
- (NSAttributedString *)attributedTextForReplayNotificationLabel;
- (NSAttributedString *)attributedTextForScreenRecordingNotificationLabel;
- (NSAttributedString *)attributedTextForScreenshotNotificationLabel;
- (unsigned long long)timerCountDownValue;
- (_Bool)shouldRecognizeLongPress;
- (_Bool)shouldRecognizeTap;
- (_Bool)shouldShowReplayNotificationLabel;
- (_Bool)shouldShowTimer;
- (_Bool)shouldShowScreenRecordingNotificationLabel;
- (_Bool)shouldShowScreenshotNotificationLabel;
@end

