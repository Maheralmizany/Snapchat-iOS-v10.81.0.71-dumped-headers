//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AIFSettings : NSObject
{
    NSMutableDictionary *_defaultsKeyBySelector;
}

- (void).cxx_destruct;
- (id)priv_defaultsKeyForSelector:(SEL)arg1;
- (id)exportExcludeProperties;
- (id)exportSettings;
- (id)defaultsKeyForPropertyName:(id)arg1;
- (id)userDefaults;
- (id)initWithDefaults:(id)arg1;
- (id)init;

@end
