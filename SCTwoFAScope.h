//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCTwoFAContext;
@protocol SCTwoFADelegate, SCUIContainer;

@interface SCTwoFAScope : NSObject
{
    id <SCTwoFADelegate> _delegate;
    id <SCUIContainer> _uiContainer;
    SCTwoFAContext *_context;
}

@property(readonly, nonatomic) SCTwoFAContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) id <SCUIContainer> uiContainer; // @synthesize uiContainer=_uiContainer;
@property(readonly, nonatomic) __weak id <SCTwoFADelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1 uiContainer:(id)arg2 context:(id)arg3;

@end
