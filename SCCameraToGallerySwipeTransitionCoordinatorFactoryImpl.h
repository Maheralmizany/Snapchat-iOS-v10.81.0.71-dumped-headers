//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCameraToGallerySwipeTransitionCoordinatorFactory-Protocol.h"

@class NSString, SCLazy, SCScopeExposer, SCUserSession;

@interface SCCameraToGallerySwipeTransitionCoordinatorFactoryImpl : NSObject <SCCameraToGallerySwipeTransitionCoordinatorFactory>
{
    SCUserSession *_userSession;
    SCScopeExposer *_memoriesScopeExposer;
    SCLazy *_navigationPageState;
}

- (void).cxx_destruct;
- (id)createCoordinatorWithViewController:(id)arg1 delegate:(id)arg2;
- (id)initWithMemoriesScopeExposer:(id)arg1 navigationPageState:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

