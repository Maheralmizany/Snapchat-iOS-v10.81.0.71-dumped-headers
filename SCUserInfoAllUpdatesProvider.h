//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCUserInfoProvider.h"

@class SCDisposableObserver, SCObservable;

@interface SCUserInfoAllUpdatesProvider : SCUserInfoProvider
{
    CDUnknownBlockType _currentValueProvider;
    SCObservable *_publicObservable;
    SCDisposableObserver *_updatesObserver;
}

- (void).cxx_destruct;
- (id)updates;
- (id)currentValue;
- (id)initWithPreferencesKey:(id)arg1 userPreferences:(id)arg2 updates:(id)arg3 currentValueProvider:(CDUnknownBlockType)arg4;

@end
