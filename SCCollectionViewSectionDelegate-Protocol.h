//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSIndexPath, NSIndexSet, NSString, UICollectionViewCell, UIViewController;
@protocol SCCollectionViewSection;

@protocol SCCollectionViewSectionDelegate <NSObject>
- (UIViewController *)presentingViewControllerForCollectionViewSection:(id <SCCollectionViewSection>)arg1;
- (void)collectionViewSection:(id <SCCollectionViewSection>)arg1 scrollToItemAtIndexInSection:(unsigned long long)arg2 scrollPosition:(unsigned long long)arg3 animated:(_Bool)arg4;
- (struct UIEdgeInsets)sectionInsetsForCollectionViewSection:(id <SCCollectionViewSection>)arg1;
- (UICollectionViewCell *)collectionViewSection:(id <SCCollectionViewSection>)arg1 cellForItemAtIndexInSection:(unsigned long long)arg2 error:(id *)arg3;
- (NSIndexPath *)collectionViewSection:(id <SCCollectionViewSection>)arg1 indexPathForCell:(UICollectionViewCell *)arg2;
- (UICollectionViewCell *)collectionViewSection:(id <SCCollectionViewSection>)arg1 dequeueReusableCellWithReuseIdentifier:(NSString *)arg2 forIndexInSection:(unsigned long long)arg3;
- (void)collectionViewSection:(id <SCCollectionViewSection>)arg1 didUpdateLayoutWithInteraction:(_Bool)arg2;
- (void)collectionViewResultSection:(id <SCCollectionViewSection>)arg1 reloadCellsAtIndexesIfNeeded:(NSIndexSet *)arg2;
- (void)collectionViewSectionUpdateIfNeeded:(id <SCCollectionViewSection>)arg1;
- (void)collectionViewSection:(id <SCCollectionViewSection>)arg1 supplementaryViewModelsUpdated:(NSDictionary *)arg2;
@end

