//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCLensDataFetchingStrategyProtocol;

@protocol SCLensDataFetchingStrategyFactoryProtocol <NSObject>
@property(readonly, nonatomic) id <SCLensDataFetchingStrategyProtocol> lensOverlayStrategy;
@property(readonly, nonatomic) id <SCLensDataFetchingStrategyProtocol> lensAssetStrategy;
@property(readonly, nonatomic) id <SCLensDataFetchingStrategyProtocol> lensIconStrategy;
@property(readonly, nonatomic) id <SCLensDataFetchingStrategyProtocol> lensContentStrategy;
@property(readonly, nonatomic) id <SCLensDataFetchingStrategyProtocol> warmupStrategy;
@end

