//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SPThreadSafeMutableContainer : NSObject
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_array;
}

- (void).cxx_destruct;
- (id)array;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)popFirstObject;
- (void)appendObject:(id)arg1;
- (id)init;

@end

