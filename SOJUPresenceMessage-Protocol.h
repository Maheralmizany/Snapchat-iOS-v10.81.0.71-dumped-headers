//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SOJUConversationMessage-Protocol.h"

@class NSDictionary, NSNumber, SOJUHereAuth;

@protocol SOJUPresenceMessage <SOJUConversationMessage>
@property(readonly, nonatomic) NSNumber *sequenceNumber;
@property(readonly, nonatomic) NSDictionary *presencesMetadata;
@property(readonly, nonatomic) NSDictionary *extendedPresences;
@property(readonly, nonatomic) SOJUHereAuth *hereAuth;
@property(readonly, nonatomic) NSNumber *receivingVideo;
@property(readonly, nonatomic) NSNumber *supportsHere;
@property(readonly, nonatomic) NSDictionary *presences;
@end

