//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "SCChatLoadingCellViewConfig-Protocol.h"
#import "SCChatMessageViewModel-Protocol.h"
#import "SCGroupUpdateChatViewModel-Protocol.h"
#import "SCMessageChatCellViewConfig-Protocol.h"
#import "SCSavableItemChatCellViewConfig-Protocol.h"

@class NSString, SCChatActionModelContainer, SCChatDateHeaderViewModel, SCChatSavableViewModel, SCChatSenderHeaderViewModel, SCChatSenderLineViewModel, SCChatTimestampViewModel;
@protocol NSObject, SCChatUIContentRenderable;

@interface SCChatMessageCellViewModel : NSObject <SCChatMessageViewModel, SCMessageChatCellViewConfig, SCSavableItemChatCellViewConfig, SCGroupUpdateChatViewModel, SCChatLoadingCellViewConfig, IGListDiffable, NSCopying>
{
    _Bool _shouldDisplayBelowFoldInChat;
    _Bool _isUnseenMessageInChat;
    _Bool _isAvailableForNewChatsAffordance;
    _Bool _isMessageSentBySelf;
    _Bool _shouldDisplayDebugUI;
    SCChatSavableViewModel *_savableViewModel;
    SCChatSenderHeaderViewModel *_senderHeader;
    SCChatSenderLineViewModel *_senderLine;
    double _cellHeight;
    double _bodyWidth;
    double _payloadWidth;
    double _payloadContentWidth;
    NSString *_reusableCellIdentifier;
    SCChatDateHeaderViewModel *_dateHeaderViewModel;
    id <SCChatUIContentRenderable> _messageContent;
    SCChatTimestampViewModel *_timestampViewModel;
    id <NSObject> _identifier;
    SCChatActionModelContainer *_actionModels;
    NSString *_accessibilityValue;
    struct UIEdgeInsets _bodyInsets;
}

@property(readonly, copy, nonatomic) NSString *accessibilityValue; // @synthesize accessibilityValue=_accessibilityValue;
@property(readonly, nonatomic) _Bool shouldDisplayDebugUI; // @synthesize shouldDisplayDebugUI=_shouldDisplayDebugUI;
@property(readonly, copy, nonatomic) SCChatActionModelContainer *actionModels; // @synthesize actionModels=_actionModels;
@property(readonly, nonatomic) id <NSObject> identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) SCChatTimestampViewModel *timestampViewModel; // @synthesize timestampViewModel=_timestampViewModel;
@property(readonly, nonatomic) id <SCChatUIContentRenderable> messageContent; // @synthesize messageContent=_messageContent;
@property(readonly, copy, nonatomic) SCChatDateHeaderViewModel *dateHeaderViewModel; // @synthesize dateHeaderViewModel=_dateHeaderViewModel;
@property(readonly, nonatomic) _Bool isMessageSentBySelf; // @synthesize isMessageSentBySelf=_isMessageSentBySelf;
@property(readonly, nonatomic) _Bool isAvailableForNewChatsAffordance; // @synthesize isAvailableForNewChatsAffordance=_isAvailableForNewChatsAffordance;
@property(readonly, nonatomic) _Bool isUnseenMessageInChat; // @synthesize isUnseenMessageInChat=_isUnseenMessageInChat;
@property(readonly, nonatomic) _Bool shouldDisplayBelowFoldInChat; // @synthesize shouldDisplayBelowFoldInChat=_shouldDisplayBelowFoldInChat;
@property(readonly, copy, nonatomic) NSString *reusableCellIdentifier; // @synthesize reusableCellIdentifier=_reusableCellIdentifier;
@property(readonly, nonatomic) struct UIEdgeInsets bodyInsets; // @synthesize bodyInsets=_bodyInsets;
@property(readonly, nonatomic) double payloadContentWidth; // @synthesize payloadContentWidth=_payloadContentWidth;
@property(readonly, nonatomic) double payloadWidth; // @synthesize payloadWidth=_payloadWidth;
@property(readonly, nonatomic) double bodyWidth; // @synthesize bodyWidth=_bodyWidth;
@property(readonly, nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(readonly, copy, nonatomic) SCChatSenderLineViewModel *senderLine; // @synthesize senderLine=_senderLine;
@property(readonly, copy, nonatomic) SCChatSenderHeaderViewModel *senderHeader; // @synthesize senderHeader=_senderHeader;
@property(readonly, copy, nonatomic) SCChatSavableViewModel *savableViewModel; // @synthesize savableViewModel=_savableViewModel;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)diffIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSavableViewModel:(id)arg1 senderHeader:(id)arg2 senderLine:(id)arg3 cellHeight:(double)arg4 bodyWidth:(double)arg5 payloadWidth:(double)arg6 payloadContentWidth:(double)arg7 bodyInsets:(struct UIEdgeInsets)arg8 reusableCellIdentifier:(id)arg9 shouldDisplayBelowFoldInChat:(_Bool)arg10 isUnseenMessageInChat:(_Bool)arg11 isAvailableForNewChatsAffordance:(_Bool)arg12 isMessageSentBySelf:(_Bool)arg13 dateHeaderViewModel:(id)arg14 messageContent:(id)arg15 timestampViewModel:(id)arg16 identifier:(id)arg17 actionModels:(id)arg18 shouldDisplayDebugUI:(_Bool)arg19 accessibilityValue:(id)arg20;
- (_Bool)shouldShowSaveOrUnsaveAnimation;
- (_Bool)shouldShowSavedLabel;
- (double)widthForSenderLine;
- (id)colorForBackground;
- (_Bool)messageHasReplyMedias;
- (unsigned long long)messageRetentionInMinutes;
- (id)expirationDate;
- (double)verticalOffsetForSenderHeaderLabel;
- (double)verticalOffsetForBodyView;
- (id)textLabelFont;
- (id)textForActionHeaderTimeLabel;
- (id)textForTimeLabel;
- (id)textForStatusMessageHeaderLabel;
- (id)textForSenderHeaderLabel;
- (id)textForHeaderStatusView;
- (id)textForDateHeaderLabel;
- (unsigned long long)textCheckingTypes;
- (_Bool)shouldShowURLMediaCards;
- (_Bool)shouldShowStatusMessageHeaderLabel;
- (_Bool)shouldShowRetryStatusView;
- (_Bool)shouldShowRetryIcon;
- (id)sectionColor;
- (double)payloadVerticalMargin;
- (double)payloadHorizontalMargin;
- (double)payloadHeight;
- (_Bool)isGrayScaleMediaCard;
- (double)headerLabelHeight;
- (id)headerLabelFont;
@property(readonly, nonatomic) double dateHeaderVerticalMargin;
@property(readonly, nonatomic) double dateHeaderHorizontalMargin;
@property(readonly, nonatomic) double headerHorizontalMargin;
- (double)headerHeight;
@property(readonly, nonatomic) double dateHeaderHeight;
- (double)bodyContentWidth;
@property(nonatomic) _Bool bottomLeftCornerIsRounded;
@property(readonly, nonatomic) _Bool shouldShowSenderHeader;
@property(nonatomic) _Bool isLastViewModel;
@property(nonatomic) _Bool isFirstViewModel;
@property(readonly, nonatomic) _Bool shouldShowDateHeader;
- (_Bool)shouldDisplayBelowFoldInChatForPreviewMode;
@property(readonly, nonatomic) _Bool shouldShowTimestamp;
- (void)refreshViewModel;
- (_Bool)needsExtraSpacingOnTop;
- (_Bool)isSentByUser;
- (double)intervalFromPrevious;
- (double)calculateHeight;
- (double)bodyTopMargin;
@property(readonly, nonatomic) double topMargin;
@property(nonatomic) double height;
@property(nonatomic) _Bool topRightCornerIsRounded;
@property(nonatomic) _Bool bottomRightCornerIsRounded;
@property(nonatomic) int headerIndex;
- (id)attributedTextForLabel;
- (id)paginationToken;
- (id)tapLoadHistoryAction;
- (id)displayLoadHistoryAction;
- (long long)loadingStatus;
- (id)xLogObjectInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

