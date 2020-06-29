//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaPlaylistEventTrackerPlugin.h"

#import "SCOperaPlaylistItemExtraPropertiesProvider-Protocol.h"

@class NSDictionary, NSString, SCImpalaWatchedStateManager;
@protocol SCOperaPlaylistItemController;

@interface SCImpalaWatchedStateUpdatePlugin : SCOperaPlaylistEventTrackerPlugin <SCOperaPlaylistItemExtraPropertiesProvider>
{
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCImpalaWatchedStateManager *_watchedStateManager;
    NSString *_lastAdvanceToNextSnapId;
    NSDictionary *_lastEventSwipeParams;
}

- (void).cxx_destruct;
- (void)extraPropertiesForDataModel:(id)arg1 item:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_outputUpdate:(id)arg1 forceSubmit:(_Bool)arg2;
- (void)_logCurrentState:(id)arg1;
- (void)_logEvent:(id)arg1 context:(id)arg2;
- (void)_clearState;
- (void)_processEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (id)extraPropertiesProvider;
- (void)setPlaylistItemController:(id)arg1;
- (id)initWithWatchedStateManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
