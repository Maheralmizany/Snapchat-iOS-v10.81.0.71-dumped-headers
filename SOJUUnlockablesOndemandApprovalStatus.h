//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesOndemandApprovalStatus-Protocol.h"

@class NSString, SOJUUnlockablesOndemandLineItemApprovalDetails;

@interface SOJUUnlockablesOndemandApprovalStatus : SCSojuMessage <SOJUUnlockablesOndemandApprovalStatus>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithStatus:(id)arg1 rejectionDetails:(id)arg2 revocationDetails:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SOJUUnlockablesOndemandLineItemApprovalDetails *rejectionDetails; // @dynamic rejectionDetails;
@property(readonly, nonatomic) SOJUUnlockablesOndemandLineItemApprovalDetails *revocationDetails; // @dynamic revocationDetails;
@property(readonly, nonatomic) NSString *status; // @dynamic status;
@property(readonly) Class superclass;

@end

