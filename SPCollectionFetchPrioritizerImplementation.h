//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPCollectionFetchPrioritizer-Protocol.h"

@class NSHashTable, NSMutableOrderedSet, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface SPCollectionFetchPrioritizerImplementation : NSObject <SPCollectionFetchPrioritizer>
{
    long long _invisibleItemsLimit;
    double _updateTimeInterval;
    NSHashTable *_outputs;
    unsigned long long _scrollDirection;
    NSMutableOrderedSet *_items;
    NSTimer *_timer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableOrderedSet *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(retain, nonatomic) NSHashTable *outputs; // @synthesize outputs=_outputs;
@property(nonatomic) double updateTimeInterval; // @synthesize updateTimeInterval=_updateTimeInterval;
@property(nonatomic) long long invisibleItemsLimit; // @synthesize invisibleItemsLimit=_invisibleItemsLimit;
- (void).cxx_destruct;
- (long long)getMinValueFromItems:(id)arg1;
- (long long)getMaxValueFromItems:(id)arg1;
- (void)dispatchFetchItems;
- (void)updateItemsAtIndexes:(id)arg1;
- (void)updateScrollDirection:(unsigned long long)arg1;
- (void)didEndDisplayingItemAtIndex:(unsigned long long)arg1;
- (void)willDisplayItemAtIndex:(unsigned long long)arg1;
- (void)fetchItems;
- (void)removeOutput:(id)arg1;
- (void)addOutput:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

