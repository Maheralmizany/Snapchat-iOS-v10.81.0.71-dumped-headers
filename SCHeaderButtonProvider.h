//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAddFriendsHeaderButtonDelegate-Protocol.h"
#import "SCHeaderButtonProvider-Protocol.h"
#import "SCProfileHeaderButtonDelegate-Protocol.h"
#import "SCSearchHeaderButtonDelegate-Protocol.h"

@class SCLazy, SCMultiScopeExposer;
@protocol SCHeaderButtonDelegate;

@interface SCHeaderButtonProvider : NSObject <SCProfileHeaderButtonDelegate, SCSearchHeaderButtonDelegate, SCAddFriendsHeaderButtonDelegate, SCHeaderButtonProvider>
{
    SCMultiScopeExposer *_profileHeaderButtonScopeExposer;
    SCMultiScopeExposer *_searchHeaderButtonScopeExposer;
    SCMultiScopeExposer *_addFriendsHeaderButtonScopeExposer;
    id <SCHeaderButtonDelegate> _delegate;
    SCLazy *_experimentManager;
}

- (void).cxx_destruct;
- (void)didTapAddFriendsHeaderButton:(id)arg1 withPlacementType:(long long)arg2;
- (void)didTapSearchHeaderButton:(id)arg1;
- (void)didTapProfileHeaderButton:(id)arg1;
- (id)addFriendsButtonItemWithPlacementType:(long long)arg1;
- (id)searchButtonItem;
- (id)profileButtonItem;
- (id)initWithProfileHeaderButtonScopeExposer:(id)arg1 searchHeaderButtonScopeExposer:(id)arg2 addFriendsHeaderButtonScopeExposer:(id)arg3 experimentManager:(id)arg4 delegate:(id)arg5;

@end

