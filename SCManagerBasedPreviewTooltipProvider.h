//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPreviewTooltipProvider-Protocol.h"

@class NSString, SCFeatureSettingsService, SCUserSession;

@interface SCManagerBasedPreviewTooltipProvider : NSObject <SCPreviewTooltipProvider>
{
    SCUserSession *_userSession;
    SCFeatureSettingsService *_featureSettingsService;
}

- (void).cxx_destruct;
- (_Bool)_shouldDisplayHelpLabelWithSwipeHelp;
- (_Bool)_shouldDisplayHelpLabelWithCaptionHelp;
- (double)initialTransformScale;
- (double)initialAlpha;
- (id)accessibilityIdentifier;
- (id)labelText;
- (_Bool)shouldDisplayAutoCreativeFilterTooltip;
- (double)helpLabelCornerRadius;
- (struct CGSize)helpLabelFrameSize;
- (_Bool)shouldDisplayHelpLabel;
- (_Bool)shouldDisplayAnimatedTooltip;
- (void)setDisplayedBounceTeachingTooltip;
- (_Bool)shouldDisplayBounceTeachingTooltip;
- (void)setDisplayedVenueStickerStyleTooltip;
- (void)setDisplayedVenueStickerTooltip;
- (void)setDisplayedGiphyStickerTooltip;
- (_Bool)shouldDisplayVenueStickerStyleTooltip;
- (_Bool)shouldDisplayVenueStickerTooltip;
- (_Bool)shouldDisplayGiphyStickerTooltip;
- (void)setDisplayedCropToolTooltip;
- (_Bool)shouldDisplayCropToolTooltip;
- (void)setDisplayedAnimatedTooltip;
- (void)setDisplayedTrackingCaptionTooltip;
- (_Bool)shouldDisplayTrackingCaptionTooltip;
- (_Bool)shouldDisplayCaptionHelp;
- (void)setDisplayedGroupInviteStickerTooltipInPreview;
- (_Bool)shouldDisplayGroupInviteStickerTooltipInPreview;
- (void)setDisplayedUnlockableStickerTooltip;
- (_Bool)shouldDisplayUnlockableStickerTooltip;
- (_Bool)shouldDisplayUnlockedStickerPackagesTooltip;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

