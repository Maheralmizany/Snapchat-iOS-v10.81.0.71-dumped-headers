//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SIGButton, SIGThumbnail;

@interface SIGThumbnailReorderCell : UICollectionViewCell
{
    SIGThumbnail *_thumbnailView;
    SIGButton *_reorderXButton;
}

@property(readonly, nonatomic) SIGButton *reorderXButton; // @synthesize reorderXButton=_reorderXButton;
@property(readonly, nonatomic) SIGThumbnail *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
