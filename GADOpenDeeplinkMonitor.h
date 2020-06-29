//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADAd, GADClickProtection, GADObserverCollection;
@protocol GADJavascriptEvaluating;

@interface GADOpenDeeplinkMonitor : NSObject
{
    GADObserverCollection *_observers;
    GADAd *_ad;
    GADClickProtection *_clickProtection;
    id <GADJavascriptEvaluating> _messageSource;
}

- (void).cxx_destruct;
- (void)handleDeeplinkPlusAction:(id)arg1;
- (void)handleOpenDeeplinkAction:(id)arg1;
- (id)initWithAd:(id)arg1 messageSource:(id)arg2 clickProtection:(id)arg3;

@end

