//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCActionModel, SCSearchCollectionViewCell, UIView;

@protocol SCSearchCollectionViewCellDelegate <NSObject>
- (void)searchCollectionViewCell:(SCSearchCollectionViewCell *)arg1 didTriggerActionWithActionModel:(SCActionModel *)arg2 fromSourceView:(UIView *)arg3;

@optional
- (void)searchCollectionViewCellDidTapBottomAction:(SCSearchCollectionViewCell *)arg1;
- (void)searchCollectionViewCellDidLongPressCell:(SCSearchCollectionViewCell *)arg1;
- (void)searchCollectionViewCellDidTapCell:(SCSearchCollectionViewCell *)arg1;
@end

