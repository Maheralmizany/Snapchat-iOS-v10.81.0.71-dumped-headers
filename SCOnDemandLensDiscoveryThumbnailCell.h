//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCLensDiscoveryCellProtocol-Protocol.h"

@class NSString, SIGLoadingIndicatorView, UIImageView, UIView;

@interface SCOnDemandLensDiscoveryThumbnailCell : UICollectionViewCell <SCLensDiscoveryCellProtocol>
{
    UIImageView *_selectedIndicatorView;
    UIView *_contentContainer;
    SIGLoadingIndicatorView *_loadingIndicator;
    UIImageView *_thumbnailImageView;
    long long _state;
    NSString *_thumbnailImageUrlString;
}

@property(retain, nonatomic) NSString *thumbnailImageUrlString; // @synthesize thumbnailImageUrlString=_thumbnailImageUrlString;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)setIsSelected:(_Bool)arg1;
- (id)thumbnailImageView;
- (id)loadingIndicator;
- (id)selectedIndicatorView;
- (void)loadThumbnailImageWithUrlString:(id)arg1 geofilterSession:(id)arg2;
- (void)setLensDiscoveryCellInfo:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

