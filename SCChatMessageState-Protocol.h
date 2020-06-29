//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString, SCChatMessageParticipantIdentifier;

@protocol SCChatMessageState
- (_Bool)isPreserved;
- (NSArray *)savedParticipants;
- (NSDictionary *)savedState;
- (_Bool)isSaved;
- (_Bool)isSavedByParticipant:(SCChatMessageParticipantIdentifier *)arg1;
- (NSDictionary *)releaseState;
- (_Bool)isReleased;
- (_Bool)isReleasedBy:(NSString *)arg1;
- (NSString *)consistentId;

@optional
- (_Bool)shouldBeAddedAgainGivenClearedDictionary:(NSDictionary *)arg1;
@end

