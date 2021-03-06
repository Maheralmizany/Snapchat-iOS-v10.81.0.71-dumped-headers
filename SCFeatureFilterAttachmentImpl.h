//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureFilterAttachment-Protocol.h"
#import "SCFilterAttachmentOperaControllerProtocol-Protocol.h"

@class NSString, SCExpandedButton, SCExperimentManager, SCFeatureReference, SCFilterAttachmentOperaController, SCPreviewConfiguration, SCPreviewView, SCSmartCarouselFilterArranger, SCUnlockableGeoFilterTracker, SCUserSession, SOJUUnlockablesAttachment;
@protocol SCPreviewFeatureParentViewControllerAccessing;

@interface SCFeatureFilterAttachmentImpl : SCFeature <SCFeatureFilterAttachment, SCFilterAttachmentOperaControllerProtocol>
{
    SCPreviewView *_previewView;
    SCUserSession *_userSession;
    SCFeatureReference *_swipeFilters;
    SCSmartCarouselFilterArranger *_filterArranger;
    SCExperimentManager *_experimentManager;
    SCPreviewConfiguration *_previewConfiguration;
    SCExpandedButton *_filterAttachmentButton;
    SOJUUnlockablesAttachment *_displayedAttachment;
    NSString *_filterId;
    SCFilterAttachmentOperaController *_operaController;
    SCUnlockableGeoFilterTracker *_geofilterTracker;
    id <SCPreviewFeatureParentViewControllerAccessing> _parentViewControllerDelegate;
}

@property(nonatomic) __weak id <SCPreviewFeatureParentViewControllerAccessing> parentViewControllerDelegate; // @synthesize parentViewControllerDelegate=_parentViewControllerDelegate;
- (void).cxx_destruct;
- (void)configureWithView:(id)arg1;
- (void)filterAttachmentOperaControllerDidDismiss:(id)arg1;
- (void)filterAttachmentOperaControllerDidOpen:(id)arg1;
- (id)_ctaStringForAttachment:(id)arg1;
- (void)_filterAttachmentButtonPressed;
- (struct CGRect)_buttonFrameForSwipeOffset:(double)arg1 buttonSize:(struct CGSize)arg2;
- (void)_updateButtonContentAndConstraints;
- (void)_setupFilterAttachmentButton;
- (void)setFilterAttachmentButtonHidden:(_Bool)arg1;
- (void)refreshFilterAttachmentState;
- (id)initWithUserSession:(id)arg1 swipeFilters:(id)arg2 filterArranger:(id)arg3 experimentManager:(id)arg4 previewConfiguration:(id)arg5;

@end

