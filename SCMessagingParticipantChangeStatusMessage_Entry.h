//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMessagingUUID;

@interface SCMessagingParticipantChangeStatusMessage_Entry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMessagingUUID *affectedUser; // @dynamic affectedUser;
@property(nonatomic) int changeOrigin; // @dynamic changeOrigin;
@property(nonatomic) _Bool hasAffectedUser; // @dynamic hasAffectedUser;
@property(nonatomic) int statusChange; // @dynamic statusChange;

@end
