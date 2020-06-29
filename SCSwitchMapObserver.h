//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCObserver-Protocol.h"
#import "SCProxyObserverDelegate-Protocol.h"

@class SCDisposableObserver;
@protocol SCObserver;

@interface SCSwitchMapObserver : NSObject <SCProxyObserverDelegate, SCObserver>
{
    id <SCObserver> _observer;
    CDUnknownBlockType _mapper;
    SCDisposableObserver *_innerDisposable;
}

- (void).cxx_destruct;
- (void)proxyObserverDidComplete:(id)arg1;
- (void)complete;
- (void)next:(id)arg1;
- (id)initWithObserver:(id)arg1 mapper:(CDUnknownBlockType)arg2;

@end

