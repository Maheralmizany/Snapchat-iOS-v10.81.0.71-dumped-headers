//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class LaunchCognac, NSString, SnapContextComposerContent, SnapContextPlaceholderCards;

@interface SnapContextCTAData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int actionOneOfCase; // @dynamic actionOneOfCase;
@property(copy, nonatomic) NSString *attachmentURL; // @dynamic attachmentURL;
@property(copy, nonatomic) NSString *businessProfileId; // @dynamic businessProfileId;
@property(retain, nonatomic) SnapContextComposerContent *content; // @dynamic content;
@property(copy, nonatomic) NSString *contentsSummary; // @dynamic contentsSummary;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasPlaceholderCards; // @dynamic hasPlaceholderCards;
@property(retain, nonatomic) LaunchCognac *launchCognac; // @dynamic launchCognac;
@property(retain, nonatomic) SnapContextPlaceholderCards *placeholderCards; // @dynamic placeholderCards;
@property(nonatomic) int swipeUpAction; // @dynamic swipeUpAction;
@property(copy, nonatomic) NSString *userDisplayName; // @dynamic userDisplayName;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end
