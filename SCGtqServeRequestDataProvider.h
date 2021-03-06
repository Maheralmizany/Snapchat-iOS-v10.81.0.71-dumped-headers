//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUnlockablesServeRequestDataProvider-Protocol.h"

@class SCULGeoCircle, SCUnlockableSensitivity;
@protocol SCUnlockablesAdRequestProvider, SCUnlockablesAuthProvider, SCUnlockablesExperimentProvider, SCUnlockablesRequestInfoProvider, SCUnlockablesSnapScoreProvider;

@interface SCGtqServeRequestDataProvider : NSObject <SCUnlockablesServeRequestDataProvider>
{
    SCULGeoCircle *_location;
    SCUnlockableSensitivity *_sensitivity;
    id <SCUnlockablesAuthProvider> _authProvider;
    id <SCUnlockablesAdRequestProvider> _adRequestProvider;
    id <SCUnlockablesRequestInfoProvider> _requestInfoProvider;
    id <SCUnlockablesExperimentProvider> _experimentProvider;
    id <SCUnlockablesSnapScoreProvider> _snapScoreProvider;
}

@property(retain, nonatomic) id <SCUnlockablesSnapScoreProvider> snapScoreProvider; // @synthesize snapScoreProvider=_snapScoreProvider;
@property(retain, nonatomic) id <SCUnlockablesExperimentProvider> experimentProvider; // @synthesize experimentProvider=_experimentProvider;
@property(retain, nonatomic) id <SCUnlockablesRequestInfoProvider> requestInfoProvider; // @synthesize requestInfoProvider=_requestInfoProvider;
@property(retain, nonatomic) id <SCUnlockablesAdRequestProvider> adRequestProvider; // @synthesize adRequestProvider=_adRequestProvider;
@property(retain, nonatomic) id <SCUnlockablesAuthProvider> authProvider; // @synthesize authProvider=_authProvider;
- (void).cxx_destruct;
- (id)_userInfo;
- (id)gtqCacheAwareServeRequest:(id)arg1;
- (id)initWithLocation:(id)arg1 sensitivity:(id)arg2;

@end

