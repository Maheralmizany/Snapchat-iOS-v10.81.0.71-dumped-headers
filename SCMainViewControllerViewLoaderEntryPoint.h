//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCNavigationServices;

@interface SCMainViewControllerViewLoaderEntryPoint : SCEntryPoint
{
    _Bool _headlessWithoutWarmup;
    SCNavigationServices *_navigationServices;
}

@property(nonatomic) __weak SCNavigationServices *navigationServices; // @synthesize navigationServices=_navigationServices;
- (void).cxx_destruct;
- (id)end;
- (void)_beginImmediately;
- (void)begin;

@end

