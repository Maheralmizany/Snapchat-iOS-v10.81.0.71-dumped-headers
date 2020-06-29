//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SPScenario, UIImage;

@protocol SCBloopsModel <NSObject>
@property(readonly, nonatomic) NSArray *bloopFeatures;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) unsigned long long personsCount;
@property(readonly, nonatomic) SPScenario *scenario;
@property(readonly, nonatomic) unsigned long long bloopType;
@property(readonly, nonatomic) _Bool isCustomizedByUser;
@property(readonly, nonatomic) NSString *identifier;
@end
