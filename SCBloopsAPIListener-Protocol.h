//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SCBloopsAPI;

@protocol SCBloopsAPIListener <NSObject>

@optional
- (void)bloopsAPIDidChangePersonsSource:(id <SCBloopsAPI>)arg1;
- (void)bloopsAPIDidResetPersonsSource:(id <SCBloopsAPI>)arg1;
- (void)bloopsAPIDidSaveMainPerson:(id <SCBloopsAPI>)arg1;
- (void)bloopsAPI:(id <SCBloopsAPI>)arg1 didChangeBloopsConfigUrlPath:(NSString *)arg2;
- (void)bloopsAPI:(id <SCBloopsAPI>)arg1 didChangeBloopsStickersResourcesStatus:(_Bool)arg2;
- (void)bloopsAPI:(id <SCBloopsAPI>)arg1 didChangeBloopsPreviewsResourcesStatus:(_Bool)arg2;
- (void)bloopsAPI:(id <SCBloopsAPI>)arg1 didChangeBloopsFeatureStatus:(_Bool)arg2;
@end
