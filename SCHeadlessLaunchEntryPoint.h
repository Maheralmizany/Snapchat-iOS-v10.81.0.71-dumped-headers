//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCHeadlessLaunchScope, SCHeadlessLaunchWorkflow;

@interface SCHeadlessLaunchEntryPoint : SCEntryPoint
{
    SCHeadlessLaunchWorkflow *_workflow;
    SCHeadlessLaunchScope *_headlessLaunchScope;
}

@property(nonatomic) __weak SCHeadlessLaunchScope *headlessLaunchScope; // @synthesize headlessLaunchScope=_headlessLaunchScope;
- (void).cxx_destruct;
- (void)begin;

@end

