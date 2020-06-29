//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMemoriesMergedDataSourceListener-Protocol.h"
#import "SCSpectaclesAppStatusListener-Protocol.h"
#import "SCSpectaclesEventListener-Protocol.h"
#import "SCSpectaclesHomeWifiManagerEventListener-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"

@class NSArray, NSDate, NSSet, NSString, SCDataObjectContext, SCSpectaclesAppStatusCoordinator, SCUserSession;
@protocol SCGalleryProfile, SCMemoriesMergedDataSource, SCSpectaclesHomeWifiManaging, SCSpectaclesManaging, SCSpectaclesStatusControllerDelegate;

@interface SCSpectaclesStatusController : NSObject <SCSpectaclesAppStatusListener, SCSpectaclesEventListener, SCSpectaclesHomeWifiManagerEventListener, SCMemoriesMergedDataSourceListener, SendSnapNavigationControllerDelegate>
{
    SCSpectaclesAppStatusCoordinator *_lagunaAppStatusCoordinator;
    id <SCSpectaclesManaging> _spectaclesManager;
    id <SCSpectaclesHomeWifiManaging> _spectaclesHomeWifiManager;
    id <SCMemoriesMergedDataSource> _memoriesMergedDataSource;
    id <SCGalleryProfile> _galleryProfile;
    NSSet *_latestTransferredContentIds;
    NSArray *_transferPriorityContentIds;
    NSDate *_lastCloudUploadTimeForNotificationShown;
    SCDataObjectContext *_dataObjectContext;
    SCUserSession *_userSession;
    _Bool _tabFocused;
    id <SCSpectaclesStatusControllerDelegate> _delegate;
}

@property(nonatomic) _Bool tabFocused; // @synthesize tabFocused=_tabFocused;
@property(nonatomic) __weak id <SCSpectaclesStatusControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_markHomeWifiTransferredContentAsSynced;
- (void)dataSource:(id)arg1 didFinalizeEntries:(id)arg2;
- (void)dataSource:(id)arg1 didChangeEntries:(id)arg2 failedEntries:(id)arg3 fetchEntryError:(id)arg4;
- (void)lagunaOnShareWifiCredentialsUpdate:(unsigned long long)arg1 device:(id)arg2 wifiSsid:(id)arg3;
- (void)spectaclesDevice:(id)arg1 didReceiveLastCloudUploadTime:(id)arg2;
- (void)spectaclesDeviceDidUpdateState:(id)arg1;
- (void)didSendSnaps:(id)arg1 postToStory:(_Bool)arg2;
- (void)didCancelFromPreview:(id)arg1;
- (void)_initiateAutomaticChatSendWithEntries:(id)arg1;
- (void)spectaclesTransferSession:(id)arg1 onTransferUpdate:(unsigned long long)arg2;
- (void)spectaclesDeviceDidUpdateContentList:(id)arg1;
- (void)statusCoordinatorNeedsToPair:(id)arg1;
- (void)statusCoordinatorPressedLearnMoreForBluetoothOverloadError:(id)arg1;
- (void)statusCoordinator:(id)arg1 needsToUpdateStateForDevice:(id)arg2;
- (void)statusCoordinatorNumberOfDevicesUpdated:(id)arg1;
- (void)statusCoordinatorBluetoothTurnedOn:(id)arg1;
- (void)statusCoordinatorBluetoothTurnedOff:(id)arg1;
- (_Bool)_multiSnapEnabledForCurrentTransferSession;
- (void)_notifyForDevice:(id)arg1;
- (id)_untransferredPictureContent;
- (id)_untransferredHdContent;
- (id)_currentTransferSessionForSnapCount;
- (void)_addListeners;
- (void)_updateTransferPriorityContentIds;
- (id)_multiSnapCombinedContentFromContent:(id)arg1;
- (id)transferringContent;
- (id)transferredContent;
- (id)untransferredContent;
- (id)connectedDevice;
- (void)setTransferPriorityContentIds:(id)arg1;
- (id)initWithUserSession:(id)arg1 spectaclesServices:(id)arg2 dataObjectContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

