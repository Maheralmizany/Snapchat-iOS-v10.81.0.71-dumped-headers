//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNComposerModuleFactory-Protocol.h"

@class NSString, SCDataHandlerObserverList;
@protocol SCComposerJSQueueDispatcher;

@interface SCComposerDeviceModule : NSObject <SCNComposerModuleFactory>
{
    NSString *_systemVersion;
    NSString *_model;
    double _displayWidth;
    double _displayHeight;
    double _displayScale;
    struct UIEdgeInsets _insets;
    SCDataHandlerObserverList *_displayInsetsObserver;
    id <SCComposerJSQueueDispatcher> _jsQueueDispatcher;
}

- (void).cxx_destruct;
- (id)loadModule;
- (id)displayBottomInset;
- (id)displayRightInset;
- (id)displayTopInset;
- (id)displayLeftInset;
- (id)displayScale;
- (id)displayHeight;
- (id)displayWidth;
- (id)deviceLocales;
- (id)model;
- (id)systemVersion;
- (id)systemType;
- (void)notifyDisplayInsetChanged;
- (void)_updateDisplayInsetsAndNotify:(_Bool)arg1;
- (struct UIEdgeInsets)_currentInsets;
- (id)performHapticFeedback:(id)arg1;
- (id)initWithJSQueueDispatcher:(id)arg1;

@end

