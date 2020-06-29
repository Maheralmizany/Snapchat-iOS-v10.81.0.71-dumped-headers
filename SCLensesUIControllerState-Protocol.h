//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSString, SCLens, SCLensLaunchData;
@protocol SCLensExternalImageItemProtocol;

@protocol SCLensesUIControllerState <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *assetsToPrefetch;
@property(readonly, copy, nonatomic) id <SCLensExternalImageItemProtocol> externalImageItem;
@property(readonly, copy, nonatomic) SCLensLaunchData *lensLaunchData;
@property(readonly, copy, nonatomic) NSString *lensOptionId;
@property(readonly, copy, nonatomic) SCLens *lens;
@end
