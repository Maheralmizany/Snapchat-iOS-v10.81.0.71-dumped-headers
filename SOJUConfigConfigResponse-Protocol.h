//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSDictionary;

@protocol SOJUConfigConfigResponse <SCSojuMessage>
@property(readonly, nonatomic) NSDictionary *booleanConfigs;
@property(readonly, nonatomic) NSDictionary *longConfigs;
@property(readonly, nonatomic) NSDictionary *floatConfigs;
@property(readonly, nonatomic) NSDictionary *stringConfigs;
@end
