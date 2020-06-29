//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, SCLens, UIView;

@protocol SCLensScanCardActionProtocol <NSObject>
- (void)openLensExplorerFromView:(UIView *)arg1;
- (_Bool)redirectToCreatorPageEnabledForLens:(SCLens *)arg1;
- (NSAttributedString *)lensExplorerStyleUserNameWithLens:(SCLens *)arg1 redirectsToCreator:(_Bool)arg2;
- (void)showCreatorPageForLens:(SCLens *)arg1 fromView:(UIView *)arg2 dismissBlock:(void (^)(void))arg3;
- (void)blockLensCreatorForLens:(SCLens *)arg1;
- (void)removeLens:(SCLens *)arg1;
@end

