//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUMyVerifiedCollabStories-Protocol.h"

@class NSArray, NSString;

@interface SOJUMyVerifiedCollabStories : SCSojuMessage <SOJUMyVerifiedCollabStories>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithUsername:(id)arg1 userId:(id)arg2 displayName:(id)arg3 stories:(id)arg4 collabStories:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) NSArray *collabStories; // @dynamic collabStories;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *stories; // @dynamic stories;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userId; // @dynamic userId;
@property(readonly, nonatomic) NSString *username; // @dynamic username;

@end

