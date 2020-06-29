//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsTargetPolicyUpdater-Protocol.h"

@class NSString, SCLazy, SCQueuePerformer;
@protocol SCBloopsTargetPolicyUpdaterDelegate;

@interface SCBloopsTargetPolicyUpdaterImpl : NSObject <SCBloopsTargetPolicyUpdater>
{
    SCLazy *_userInfoProvider;
    SCLazy *_targetsService;
    long long _policyType;
    SCQueuePerformer *_performer;
    id <SCBloopsTargetPolicyUpdaterDelegate> delegate;
}

@property(nonatomic) __weak id <SCBloopsTargetPolicyUpdaterDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)updateBloopsTargetPolicyRespectingSnapPrivacy;
- (void)obtainPolicyType;
@property(readonly, nonatomic) long long policyType;
- (id)initWithUserInfoProvider:(id)arg1 targetsService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

