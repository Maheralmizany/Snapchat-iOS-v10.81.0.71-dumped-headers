//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPlugInRegistry.h"

@class NSMutableSet, NSSet;

@interface SCPlugInSetRegistry : SCPlugInRegistry
{
    NSMutableSet *_plugIns;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *registeredPlugIns;
- (void)register:(id)arg1;
- (id)init;

@end

