//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImpalaOperaViewControllerWrapper.h"

@class SCImpalaShowProfilePresenter, SCOperaEventListenerAnnouncer;

@interface SCImpalaSnapInsightsOperaViewControllerWrapper : SCImpalaOperaViewControllerWrapper
{
    SCImpalaShowProfilePresenter *_presenter;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
}

- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithViewController:(id)arg1 presenter:(id)arg2 eventAnnouncer:(id)arg3;

@end
