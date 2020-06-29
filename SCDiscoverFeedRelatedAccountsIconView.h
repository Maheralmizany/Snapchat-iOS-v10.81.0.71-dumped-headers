//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCNetworkImageView, SCSnapchatterAvatarContainerView;
@protocol SCImageDownloading;

@interface SCDiscoverFeedRelatedAccountsIconView : UIView <SCViewModelConfigurable>
{
    SCSnapchatterAvatarContainerView *_avatarView;
    SCNetworkImageView *_networkImageView;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
}

@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
