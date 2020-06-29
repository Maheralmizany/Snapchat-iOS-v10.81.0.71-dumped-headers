//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface SCTV3GlobalConfiguration : NSObject
{
    CDUnknownBlockType _filter;
    CDUnknownBlockType _enableTask;
    CDUnknownBlockType _disableTask;
    NSHashTable *_wrappersRequiringConfiguration;
    _Bool _enabled;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)updateConfigurationTask;
- (void)removeWrapper:(id)arg1;
- (void)refreshForWrapper:(id)arg1 state:(id)arg2;
- (id)initWithFilter:(CDUnknownBlockType)arg1 enableTask:(CDUnknownBlockType)arg2 disableTask:(CDUnknownBlockType)arg3;

@end

