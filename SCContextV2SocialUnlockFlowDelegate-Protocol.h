//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCContextV2SocialUnlockFlow;

@protocol SCContextV2SocialUnlockFlowDelegate <NSObject>
- (void)socialUnlockFlow:(id <SCContextV2SocialUnlockFlow>)arg1 willDismissContextCardsWithCompletion:(void (^)(void))arg2;
- (void)socialUnlockFlowDidDismissModalContent:(id <SCContextV2SocialUnlockFlow>)arg1;
- (void)socialUnlockFlowWillPresentModalContent:(id <SCContextV2SocialUnlockFlow>)arg1;
@end

