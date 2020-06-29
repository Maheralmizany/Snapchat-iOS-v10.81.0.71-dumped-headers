//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCObservable;
@protocol SCChatScopeDelegate, SCUIContainer;

@interface SCChatScope : NSObject
{
    SCObservable *_chatIntentObservable;
    id <SCChatScopeDelegate> _delegate;
    id <SCUIContainer> _uiContainer;
}

@property(readonly, nonatomic) id <SCUIContainer> uiContainer; // @synthesize uiContainer=_uiContainer;
@property(readonly, nonatomic) __weak id <SCChatScopeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCObservable *chatIntentObservable; // @synthesize chatIntentObservable=_chatIntentObservable;
- (void).cxx_destruct;
- (id)initWithChatIntentObservable:(id)arg1 delegate:(id)arg2 uiContainer:(id)arg3;
- (id)initWithChatIdentifier:(id)arg1 attribution:(id)arg2 delegate:(id)arg3 uiContainer:(id)arg4;

@end
