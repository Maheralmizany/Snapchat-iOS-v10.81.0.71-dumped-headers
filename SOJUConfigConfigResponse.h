//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUConfigConfigResponse-Protocol.h"

@class NSDictionary, NSString;

@interface SOJUConfigConfigResponse : SCSojuMessage <SOJUConfigConfigResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithStringConfigs:(id)arg1 floatConfigs:(id)arg2 longConfigs:(id)arg3 booleanConfigs:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) NSDictionary *booleanConfigs; // @dynamic booleanConfigs;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *floatConfigs; // @dynamic floatConfigs;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *longConfigs; // @dynamic longConfigs;
@property(readonly, nonatomic) NSDictionary *stringConfigs; // @dynamic stringConfigs;
@property(readonly) Class superclass;

@end

