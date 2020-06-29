//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPreviewFeatureViewControllerPresenting-Protocol.h"

@class UIViewController;

@protocol SCFeatureAuxiliaryContentInPreview <SCPreviewFeatureViewControllerPresenting>
@property(readonly, nonatomic) long long promptFilterType;
- (void)handleMagicMomentUpdate;
- (_Bool)showNotificationTappedAlertForPreviewIfNeeded:(UIViewController *)arg1;
- (_Bool)areBothDepthsAvailable;
- (void)hideTooltip;
- (void)deactivate;
- (void)backUpNow;
- (void)awaitSecondaryDepthWithProgress:(void (^)(double))arg1 completion:(void (^)(NSError *))arg2;
- (void)prepareSecondaryDepthWithProgress:(void (^)(double))arg1 completion:(void (^)(NSError *))arg2;
- (void)loadContentWithCompletionHandler:(void (^)(NSError *))arg1;
@end

