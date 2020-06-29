//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpalaOperaContextProvider-Protocol.h"
#import "SCImpalaShowProfilePresenterDelegate-Protocol.h"

@class NSDictionary, NSString;
@protocol SCImpalaOperaContextProvider, SCImpalaOperaNavigationDelegate, SCOperaEventListener;

@interface SCImpalaShowProfilePresenterOperaDelegate : NSObject <SCImpalaOperaContextProvider, SCImpalaShowProfilePresenterDelegate>
{
    NSDictionary *_context;
    id <SCOperaEventListener> _eventListener;
    id <SCImpalaOperaContextProvider> _contextProvider;
    id <SCImpalaOperaNavigationDelegate> _navigationDelegate;
}

@property(readonly, nonatomic) __weak id <SCImpalaOperaNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) __weak id <SCImpalaOperaContextProvider> contextProvider; // @synthesize contextProvider=_contextProvider;
@property(readonly, nonatomic) __weak id <SCOperaEventListener> eventListener; // @synthesize eventListener=_eventListener;
- (void).cxx_destruct;
- (id)operaContext;
- (_Bool)showProfilePresenterSwipeUpEnabled:(id)arg1;
- (void)showProfilePresenterDidFinishDismissing:(id)arg1;
- (void)showProfilePresenterDidStartPresenting:(id)arg1;
- (id)initWithEventListener:(id)arg1 contextProvider:(id)arg2 navigationDelegate:(id)arg3;
- (id)initWithEventListener:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
