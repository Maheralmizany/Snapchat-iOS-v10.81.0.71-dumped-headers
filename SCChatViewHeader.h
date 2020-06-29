//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatConversationUpdaterListener-Protocol.h"
#import "SCChatViewLifeCycleListener-Protocol.h"
#import "SCHeaderDataSource-Protocol.h"
#import "SCTV3CallStateListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCAvatarView, SCChatViewHeaderViewModel, SCHeader, SCScalingButton, SCUserSession, UIButton, UILabel, UIView;
@protocol SCChatViewHeaderDataSource;

@interface SCChatViewHeader : NSObject <SCTraceEnabled, SCChatViewLifeCycleListener, SCChatConversationUpdaterListener, SCHeaderDataSource, SCTV3CallStateListener>
{
    SCUserSession *_userSession;
    UIView *_parentView;
    UIView *_rightButtonCircleView;
    UIView *_recipientBar;
    SCScalingButton *_avatarLeftIconButtonView;
    SCAvatarView *_avatarLeftIconView;
    id <SCChatViewHeaderDataSource> _dataSource;
    UIView *_containerView;
    UILabel *_sccpActiveLabel;
    SCChatViewHeaderViewModel *_viewModel;
    UIView *_backgroundTintView;
    double _currentAvatarLeftIconViewSize;
    SCHeader *_header;
    UIButton *_rightButton;
    UIView *_callButtonsPane;
}

+ (id)rightButtonCircleBorderColor;
@property(readonly, nonatomic) UIView *callButtonsPane; // @synthesize callButtonsPane=_callButtonsPane;
@property(readonly, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(readonly, nonatomic) SCHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)detachCallButtonsPane;
- (void)attachCallButtonsPane:(id)arg1;
- (void)didDismissBackgroundTintView:(id)arg1;
- (id)backgroundTintView;
- (_Bool)_isEditing;
- (_Bool)_isRTL;
- (void)_cleanupForRecipientBarRemoval;
- (void)_updateLayoutForRecipientBarRemoval;
- (void)removeRecipientBar:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addRecipientBar:(id)arg1;
- (void)_updateRightButtonCircleWithVerticalTranslationUp:(double)arg1;
- (void)_updateAlphaWithProgress:(double)arg1;
- (void)displayWithVerticalTranslationUp:(double)arg1;
- (void)setHeaderViewsScale:(double)arg1 includeContentView:(_Bool)arg2;
- (void)setHeaderViewColor:(id)arg1;
- (void)setButtonsAlpha:(double)arg1;
- (void)setHeaderAlpha:(double)arg1;
- (void)setHeaderContentAlpha:(double)arg1;
- (void)setHeaderViewsAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (double)_deltaBetweenAvatarAndOriginalLeftButton;
- (double)_gapBetweenTitleAndCallButtons;
- (double)headerContentViewAdditionalHorizontalPadding;
- (double)additionalXOffsetForHeader;
- (long long)maxLengthForHeaderTextField:(id)arg1;
- (_Bool)shouldEnableXButtonForTextField:(id)arg1;
- (id)tintColorForHeader:(id)arg1;
- (long long)returnKeyTypeForHeaderTextField:(id)arg1;
- (_Bool)shouldEnableTextField:(id)arg1;
- (id)viewForTitleInHeader:(id)arg1;
- (id)imageForXButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)fontForHeader:(id)arg1;
- (id)placeholderAttributedString:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)onPublishedMediaOrMuteChanged:(id)arg1 media:(unsigned long long)arg2 muted:(_Bool)arg3;
- (void)onOutgoingCallStarted;
- (void)onOutgoingCallRequested;
- (void)onOutgoingCallRejected;
- (void)onOutgoingCallMissed;
- (void)onOutgoingCallCancelled;
- (void)onIncomingCallWatched;
- (void)onIncomingCallStarted;
- (void)onIncomingCallReceived;
- (void)onIncomingCallCancelled;
- (void)onCallWatched;
- (void)onCallEnded;
- (void)didConversationViewModelChange:(id)arg1;
- (double)_avatarIconViewTopOffset;
- (void)_updateLeftIconViewModel:(id)arg1;
- (void)enableInteraction;
- (void)disableInteraction;
- (void)reloadHeader;
- (void)viewDidFullyDisappear;
- (void)_initAvatarLeftIconButtonViewWithDelegate:(id)arg1;
- (id)rightButtonCircleView;
- (void)_initRightButton;
- (void)updateSCCPLabelWithState:(id)arg1;
- (void)_initSCCPStatusLabel;
- (id)headerText;
- (void)didEndEditing;
- (void)setTextHidden:(_Bool)arg1;
- (void)showHeaderViewsOnEndEdit;
- (void)hideHeaderViewsOnStartEdit;
@property(readonly, nonatomic) UIButton *leftButton;
- (id)headerView;
- (double)recipientBarHeight;
- (id)headerSuperview;
- (void)setHeaderFrame:(struct CGRect)arg1;
- (struct CGRect)headerFrame;
- (id)headerBottom;
- (void)_initHeaderWithDelegate:(id)arg1 headerStyle:(unsigned long long)arg2;
- (id)initWithHeaderDelegate:(id)arg1 headerDataSource:(id)arg2 headerStyle:(unsigned long long)arg3 parentView:(id)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
