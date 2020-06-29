//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsReportPresenter-Protocol.h"
#import "SCReportPageViewControllerDelegate-Protocol.h"
#import "UIAdaptivePresentationControllerDelegate-Protocol.h"

@class NSString, SCUserSession;
@protocol SCBloopsReportPresenterDelegate;

@interface SCBloopsReportPresenter : NSObject <SCReportPageViewControllerDelegate, UIAdaptivePresentationControllerDelegate, SCBloopsReportPresenter>
{
    SCUserSession *_userSession;
    id <SCBloopsReportPresenterDelegate> _delegate;
}

@property(nonatomic) __weak id <SCBloopsReportPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reportPageViewControllerDidCancelAtLevel:(unsigned long long)arg1 additionalData:(id)arg2;
- (void)reportPageViewControllerDidSubmitReport:(id)arg1 reasonId:(id)arg2 additionalData:(id)arg3;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)presentReportControllerFromViewController:(id)arg1 forBloopId:(id)arg2;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
