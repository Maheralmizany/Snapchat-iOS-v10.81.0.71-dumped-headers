//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCBloopsChatSecondTargetProvider, SCBloopsConversationCallStateListener, SCLazy;
@protocol SCBloopsPickerAccessory;

@protocol SCBloopsPickerAccessoryFactory <NSObject>
- (id <SCBloopsPickerAccessory>)createPickerAccessoryWithSecondTargetProvider:(SCBloopsChatSecondTargetProvider *)arg1 conversationCallStateListener:(SCBloopsConversationCallStateListener *)arg2 fullscreenPlayerPresenterFactory:(SCLazy *)arg3 reportPresenter:(SCLazy *)arg4;
@end
