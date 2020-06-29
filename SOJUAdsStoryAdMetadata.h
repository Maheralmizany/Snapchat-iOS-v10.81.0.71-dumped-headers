//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUAdsStoryAdMetadata-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUAdsStoryAdInsertionConfig, SOJUAdsStoryAdRequestConfig;

@interface SOJUAdsStoryAdMetadata : SCSojuMessage <SOJUAdsStoryAdMetadata>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithAdInsertionConfig:(id)arg1 adRequestConfig:(id)arg2 adUnitId:(id)arg3 targetingParameters:(id)arg4 adCannotFollowSnapIds:(id)arg5 enableFullView:(id)arg6;

// Remaining properties
@property(readonly, nonatomic) NSArray *adCannotFollowSnapIds; // @dynamic adCannotFollowSnapIds;
@property(readonly, nonatomic) SOJUAdsStoryAdInsertionConfig *adInsertionConfig; // @dynamic adInsertionConfig;
@property(readonly, nonatomic) SOJUAdsStoryAdRequestConfig *adRequestConfig; // @dynamic adRequestConfig;
@property(readonly, nonatomic) NSString *adUnitId; // @dynamic adUnitId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *enableFullView; // @dynamic enableFullView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSDictionary *targetingParameters; // @dynamic targetingParameters;

@end

