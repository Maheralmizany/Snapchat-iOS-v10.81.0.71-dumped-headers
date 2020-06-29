//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDynamicLocaleProvider-Protocol.h"

@class NSBundle, NSString, SCBehaviorSubject;
@protocol SCLocaleBundleProvider;

@interface SCDefaultDynamicLocaleProvider : NSObject <SCDynamicLocaleProvider>
{
    NSString *_locale;
    NSBundle *_localeBundle;
    id <SCLocaleBundleProvider> _bundleProvider;
    SCBehaviorSubject *_localizedStringEventObservable;
}

- (void).cxx_destruct;
- (id)_checkStringKeyInMainBundle:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)localizedStringEvent;
- (id)initWithLocale:(id)arg1 bundleProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

