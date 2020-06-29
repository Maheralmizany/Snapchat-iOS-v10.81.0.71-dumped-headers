//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMemoriesInlineSearchDataSourceListener-Protocol.h"

@class NSString;

@interface SCMemoriesInlineSearchDataSourceListenerAnnouncer : NSObject <SCMemoriesInlineSearchDataSourceListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCMemoriesInlineSearchDataSourceListener>, std::__1::allocator<__weak id<SCMemoriesInlineSearchDataSourceListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)memoriesInlineSearchDataSource:(id)arg1 didChangeSearchResults:(id)arg2;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

