//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCLSIUtilityLensStatePresenter, UIImage;

@protocol SCLSIUtilityLensStatePresenterDelegate <NSObject>
- (void)utilityLensStatePresenter:(SCLSIUtilityLensStatePresenter *)arg1 requestedToScanImage:(UIImage *)arg2;
- (void)utilityLensStatePresenter:(SCLSIUtilityLensStatePresenter *)arg1 requestedToPreviewResultsForContext:(NSString *)arg2;
- (void)utilityLensStatePresenter:(SCLSIUtilityLensStatePresenter *)arg1 requestedToShowResultsForContext:(NSString *)arg2;
- (void)utilityLensStatePresenter:(SCLSIUtilityLensStatePresenter *)arg1 stopScanningForContext:(NSString *)arg2;
- (void)utilityLensStatePresenter:(SCLSIUtilityLensStatePresenter *)arg1 startScanningForContext:(NSString *)arg2;
@end

