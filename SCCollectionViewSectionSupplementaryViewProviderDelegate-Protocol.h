//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UICollectionReusableView;
@protocol SCCollectionViewSectionSupplementaryViewProviding;

@protocol SCCollectionViewSectionSupplementaryViewProviderDelegate <NSObject>
- (UICollectionReusableView *)sectionSupplementaryViewProvider:(id <SCCollectionViewSectionSupplementaryViewProviding>)arg1 supplementaryViewOfElementKind:(NSString *)arg2 atIndexInSection:(unsigned long long)arg3;
- (UICollectionReusableView *)sectionSupplementaryViewProvider:(id <SCCollectionViewSectionSupplementaryViewProviding>)arg1 dequeueSupplementaryElementOfKind:(NSString *)arg2 withReuseIdentifier:(NSString *)arg3 atIndexInSection:(unsigned long long)arg4;
@end

