//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGroupsDataRemoteFetching-Protocol.h"

@class SCLazy, SCSessionRequestManager;
@protocol SCGroupManager;

@interface SCGroupsDataRemoteFetcher : NSObject <SCGroupsDataRemoteFetching>
{
    id <SCGroupManager> _groupManager;
    SCSessionRequestManager *_requestManager;
    SCLazy *_userPreferences;
}

- (void).cxx_destruct;
- (void)_handleGroupsResponse:(id)arg1;
- (void)fetchGroupsFromServer:(CDUnknownBlockType)arg1;
- (void)_remoteFetchGroupsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchGroupsFromServerIfNecessary;
- (id)initWithGroupManager:(id)arg1 requestManager:(id)arg2 userPreferences:(id)arg3;

@end
