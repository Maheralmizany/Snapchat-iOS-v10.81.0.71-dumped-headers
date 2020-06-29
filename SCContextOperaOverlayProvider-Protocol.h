//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, SCDisposableObserver, SCObservable, SCOperaViewController, UIViewController;
@protocol SCContextOperaLayerViewControlling, SCContextPresenting;

@protocol SCContextOperaOverlayProvider <NSObject>
- (SCDisposableObserver *)publishCTADataUpdatesFrom:(SCObservable *)arg1 layerViewController:(UIViewController<SCContextOperaLayerViewControlling> *)arg2 operaNavigationStyle:(long long)arg3;
- (void)contextLayerWillFullyAppear:(UIViewController<SCContextOperaLayerViewControlling> *)arg1;
- (id <SCContextPresenting>)contextMenuControllerWithLayerViewController:(UIViewController<SCContextOperaLayerViewControlling> *)arg1 operaNavigationStyle:(long long)arg2;
- (_Bool)shouldAnimateTransition:(NSDictionary *)arg1;
- (void)prepareToPresentContextMenu:(UIViewController *)arg1;
- (void)prepareContextMenuWithProperties:(NSDictionary *)arg1;
- (void)setupWithOperaViewController:(SCOperaViewController *)arg1;
@end
