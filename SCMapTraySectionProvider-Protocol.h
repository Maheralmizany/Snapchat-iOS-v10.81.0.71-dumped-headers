//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCDataHandler, UICollectionViewCell;
@protocol SCMapTraySectionProviderDelegate;

@protocol SCMapTraySectionProvider <NSObject>
@property(readonly, nonatomic) SCDataHandler *dataHandler;
@property(nonatomic) __weak id <SCMapTraySectionProviderDelegate> delegate;
- (_Bool)shouldStayVisibleDuringMapInteraction;
- (_Bool)usesCellHighlighting;
- (double)heightForCellAtRow:(unsigned long long)arg1 type:(unsigned long long)arg2 width:(double)arg3;
- (void)configureCell:(UICollectionViewCell *)arg1 type:(unsigned long long)arg2 atRow:(unsigned long long)arg3;
- (Class)cellClassForType:(unsigned long long)arg1;
- (unsigned long long)rowCount;
- (void)handleDataChanged;
- (void)setupWithContainerWidth:(double)arg1;

@optional
- (_Bool)usesCustomHighlightEffect;
- (NSString *)highlightIdentifierForRow:(unsigned long long)arg1;
- (_Bool)dataChangesShouldSkipSectionReload;
- (void)suspend;
- (_Bool)controlsViewportCameraForHighlightedItems;
- (void)handleHighlightedCellAtRow:(unsigned long long)arg1;
- (NSString *)headerText;
@end

