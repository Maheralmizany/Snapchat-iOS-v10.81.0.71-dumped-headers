//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSnapKitAppState;
@protocol SCAppStoryAuthorizationDelegate, SCUIContainer;

@interface SCAppStoryAuthorizationScope : NSObject
{
    id <SCUIContainer> _uiContainer;
    SCSnapKitAppState *_snapKitAppState;
    id <SCAppStoryAuthorizationDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SCAppStoryAuthorizationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCSnapKitAppState *snapKitAppState; // @synthesize snapKitAppState=_snapKitAppState;
@property(readonly, nonatomic) id <SCUIContainer> uiContainer; // @synthesize uiContainer=_uiContainer;
- (void).cxx_destruct;
- (id)initWithUIContainer:(id)arg1 snapKitAppState:(id)arg2 delegate:(id)arg3;

@end

