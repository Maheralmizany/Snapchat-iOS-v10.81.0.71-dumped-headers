//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCReplyParameters;
@protocol SCFeatureLensInfoButtonDelegate, SCFeatureLensInfoButtonPositioningDelegate;

@protocol SCFeatureLensInfoButton <NSObject>
@property(nonatomic) __weak id <SCFeatureLensInfoButtonPositioningDelegate> positioningDelegate;
@property(nonatomic) __weak id <SCFeatureLensInfoButtonDelegate> delegate;
- (void)updateState;
- (void)setReplyParameters:(SCReplyParameters *)arg1;
- (_Bool)pointInsideLensInfoButton:(struct CGPoint)arg1;
@end

