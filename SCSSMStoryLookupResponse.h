//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCSCOREResponseStatus, SCSSMStoryCard, SCSSMStoryLookupResponseItem;

@interface SCSSMStoryLookupResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasResponseItem; // @dynamic hasResponseItem;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasStoryCard; // @dynamic hasStoryCard;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(retain, nonatomic) SCSSMStoryLookupResponseItem *responseItem; // @dynamic responseItem;
@property(retain, nonatomic) SCSCOREResponseStatus *status; // @dynamic status;
@property(retain, nonatomic) SCSSMStoryCard *storyCard; // @dynamic storyCard;

@end

