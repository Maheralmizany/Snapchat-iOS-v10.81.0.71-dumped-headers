//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUFriend;

@protocol SOJUIdentityFriendActionResponse <SCSojuMessage>
@property(readonly, nonatomic) NSArray *suggestedPublishers;
@property(readonly, nonatomic) NSDictionary *extraFriendmojiReadOnlyDict;
@property(readonly, nonatomic) NSDictionary *extraFriendmojiMutableDict;
@property(readonly, nonatomic) NSNumber *showPrivacySettingPrompt;
@property(readonly, nonatomic) NSNumber *logged;
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) NSArray *friends;
@property(readonly, nonatomic) SOJUFriend *object;
@end

