//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCReportStateManager.h"

@class SCReportReasonNode;

@interface SCReportLensStateManager : SCReportStateManager
{
}

+ (id)_nodesFromType:(long long)arg1;
- (id)nodeAtIndex:(unsigned long long)arg1;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(retain, nonatomic) SCReportReasonNode *currentNode; // @dynamic currentNode;

@end

