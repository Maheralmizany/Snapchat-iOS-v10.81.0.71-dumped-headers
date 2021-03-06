//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol SPLogger;

@interface SPDependenciesLocator : NSObject
{
    NSMutableDictionary *_dependenciesMap;
    id <SPLogger> _logger;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <SPLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)_createDependencyHolderWithObjectFactory:(CDUnknownBlockType)arg1 scope:(unsigned long long)arg2;
- (void)releaseAllObjects;
- (id)objectForProtocol:(id)arg1;
- (id)objectForClass:(Class)arg1;
- (void)unregisterProtocol:(id)arg1;
- (void)unregisterClass:(Class)arg1;
- (void)registerProtocol:(id)arg1 objectClass:(Class)arg2 scope:(unsigned long long)arg3;
- (void)registerProtocol:(id)arg1 object:(id)arg2 scope:(unsigned long long)arg3;
- (void)registerProtocol:(id)arg1 objectFactory:(CDUnknownBlockType)arg2 scope:(unsigned long long)arg3;
- (void)registerClass:(Class)arg1 scope:(unsigned long long)arg2;
- (void)registerClass:(Class)arg1 object:(id)arg2 scope:(unsigned long long)arg3;
- (void)registerClass:(Class)arg1 objectClass:(Class)arg2 scope:(unsigned long long)arg3;
- (void)registerClass:(Class)arg1 objectFactory:(CDUnknownBlockType)arg2 scope:(unsigned long long)arg3;
- (id)init;

@end

