//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensDataProviderFactory-Protocol.h"

@interface SCLensDataProviderFactoryImpl : NSObject <SCLensDataProviderFactory>
{
}

+ (id)_userSessionProvider;
+ (id)_createLensDataProviderWithUserSessionProvider:(id)arg1 configuration:(id)arg2;
+ (id)_createLensDataProviderWithUserSessionProvider:(id)arg1 ownerContextDescription:(id)arg2;
+ (id)_createAllLensesByIdRetrievableWithUserSessionProvider:(id)arg1;
+ (id)SCLegacy_createLensDataProviderWithUserSessionProvider:(id)arg1 configuration:(id)arg2;
+ (id)SCLegacy_createLensDataProviderWithUserSessionProvider:(id)arg1 ownerContextDescription:(id)arg2;
+ (id)SCLegacy_createAllLensesByIdRetrievableWithUserSessionProvider:(id)arg1;
- (id)createAllLensesByIdRetrievable;
- (id)createLensDataProviderWithConfiguration:(id)arg1;
- (id)createLensDataProviderWithOwnerContextDescription:(id)arg1;

@end

