//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCBoltReplicationPolicy;

@interface SCBoltCreateFromReferencesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long cdnTtlSeconds; // @dynamic cdnTtlSeconds;
@property(retain, nonatomic) NSMutableArray *contentReferencesArray; // @dynamic contentReferencesArray;
@property(readonly, nonatomic) unsigned long long contentReferencesArray_Count; // @dynamic contentReferencesArray_Count;
@property(nonatomic) unsigned long long expirationTimeMillis; // @dynamic expirationTimeMillis;
@property(nonatomic) _Bool hasReplicationPolicy; // @dynamic hasReplicationPolicy;
@property(retain, nonatomic) SCBoltReplicationPolicy *replicationPolicy; // @dynamic replicationPolicy;
@property(nonatomic) _Bool runClaimPath; // @dynamic runClaimPath;

@end

