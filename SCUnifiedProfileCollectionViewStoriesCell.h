//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCUnifiedProfileListCollectionViewCell.h"

#import "SCActionHandlingDelegate-Protocol.h"
#import "SCUnifiedProfileCollectionViewStoriesCellProtocol-Protocol.h"

@class NSString, SCSnapchatterAvatarThumbnailView, SCUnifiedProfileCollectionViewStoriesCellButtonsView, UIImageView, UITapGestureRecognizer;
@protocol SCActionHandling, SCSectionKitCollectionViewViewMoreActionableDelegate;

@interface SCUnifiedProfileCollectionViewStoriesCell : SCUnifiedProfileListCollectionViewCell <SCActionHandlingDelegate, SCUnifiedProfileCollectionViewStoriesCellProtocol>
{
    SCSnapchatterAvatarThumbnailView *_avatarView;
    SCUnifiedProfileCollectionViewStoriesCellButtonsView *_buttonsView;
    UIImageView *_emptyStateCameraIconView;
    UITapGestureRecognizer *_expandTapGesture;
    id _viewModel;
    id <SCActionHandling> _actionHandler;
    id <SCSectionKitCollectionViewViewMoreActionableDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSectionKitCollectionViewViewMoreActionableDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)buttonsView;
- (void)_handleTap;
- (id)expandTapGesture;
- (_Bool)handleActionWithActionModel:(id)arg1 fromSourceView:(id)arg2;
- (void)setImageDownloader:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

