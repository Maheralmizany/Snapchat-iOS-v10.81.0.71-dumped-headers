//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPFaceAnimator;

@protocol SPFaceAnimatorDelegate <NSObject>

@optional
- (void)faceAnimatorDidResume:(SPFaceAnimator *)arg1;
- (void)faceAnimatorDidPause:(SPFaceAnimator *)arg1;
- (void)faceAnimatorDidReleaseMemory:(SPFaceAnimator *)arg1;
- (void)faceAnimatorDidFinishProcess:(SPFaceAnimator *)arg1;
- (void)faceAnimatorDidStartProcess:(SPFaceAnimator *)arg1;
- (void)faceAnimatorDidFinishPreparing:(SPFaceAnimator *)arg1;
- (void)faceAnimatorDidStartPreparing:(SPFaceAnimator *)arg1;
@end

