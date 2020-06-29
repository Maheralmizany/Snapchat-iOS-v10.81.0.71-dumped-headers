//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSError, NSObject, NSString, SPPersonsModelsCache;
@protocol OS_dispatch_semaphore, SPStringsProvider;

@interface SPAnimatorLoadingResultCacheOperation : NSOperation
{
    SPPersonsModelsCache *_personsModelsCache;
    id <SPStringsProvider> _stringsProvider;
    NSError *_error;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSArray *_results;
    NSString *_key;
}

@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id <SPStringsProvider> stringsProvider; // @synthesize stringsProvider=_stringsProvider;
@property(retain, nonatomic) SPPersonsModelsCache *personsModelsCache; // @synthesize personsModelsCache=_personsModelsCache;
- (void).cxx_destruct;
- (void)main;
- (id)initWithAnimatorLoadingResults:(id)arg1 key:(id)arg2;

@end

