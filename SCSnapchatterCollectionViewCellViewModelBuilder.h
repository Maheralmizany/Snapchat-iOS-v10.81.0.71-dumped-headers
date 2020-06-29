//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCActionModel, SCSnapchatterBackgroundShadowViewModel, SCSnapchatterViewModel, UIColor;

@interface SCSnapchatterCollectionViewCellViewModelBuilder : NSObject
{
    SCSnapchatterViewModel *_snapchatterViewModel;
    SCActionModel *_longPressActionModel;
    SCActionModel *_singleTapActionModel;
    SCSnapchatterBackgroundShadowViewModel *_backgroundShadowViewModel;
    struct CGSize _preferredSize;
    UIColor *_backgroundColor;
    double _cornerRadius;
    UIColor *_borderColor;
    double _borderWidth;
    unsigned long long _externalEdges;
}

+ (id)snapchatterCollectionViewCellViewModelFromExistingSnapchatterCollectionViewCellViewModel:(id)arg1;
+ (id)snapchatterCollectionViewCellViewModel;
- (void).cxx_destruct;
- (id)withExternalEdges:(unsigned long long)arg1;
- (id)withBorderWidth:(double)arg1;
- (id)withBorderColor:(id)arg1;
- (id)withCornerRadius:(double)arg1;
- (id)withBackgroundColor:(id)arg1;
- (id)withPreferredSize:(struct CGSize)arg1;
- (id)withBackgroundShadowViewModel:(id)arg1;
- (id)withSingleTapActionModel:(id)arg1;
- (id)withLongPressActionModel:(id)arg1;
- (id)withSnapchatterViewModel:(id)arg1;
- (id)build;

@end

