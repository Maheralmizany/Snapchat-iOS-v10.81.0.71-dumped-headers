//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageRenderer-Protocol.h"

@class NSString, SCChatSDKActionContext, SCCognacAppShareCardViewModel, SCMessagingCanvasApp, UITapGestureRecognizer;

@interface SCCognacAppShareMessageRenderer : NSObject <SCChatMessageRenderer>
{
    SCMessagingCanvasApp *_canvasApp;
    SCCognacAppShareCardViewModel *_viewModel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSString *_conversationId;
    SCChatSDKActionContext *_actionContext;
}

@property(nonatomic) __weak SCChatSDKActionContext *actionContext; // @synthesize actionContext=_actionContext;
- (void).cxx_destruct;
- (void)_handleDidTapContentView;
- (struct CGSize)sizeThatFits:(double)arg1;
- (id)reuseIdentifier;
- (void)setupContentView:(id)arg1;
- (void)prepareContentViewForReuse:(id)arg1;
- (void)didEndDisplayingContentView:(id)arg1;
- (void)willDisplayContentView:(id)arg1;
- (id)createContentView;
- (id)initWithCanvasApp:(id)arg1 conversationId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

