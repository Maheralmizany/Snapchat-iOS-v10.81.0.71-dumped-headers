//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapSearchIntentHandlerDelegate-Protocol.h"
#import "SCMapSearchPresenter-Protocol.h"
#import "SCSearchResultsViewControllerDelegate-Protocol.h"

@class NSString, SCMapLoggerSession, SCMapSearchCacheManager, SCMapSearchLogger, SCUserSession;
@protocol NavigationDelegate, SCLocationProvider, SCMapSearchPresenterDelegate;

@interface SCMapSearchPresenter : NSObject <SCMapSearchIntentHandlerDelegate, SCSearchResultsViewControllerDelegate, SCMapSearchPresenter>
{
    id <SCLocationProvider> _locationProvider;
    SCMapLoggerSession *_mapLoggerSession;
    id <NavigationDelegate> _navigationDelegate;
    SCUserSession *_userSession;
    id <SCMapSearchPresenterDelegate> _delegate;
    SCMapSearchCacheManager *_mapSearchCacheManager;
    SCMapSearchLogger *_mapSearchLogger;
}

- (void).cxx_destruct;
- (void)searchResultsViewController:(id)arg1 didCancelWithDismissActionType:(long long)arg2;
- (void)searchResultsViewController:(id)arg1 didOverscrollWithOffset:(double)arg2;
- (void)mapSearchIntentHandler:(id)arg1 wantsToShowMiniProfileForPerson:(id)arg2;
- (void)mapSearchIntentHandler:(id)arg1 wantsToGoToCoordinate:(struct CLLocationCoordinate2D)arg2 atZoomLevel:(double)arg3 coordinateBounds:(struct SCMapCoordinateBounds)arg4 useCoordinateBounds:(_Bool)arg5 withTitle:(id)arg6 dropPin:(_Bool)arg7 poiId:(id)arg8;
- (void)mapSearchIntentHandler:(id)arg1 wantsToChatWithUsername:(id)arg2 userId:(id)arg3;
- (void)mapSearchIntentHandler:(id)arg1 didSelectFriendLocation:(id)arg2;
- (id)presentSearchOnViewController:(id)arg1 delegate:(id)arg2 mapViewport:(id)arg3 searchView:(id)arg4 tileSetIdProvider:(id)arg5;
- (void)dealloc;
- (id)initWithLocationProvider:(id)arg1 mapLoggerSession:(id)arg2 navigationDelegate:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

