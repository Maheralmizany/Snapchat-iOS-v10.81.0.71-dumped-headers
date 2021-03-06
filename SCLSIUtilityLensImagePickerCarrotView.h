//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface SCLSIUtilityLensImagePickerCarrotView : UIView
{
    CAShapeLayer *_carrotLayer;
}

- (void).cxx_destruct;
- (double)_originCircleBottomXPosMatchingSlope:(double)arg1 radius:(double)arg2;
- (struct CGPoint)_convertGlobalPoint:(struct CGPoint)arg1 toCircleWithCenter:(struct CGPoint)arg2;
- (double)_angleForPoint:(struct CGPoint)arg1;
- (struct CGPoint)_arcCenterForPathSize:(struct CGSize)arg1 arcOffset:(struct CGPoint)arg2 arcRadius:(double)arg3;
- (struct CGPoint)_pointArcOffsetForSize:(struct CGSize)arg1 arcRadius:(double)arg2;
- (id)_carrotPathWithSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

