//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, SCOperaViewModel;
@protocol SCOperaScrollViewDataProviding, SCOperaScrollViewLayoutManagerDelegate;

@protocol SCOperaScrollViewLayoutManaging <NSObject>
@property(nonatomic) __weak id <SCOperaScrollViewDataProviding> scrollViewDataProvider;
@property(nonatomic) __weak id <SCOperaScrollViewLayoutManagerDelegate> delegate;
- (void)layoutPageViewControllers:(NSDictionary *)arg1 viewModels:(NSDictionary *)arg2 dimensionToLayoutDirectionMap:(NSDictionary *)arg3 currentViewModel:(SCOperaViewModel *)arg4;
@end

