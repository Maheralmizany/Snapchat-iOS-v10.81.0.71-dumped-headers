//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCSearchView, UIViewController;
@protocol SCMapPOITileSetIdProviding, SCMapSearchPresenterDelegate, SCMapViewport;

@protocol SCMapSearchPresenter <NSObject>
- (UIViewController *)presentSearchOnViewController:(UIViewController *)arg1 delegate:(id <SCMapSearchPresenterDelegate>)arg2 mapViewport:(id <SCMapViewport>)arg3 searchView:(SCSearchView *)arg4 tileSetIdProvider:(id <SCMapPOITileSetIdProviding>)arg5;
@end

