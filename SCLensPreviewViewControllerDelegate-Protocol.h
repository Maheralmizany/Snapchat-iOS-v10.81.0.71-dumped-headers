//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SCLens, SCLensConfiguration, SCLensInPreviewViewController;

@protocol SCLensPreviewViewControllerDelegate
- (void)lensPreviewViewController:(SCLensInPreviewViewController *)arg1 updateLensAppliedImageWithLens:(SCLens *)arg2;
- (void)lensPreviewViewController:(SCLensInPreviewViewController *)arg1 showSpinner:(_Bool)arg2;
- (void)lensPreviewViewController:(SCLensInPreviewViewController *)arg1 didSelectLens:(SCLens *)arg2 configuration:(SCLensConfiguration *)arg3;
@end

