//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCContactsSyncIssueReporter, SCGrapheneServices, SCLegacySnapchatterServices, SCSnapchatterServices, SCUserSessionScope;

@interface SCContactsSyncIssueReportEntryPoint : SCEntryPoint
{
    SCContactsSyncIssueReporter *_contactsSyncIssueReporter;
    SCUserSessionScope *_userSessionScope;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCSnapchatterServices *_snapchatterServices;
    SCGrapheneServices *_grapheneServices;
}

@property(nonatomic) __weak SCGrapheneServices *grapheneServices; // @synthesize grapheneServices=_grapheneServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end
