//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCPBSnaptokenSnapAccessTokenPrefetchHint;

@interface SCPBSnaptokenSnapAccessTokensResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPrefetchHint; // @dynamic hasPrefetchHint;
@property(retain, nonatomic) SCPBSnaptokenSnapAccessTokenPrefetchHint *prefetchHint; // @dynamic prefetchHint;
@property(retain, nonatomic) NSMutableArray *snapAccessTokensArray; // @dynamic snapAccessTokensArray;
@property(readonly, nonatomic) unsigned long long snapAccessTokensArray_Count; // @dynamic snapAccessTokensArray_Count;
@property(nonatomic) int status; // @dynamic status;

@end

