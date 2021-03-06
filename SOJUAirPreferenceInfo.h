//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUAirPreferenceInfo-Protocol.h"

@class NSArray, NSString;

@interface SOJUAirPreferenceInfo : SCSojuMessage <SOJUAirPreferenceInfo>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithExperiment:(id)arg1 setting:(id)arg2 tweak:(id)arg3 serverSetting:(id)arg4 featureSetting:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *experiment; // @dynamic experiment;
@property(readonly, nonatomic) NSArray *featureSetting; // @dynamic featureSetting;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *serverSetting; // @dynamic serverSetting;
@property(readonly, nonatomic) NSArray *setting; // @dynamic setting;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *tweak; // @dynamic tweak;

@end

