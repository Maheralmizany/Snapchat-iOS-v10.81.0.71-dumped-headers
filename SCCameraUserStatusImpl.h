//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCameraUserStatus-Protocol.h"

@class NSString, SCUserStorageServices;
@protocol SCCameraUserStatusImplDelegate;

@interface SCCameraUserStatusImpl : NSObject <SCCameraUserStatus>
{
    SCUserStorageServices *_storage;
    id <SCCameraUserStatusImplDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SCCameraUserStatusImplDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)logHasSeenScan;
- (void)logHasSeenLens;
- (_Bool)isFirstUseScan;
- (_Bool)isFirstUseLens;
- (_Bool)isUserLoggedIn;
- (id)initWithStorageServices:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
