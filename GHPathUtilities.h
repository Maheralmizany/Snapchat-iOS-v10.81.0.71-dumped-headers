//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GHPathUtilities : NSObject
{
}

+ (double)calculateQuadraticSplineStepFromStartPoint:(struct CGPoint)arg1 toEndPoint:(struct CGPoint)arg2 withControlPoint:(struct CGPoint)arg3;
+ (double)calculateCubicSplineStepFromFromStartPoint:(struct CGPoint)arg1 toEndPoint:(struct CGPoint)arg2 withControlPoint1:(struct CGPoint)arg3 withControlPoint2:(struct CGPoint)arg4;
+ (double)cubicSplineLengthFromStartPoint:(struct CGPoint)arg1 toEndPoint:(struct CGPoint)arg2 withControlPoint1:(struct CGPoint)arg3 withControlPoint2:(struct CGPoint)arg4 andStep:(double)arg5;
+ (double)quadraticBezierLengthFromStartPoint:(struct CGPoint)arg1 toEndPoint:(struct CGPoint)arg2 withControlPoint:(struct CGPoint)arg3 andStep:(double)arg4;

@end
