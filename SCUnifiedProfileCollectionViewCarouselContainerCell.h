//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCUnifiedProfileBaseCollectionViewCell.h"

#import "SCActionable-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, UICollectionView;
@protocol SCActionHandling;

@interface SCUnifiedProfileCollectionViewCarouselContainerCell : SCUnifiedProfileBaseCollectionViewCell <UICollectionViewDelegate, SCActionable>
{
    _Bool _listViewLayout;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    UICollectionView *_carouselCollectionView;
}

@property(readonly, nonatomic) UICollectionView *carouselCollectionView; // @synthesize carouselCollectionView=_carouselCollectionView;
- (void)setViewModel:(id)arg1;
- (id)viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 listViewLayout:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

