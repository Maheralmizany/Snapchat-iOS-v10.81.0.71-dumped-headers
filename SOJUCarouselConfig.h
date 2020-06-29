//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUCarouselConfig-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface SOJUCarouselConfig : SCSojuMessage <SOJUCarouselConfig>
{
}

+ (void)registerMessageFields:(id)arg1;
+ (_Bool)canInitFromProto;
- (id)initWithConfigurationId:(id)arg1 versionId:(id)arg2 clientCacheExpirationDateTime:(id)arg3 baseOverrides:(id)arg4 filterOverride:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) NSDictionary *baseOverrides; // @dynamic baseOverrides;
@property(readonly, nonatomic) NSNumber *clientCacheExpirationDateTime; // @dynamic clientCacheExpirationDateTime;
@property(readonly, nonatomic) NSString *configurationId; // @dynamic configurationId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *filterOverride; // @dynamic filterOverride;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *versionId; // @dynamic versionId;

@end

