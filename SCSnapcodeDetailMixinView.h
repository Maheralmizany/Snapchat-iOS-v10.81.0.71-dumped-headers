//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapcodeEditControllerDelegate-Protocol.h"
#import "SCSnapcodeImageEditControllerDelegate-Protocol.h"
#import "SCSnapcodeShareViewDelegate-Protocol.h"

@class NSString, PHCachingImageManager, SCLoadingIndicatorView, SCPreviewTooltipBalloon, SCScannableInfo, SCSnapcodeImageContainerView, SCSnapcodeImageEditController, SCSnapcodeScreenshotView, SCSnapcodeShareView, SCSnapcodeView, SCUserSession, SCWebImageScraperClient, SVGRenderer, UIImage;
@protocol SCSnapcodeDetailMixinViewDelegate;

@interface SCSnapcodeDetailMixinView : NSObject <SCSnapcodeEditControllerDelegate, SCSnapcodeImageEditControllerDelegate, SCSnapcodeShareViewDelegate>
{
    SVGRenderer *_svgSnapcodeRenderer;
    struct CGAffineTransform _imageTransform;
    SCUserSession *_userSession;
    _Bool _profileSnapcodeInView;
    _Bool _allowImageEdit;
    id <SCSnapcodeDetailMixinViewDelegate> _navDelegate;
    SCSnapcodeImageContainerView *_snapcodeContainerView;
    SCSnapcodeShareView *_snapcodeShareView;
    SCPreviewTooltipBalloon *_imageEditTooltip;
    SCWebImageScraperClient *_imageScraperClient;
    SCSnapcodeScreenshotView *_snapcodeScreenshot;
    SCSnapcodeView *_profileSnapcodeView;
    NSString *_editPageViewName;
    SCScannableInfo *_editingScannable;
    NSString *_snapcodeBackgroundColor;
    UIImage *_chosenImage;
    PHCachingImageManager *_imageManager;
    SCLoadingIndicatorView *_imageLoadingIndicator;
    SCSnapcodeImageEditController *_imageEditController;
    NSString *_editPageTitle;
}

+ (id)_titleColor;
+ (id)previewTooltipBalloonWithText:(id)arg1;
@property(retain, nonatomic) NSString *editPageTitle; // @synthesize editPageTitle=_editPageTitle;
@property(retain, nonatomic) SCSnapcodeImageEditController *imageEditController; // @synthesize imageEditController=_imageEditController;
@property(retain, nonatomic) SCLoadingIndicatorView *imageLoadingIndicator; // @synthesize imageLoadingIndicator=_imageLoadingIndicator;
@property(nonatomic) _Bool allowImageEdit; // @synthesize allowImageEdit=_allowImageEdit;
@property(nonatomic) _Bool profileSnapcodeInView; // @synthesize profileSnapcodeInView=_profileSnapcodeInView;
@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) UIImage *chosenImage; // @synthesize chosenImage=_chosenImage;
@property(retain, nonatomic) NSString *snapcodeBackgroundColor; // @synthesize snapcodeBackgroundColor=_snapcodeBackgroundColor;
@property(retain, nonatomic) SCScannableInfo *editingScannable; // @synthesize editingScannable=_editingScannable;
@property(retain, nonatomic) NSString *editPageViewName; // @synthesize editPageViewName=_editPageViewName;
@property(retain, nonatomic) SCSnapcodeView *profileSnapcodeView; // @synthesize profileSnapcodeView=_profileSnapcodeView;
@property(retain, nonatomic) SCSnapcodeScreenshotView *snapcodeScreenshot; // @synthesize snapcodeScreenshot=_snapcodeScreenshot;
@property(retain, nonatomic) SCWebImageScraperClient *imageScraperClient; // @synthesize imageScraperClient=_imageScraperClient;
@property(retain, nonatomic) SCPreviewTooltipBalloon *imageEditTooltip; // @synthesize imageEditTooltip=_imageEditTooltip;
@property(retain, nonatomic) SCSnapcodeShareView *snapcodeShareView; // @synthesize snapcodeShareView=_snapcodeShareView;
@property(retain, nonatomic) SCSnapcodeImageContainerView *snapcodeContainerView; // @synthesize snapcodeContainerView=_snapcodeContainerView;
@property(nonatomic) __weak id <SCSnapcodeDetailMixinViewDelegate> navDelegate; // @synthesize navDelegate=_navDelegate;
- (void).cxx_destruct;
- (id)_createScanDeeplink;
- (void)_showAlert:(id)arg1 title:(id)arg2;
- (void)_showAlert:(id)arg1;
- (void)_showEmailSnapcodePackageConfirmDialog;
- (void)_showDeleteConfirmDialog;
- (void)_thisImage:(id)arg1 hasBeenSavedInPhotoAlbumWithError:(id)arg2 usingContextInfo:(void *)arg3;
- (void)_saveUserProfileSnapcodeToCameraRoll;
- (void)_saveSnapcodeToCameraRoll:(id)arg1;
- (void)snapcodeShareViewDidSaveCameraRoll:(id)arg1;
- (void)snapcodeShareViewDidAnalytics:(id)arg1;
- (void)snapcodeShareViewDidRemoveImage:(id)arg1;
- (void)snapcodeShareViewDidDelete:(id)arg1;
- (void)snapcodeShareViewDidClickEmail:(id)arg1;
- (void)snapcodeShareViewDidEdit:(id)arg1;
- (void)snapcodeImageEditControllerDidRemoveImage:(id)arg1;
- (void)snapcodeImageEditController:(id)arg1 didSaveImageScreenshot:(id)arg2 selectedImage:(id)arg3 imageTransform:(struct CGAffineTransform)arg4;
- (void)snapcodeEditControllerDidUpdateData:(id)arg1 scannableInfo:(id)arg2;
- (void)shareSnapcode;
- (void)updateScannableInfo:(id)arg1;
- (void)updateSnapcodeResultImageWithCompletion:(CDUnknownBlockType)arg1;
- (id)snapcodeNonEditViewScreenShot;
- (id)snapcodeEditViewScreenShot;
- (id)initWithEditPageViewName:(id)arg1 title:(id)arg2 scannableInfo:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

