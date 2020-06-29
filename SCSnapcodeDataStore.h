//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSLock, NSMutableDictionary, NSNumber, NSString, SCSessionRequestManager;

@interface SCSnapcodeDataStore : NSObject <SCUserSessionScoped>
{
    SCSessionRequestManager *_requestManager;
    NSMutableDictionary *_snapcodeDataStore;
    NSMutableDictionary *_snapcodeSVGDataStore;
    NSNumber *_lastTotalCount;
    NSLock *_lockSVGDataStore;
    _Bool _fetchingData;
}

+ (void)removeSavedState;
+ (id)archivingPath;
+ (id)restoreSavedStateWithRequestManager:(id)arg1;
@property(readonly, nonatomic) _Bool fetchingData; // @synthesize fetchingData=_fetchingData;
- (void).cxx_destruct;
- (id)scannableSvgData:(id)arg1 snapcodeVersion:(int)arg2;
@property(readonly, nonatomic) long long snapcodeToDisplayCount;
- (id)scannableObjectFor:(id)arg1;
- (id)scannableObjectsForKey:(id)arg1;
- (void)_sendFailureNotification:(id)arg1;
- (void)_removeScannableId:(id)arg1;
- (void)_updateScannableWithId:(id)arg1 scannable:(id)arg2;
- (void)updateSnapcode:(id)arg1 scannableInfo:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)deleteSnapcode:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateData;
- (void)updateDataIfNecessary;
- (void)_ensureNonNilObjects;
- (void)encodeWithCoder:(id)arg1;
- (void)clear;
- (void)saveState;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestManager:(id)arg1;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

