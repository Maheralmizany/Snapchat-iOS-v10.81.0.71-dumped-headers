//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCEmbeddedContextCards-Protocol.h"
#import "SCSizeChangeAnnouncingView-Protocol.h"

@class NSString, SCContextV2ActionsHandler, SCContextV2CardsView, SCContextV2Session;
@protocol SCEmbeddedContextCardsDelegate;

@interface SCEmbeddedContextCardsView : UIView <SCEmbeddedContextCards, SCSizeChangeAnnouncingView>
{
    SCContextV2Session *_contextSession;
    SCContextV2CardsView *_cardsView;
    SCContextV2ActionsHandler *_actionsHandler;
    _Bool _shouldSendDelegateCallbackWhenHeightIsGreaterThanMinimum;
    CDUnknownBlockType _onSizeChangedBlock;
    id <SCEmbeddedContextCardsDelegate> _delegate;
}

@property(nonatomic) __weak id <SCEmbeddedContextCardsDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType onSizeChangedBlock; // @synthesize onSizeChangedBlock=_onSizeChangedBlock;
- (void).cxx_destruct;
- (void)_reallyLoadCards;
- (void)_loadCards;
- (void)setPlaceholderCards:(id)arg1;
- (void)_sizeChanged;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithSession:(id)arg1 viewControllerForModalPresentation:(id)arg2 style:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

