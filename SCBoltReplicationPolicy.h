//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCBoltAllProvidersReplicationPolicy, SCBoltBoltDefaultPolicy, SCBoltCountriesPolicy, SCBoltNoReplicationPolicy, SCBoltStringRegionsPolicy;

@interface SCBoltReplicationPolicy : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCBoltAllProvidersReplicationPolicy *allProvidersReplicationPolicy; // @dynamic allProvidersReplicationPolicy;
@property(retain, nonatomic) SCBoltBoltDefaultPolicy *boltDefaultPolicy; // @dynamic boltDefaultPolicy;
@property(retain, nonatomic) SCBoltCountriesPolicy *countriesPolicy; // @dynamic countriesPolicy;
@property(retain, nonatomic) SCBoltNoReplicationPolicy *noReplicationPolicy; // @dynamic noReplicationPolicy;
@property(readonly, nonatomic) int policyOptionsOneOfCase; // @dynamic policyOptionsOneOfCase;
@property(retain, nonatomic) SCBoltStringRegionsPolicy *stringRegionsPolicy; // @dynamic stringRegionsPolicy;

@end

