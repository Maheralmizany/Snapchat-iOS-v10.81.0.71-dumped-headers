//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCCTXAction, SCContextV3ActionTriggerSource;
@protocol SCContextV3ActionHandling;

@protocol SCContextV3ActionHandlerDelegate <NSObject>
- (void)actionHandler:(id <SCContextV3ActionHandling>)arg1 didEndAction:(SCCTXAction *)arg2 source:(SCContextV3ActionTriggerSource *)arg3;
- (void)actionHandler:(id <SCContextV3ActionHandling>)arg1 willStartAction:(SCCTXAction *)arg2 source:(SCContextV3ActionTriggerSource *)arg3;
@end

