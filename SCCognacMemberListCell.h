//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SIGRecipientCollectionViewCell.h"

#import "SCViewModelConfigurable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCActionModel, UIButton;
@protocol SCCognacMemberListCellDelegate, SCImageDownloading;

@interface SCCognacMemberListCell : SIGRecipientCollectionViewCell <SCViewModelConfigurable, UIGestureRecognizerDelegate>
{
    SCActionModel *_tapActionModel;
    UIButton *_actionButton;
    _Bool _hasBeenInvited;
    unsigned long long _state;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
    id <SCCognacMemberListCellDelegate> _delegate;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(nonatomic) __weak id <SCCognacMemberListCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_didTapButton;
- (_Bool)memberCellCanInvite;
- (void)layoutSubviews;
- (void)_updateViewModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

