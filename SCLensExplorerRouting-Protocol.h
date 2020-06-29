//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCLensExplorerInteractiveTransitionCoordinator-Protocol.h"

@class NSData, NSError, NSString, SCLens, SCLensExplorerLensItem, SCLensExplorerLensItemCreator, SCLensExplorerPresentationConfiguration, UIViewController;
@protocol SCLensExplorerRouterDelegate;

@protocol SCLensExplorerRouting <NSObject, SCLensExplorerInteractiveTransitionCoordinator>
@property(readonly, nonatomic) _Bool isPresenting;
@property(nonatomic) __weak id <SCLensExplorerRouterDelegate> delegate;
- (void)presentInfoCardWithLensItem:(SCLensExplorerLensItem *)arg1;
- (void)presentDebugViewControllerForStoryId:(NSString *)arg1 debugHtml:(NSString *)arg2 lastStreamToken:(NSData *)arg3;
- (void)dismissLiveLensPreviewWithError:(NSError *)arg1;
- (void)updateLiveLensPreviewWithLens:(SCLens *)arg1;
- (void)presentLiveLensPreviewCameraWithLensItem:(SCLensExplorerLensItem *)arg1 lens:(SCLens *)arg2;
- (void)refreshSubscriptionSection;
- (void)presentCreatorViewControllerWithCreator:(SCLensExplorerLensItemCreator *)arg1 sourcePageType:(long long)arg2;
- (void)handleApplicationDidEnterBackground;
- (void)removeViewController;
- (void)dismissIfNeededAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)presentLensExplorerViewControllerFromViewController:(UIViewController *)arg1 configuration:(SCLensExplorerPresentationConfiguration *)arg2;
@end

