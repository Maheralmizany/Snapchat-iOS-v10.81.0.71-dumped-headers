//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpalaSnapInsightsPresentationHandling-Protocol.h"

@class NSString, UIViewController;

@interface SCImpalaSnapInsightsPresentationHandler : NSObject <SCImpalaSnapInsightsPresentationHandling>
{
    UIViewController *_viewController;
}

- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)pop;
- (void)pushWithModuleName:(id)arg1 componentPath:(id)arg2 viewModel:(id)arg3;
- (void)dismiss;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

