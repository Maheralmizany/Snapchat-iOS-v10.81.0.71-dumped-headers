//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, PHAsset;

@interface SCMemoriesSegmentedPHAssetDataModel : NSObject <NSCopying>
{
    PHAsset *_phAsset;
    NSArray *_urls;
    long long _orientation;
}

@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(readonly, copy, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPhAsset:(id)arg1 urls:(id)arg2 orientation:(long long)arg3;

@end

