//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPViperModuleOutput-Protocol.h"

@class NSArray, NSError, SPScenario, UIImage;
@protocol SPStickersPreviewsModuleInput;

@protocol SPStickersPreviewsModuleOutput <SPViperModuleOutput>
- (void)spStickersPreviewsModuleDidTapEnableTwoPersonTopSectionCloseButton:(id <SPStickersPreviewsModuleInput>)arg1;
- (void)spStickersPreviewsModuleDidTapEnableTwoPersonTopSectionButton:(id <SPStickersPreviewsModuleInput>)arg1;
- (void)spStickersPreviewModule:(id <SPStickersPreviewsModuleInput>)arg1 didObtainScenarios:(NSArray *)arg2 tags:(NSArray *)arg3;
- (void)spStickersPreviewModule:(id <SPStickersPreviewsModuleInput>)arg1 didSelectScenario:(SPScenario *)arg2 stickerImage:(UIImage *)arg3 index:(unsigned long long)arg4 cellCenter:(struct CGPoint)arg5;

@optional
- (void)spStickersPreviewModule:(id <SPStickersPreviewsModuleInput>)arg1 encounteredError:(NSError *)arg2;
@end

