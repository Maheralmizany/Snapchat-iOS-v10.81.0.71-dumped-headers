//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSNTFOptInResponse_ErrorReason;

@interface SCSNTFOptInResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSNTFOptInResponse_ErrorReason *errorReason; // @dynamic errorReason;
@property(nonatomic) _Bool hasErrorReason; // @dynamic hasErrorReason;
@property(nonatomic) int status; // @dynamic status;

@end

