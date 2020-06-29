//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SIGCell.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SIGActionSheet, SIGLoadingIndicatorView, SIGTargetActionDispatcher, UILongPressGestureRecognizer;

@interface SIGActionSheetCell : SIGCell <UIGestureRecognizerDelegate>
{
    SIGTargetActionDispatcher *_eventDispatcher;
    _Bool _actionSpecified;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    SIGLoadingIndicatorView *_loadingIndicator;
    SIGActionSheet *_actionSheet;
    CDUnknownBlockType _action;
}

+ (id)cardWithImage:(id)arg1 titleText:(id)arg2;
+ (id)footerCellWithText:(id)arg1;
+ (id)sendToCellWithText:(id)arg1;
+ (id)sendToCellWithText:(id)arg1 isCompressed:(_Bool)arg2;
+ (id)switchCellWithText:(id)arg1 value:(_Bool)arg2;
+ (id)switchCellWithText:(id)arg1 value:(_Bool)arg2 compressed:(_Bool)arg3;
+ (id)selectCellWithText:(id)arg1 value:(_Bool)arg2;
+ (id)selectCellWithText:(id)arg1 value:(_Bool)arg2 compressed:(_Bool)arg3;
+ (id)moreOptionsCellWithText:(id)arg1;
+ (id)moreOptionsCellWithText:(id)arg1 compressed:(_Bool)arg2;
+ (id)descriptionCellWithText:(id)arg1 description:(id)arg2;
+ (id)valueCellWithText:(id)arg1 value:(id)arg2;
+ (id)loadingCell;
+ (id)errorCellWithText:(id)arg1;
+ (id)destructiveOptionCellWithText:(id)arg1;
+ (id)optionCellWithText:(id)arg1;
+ (id)optionCellWithText:(id)arg1 isCompressed:(_Bool)arg2;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) __weak SIGActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_toggleSelectionState;
- (void)didMoveToWindow;
- (void)_sendActions;
- (void)_addTarget:(id)arg1 action:(SEL)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_createLoadingIndicatorIfNeeded;
- (void)_onLongPress:(id)arg1;
- (void)_possiblyInvokeActionBlock;
- (void)_assertValidActionSheet;
- (void)_markActionSpecifiedOrAssert;
- (id)target:(id)arg1 action:(SEL)arg2;
- (id)block:(CDUnknownBlockType)arg1;
- (id)initWithStyle:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

