//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCLensBitmojiUserInfo, SCLensFriendUserInfo;

@interface SCLensUserData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *birthdate; // @dynamic birthdate;
@property(retain, nonatomic) SCLensBitmojiUserInfo *bitmojiInfo; // @dynamic bitmojiInfo;
@property(copy, nonatomic) NSString *countrycode; // @dynamic countrycode;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(retain, nonatomic) SCLensFriendUserInfo *friendInfo; // @dynamic friendInfo;
@property(nonatomic) _Bool hasBitmojiInfo; // @dynamic hasBitmojiInfo;
@property(nonatomic) _Bool hasFriendInfo; // @dynamic hasFriendInfo;
@property(nonatomic) unsigned long long score; // @dynamic score;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;
@property(copy, nonatomic) NSString *username; // @dynamic username;
@property(nonatomic) int zodiac; // @dynamic zodiac;

@end

