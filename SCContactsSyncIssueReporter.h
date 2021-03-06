//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSString, SCLazy;

@interface SCContactsSyncIssueReporter : NSObject <SCSnapchattersDataRequestListener>
{
    SCLazy *_graphene;
    SCLazy *_userInfoProvider;
    SCLazy *_snapchattersDataTracker;
}

- (void).cxx_destruct;
- (void)_reportContactSyncIssueWithContactsWithSource:(long long)arg1 shouldRecommend:(_Bool)arg2 isAllUpdate:(_Bool)arg3 isDelta:(_Bool)arg4 isResultTrimmed:(_Bool)arg5;
- (void)didEndSnapchattersContactDataRequest:(id)arg1 withResult:(id)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)initWithGraphene:(id)arg1 userInfoProvider:(id)arg2 snapchattersDataTracker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

