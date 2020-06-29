//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCActionable-Protocol.h"

@class NSString, SCActionModel, SCShapeView, UIImageView, UILabel;
@protocol SCActionHandling;

@interface SCSendToCTAWithIconCollectionViewCell : SCSearchCollectionViewCell <SCActionable>
{
    SCShapeView *_backgroundShapeView;
    UIImageView *_iconView;
    UILabel *_textLabel;
    SCActionModel *_actionModel;
    UILabel *_badge;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (id)viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)handleTapAction;
- (_Bool)hasOverridedTapAction;
- (void)_createBadge;
- (void)_setBadgeViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

