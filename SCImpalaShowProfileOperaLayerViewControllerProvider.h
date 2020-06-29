//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpalaOperaLayerViewControllerProvider-Protocol.h"

@class IMPShowProfileLaunchInfo, NSString, SCUserSession;
@protocol SCImpalaViewControllerProvider, SCImpalaWatchedStateCaching;

@interface SCImpalaShowProfileOperaLayerViewControllerProvider : NSObject <SCImpalaOperaLayerViewControllerProvider>
{
    _Bool _shouldDelegateGestures;
    _Bool _shouldShowGradient;
    SCUserSession *_userSession;
    id <SCImpalaViewControllerProvider> _provider;
    IMPShowProfileLaunchInfo *_launchInfo;
    NSString *_episodeId;
    id <SCImpalaWatchedStateCaching> _watchedStateCache;
}

@property(readonly, nonatomic) _Bool shouldShowGradient; // @synthesize shouldShowGradient=_shouldShowGradient;
@property(readonly, nonatomic) id <SCImpalaWatchedStateCaching> watchedStateCache; // @synthesize watchedStateCache=_watchedStateCache;
@property(readonly, nonatomic) NSString *episodeId; // @synthesize episodeId=_episodeId;
@property(readonly, nonatomic) IMPShowProfileLaunchInfo *launchInfo; // @synthesize launchInfo=_launchInfo;
@property(readonly, nonatomic) id <SCImpalaViewControllerProvider> provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) _Bool shouldDelegateGestures; // @synthesize shouldDelegateGestures=_shouldDelegateGestures;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)viewControllerForDelegate:(id)arg1 delegateViewForGestures:(id)arg2;
- (id)initWithUserSession:(id)arg1 provider:(id)arg2 launchInfo:(id)arg3 episodeId:(id)arg4 watchedStateCache:(id)arg5 shouldDelegateGestures:(_Bool)arg6 shouldShowGradient:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

