//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPExternalModelsConsumer-Protocol.h"

@class NSArray, NSString, UIImage;

@protocol SPBeautificationService <SPExternalModelsConsumer>
- (void)beautifyImage:(UIImage *)arg1 landmarks:(NSArray *)arg2 lensId:(NSString *)arg3 completion:(void (^)(F2FBeautificationTarget *, NSString *, NSError *))arg4;
- (void)releaseModels;
- (void)initilizeModels;
- (void)obtainResourcesPaths;
@end

