//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol SCFeatureTimerModeDelegate;

@protocol SCFeatureTimerMode
@property(readonly, nonatomic) _Bool isCountingDown;
@property(nonatomic) _Bool gestureForwardingEnabled;
@property(nonatomic) _Bool enabled;
@property(nonatomic) __weak id <SCFeatureTimerModeDelegate> delegate;
- (void)abortCountingDown;
- (void)toggleCountingDown;
@end

