//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensInfoCardRequestManaging-Protocol.h"

@class NSString, SCExperimentManager;
@protocol SCGtqNetworkRequestManaging;

@interface SCLensInfoCardRequestManager : NSObject <SCLensInfoCardRequestManaging>
{
    id <SCGtqNetworkRequestManaging> _gtqRequestManager;
    SCExperimentManager *_experimentManager;
}

+ (id)_errorWithInfoCardError:(long long)arg1;
+ (void)_sendError:(id)arg1 withFailureBlock:(CDUnknownBlockType)arg2;
+ (void)_sendInfoCardError:(long long)arg1 withFailureBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)_lensInfoPath;
- (id)_host;
- (id)_unlockablesIdsFromLensIds:(id)arg1;
- (id)_serveLensInfoCardNetworkRequestWithUnlockableIds:(id)arg1;
- (void)submitLensInfoCardRequestWithLensIds:(id)arg1 completionPerformer:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)initWithGTQNetworkRequestManager:(id)arg1 experimentManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
