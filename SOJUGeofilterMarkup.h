//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUGeofilterMarkup-Protocol.h"

@class NSNumber, NSString, SOJUGeofilterDisplayParameters, SOJUGeofilterLayoutParameters, SOJULocalDateTimeInterval, SOJUUnlockablesCompanionCreativeProperties;

@interface SOJUGeofilterMarkup : SCSojuMessage <SOJUGeofilterMarkup>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithRefreshRate:(id)arg1 type:(id)arg2 source:(id)arg3 layoutParameters:(id)arg4 displayParameters:(id)arg5 displayScheduleDeprecated:(id)arg6 companionCreativeProperties:(id)arg7;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SOJUUnlockablesCompanionCreativeProperties *companionCreativeProperties; // @dynamic companionCreativeProperties;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SOJUGeofilterDisplayParameters *displayParameters; // @dynamic displayParameters;
@property(readonly, nonatomic) SOJULocalDateTimeInterval *displayScheduleDeprecated; // @dynamic displayScheduleDeprecated;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SOJUGeofilterLayoutParameters *layoutParameters; // @dynamic layoutParameters;
@property(readonly, nonatomic) NSNumber *refreshRate; // @dynamic refreshRate;
@property(readonly, nonatomic) NSString *source; // @dynamic source;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *type; // @dynamic type;

@end

