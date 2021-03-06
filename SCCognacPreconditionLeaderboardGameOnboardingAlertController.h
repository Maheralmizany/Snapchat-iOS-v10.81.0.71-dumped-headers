//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacPreconditionAlertController-Protocol.h"

@class NSString, SCAlertView, SCCognacBlizzardEventLoggingController;
@protocol SCCognacPreconditionAlertControllerDelegate;

@interface SCCognacPreconditionLeaderboardGameOnboardingAlertController : NSObject <SCCognacPreconditionAlertController>
{
    SCCognacBlizzardEventLoggingController *_eventLoggingController;
    SCAlertView *_leaderboardGameOnboardingAlertView;
    id <SCCognacPreconditionAlertControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCCognacPreconditionAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)alertType;
- (void)logAlertEventWithEventName:(id)arg1;
- (long long)loggingAlertType;
- (void)_dismissCurrentAlert;
- (void)dismissAlert;
- (CDUnknownBlockType)_makeAlertConfiguration;
- (void)_presentLeaderboardGameOnboardingAlert;
- (_Bool)presentAlert;
- (_Bool)isPresentingAlert;
- (id)initWithEventLoggingController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

