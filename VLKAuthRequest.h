//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface VLKAuthRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *appAuthResponse; // @dynamic appAuthResponse;
@property(nonatomic) int authOperation; // @dynamic authOperation;
@property(nonatomic) _Bool hasAppAuthResponse; // @dynamic hasAppAuthResponse;
@property(nonatomic) _Bool hasAuthOperation; // @dynamic hasAuthOperation;
@property(nonatomic) _Bool hasMfichallenge; // @dynamic hasMfichallenge;
@property(copy, nonatomic) NSData *mfichallenge; // @dynamic mfichallenge;

@end

