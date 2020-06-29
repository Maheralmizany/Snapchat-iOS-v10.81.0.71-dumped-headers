//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIImage;
@protocol SCBloopsTarget, SCCanceling;

@protocol SCBloopsCategoriesProviding <NSObject>
@property(readonly) UIImage *selectedCategoriesIcon;
@property(readonly) UIImage *categoriesIcon;
@property(readonly) NSArray *categories;
- (id <SCCanceling>)fetchCategoriesWithBloopsTarget:(id <SCBloopsTarget>)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
@end
