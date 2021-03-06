//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCReportContinueDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString, SCUserSession;
@protocol SCAbuseReportUserInteractionDelegate;

@interface SCAbuseReportController : UIViewController <SCReportContinueDelegate, TTTAttributedLabelDelegate>
{
    SCUserSession *_userSession;
    NSString *_reportMessage;
    id <SCAbuseReportUserInteractionDelegate> _delegate;
}

@property(nonatomic) __weak id <SCAbuseReportUserInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *reportMessage; // @synthesize reportMessage=_reportMessage;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)continueButtonPressed;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

