//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SCCognacGroup-Protocol.h"
#import "SCFilterableRecipient-Protocol.h"
#import "SCSortableRecipient-Protocol.h"

@class NSArray, NSAttributedString, NSDate, NSDictionary, NSString, SOJUIdentityMischiefMetadata, SOJUVideoChatParams, UIColor, UIFont;
@protocol SCChatGroup, SCChatGroupParticipant;

@protocol SCChatGroup <NSObject, SCFilterableRecipient, SCSortableRecipient, SCCognacGroup, NSCoding, NSCopying>
+ (id)localGroupWithGroupId:(NSString *)arg1 token:(NSString *)arg2 friends:(NSArray *)arg3 creationSource:(long long)arg4;
@property(readonly, nonatomic) _Bool isPartial;
@property(readonly, copy, nonatomic) NSDictionary *participantLastContent;
@property(readonly, nonatomic) _Bool isStoryMuted;
@property(readonly, nonatomic) _Bool temporary;
@property(readonly, copy, nonatomic) NSDictionary *blockedParticipantExceptions;
@property(readonly, copy, nonatomic) NSString *token;
@property(readonly, copy, nonatomic) NSString *mischiefCreationSource;
@property(readonly, nonatomic) _Bool isLocal;
@property(readonly, copy, nonatomic) NSDate *createMischiefTimestamp;
@property(readonly, copy, nonatomic) NSDate *lastInteractionTimestamp;
@property(readonly, copy, nonatomic) SOJUVideoChatParams *videoChatParams;
@property(readonly, nonatomic) _Bool mentionNotificationStatus;
@property(readonly, nonatomic) _Bool notificationStatus;
@property(readonly, copy, nonatomic) NSArray *orderedParticipants;
@property(readonly, copy, nonatomic) NSString *creatorId;
@property(readonly, copy, nonatomic) NSString *groupName;
@property(readonly, nonatomic) unsigned long long version;
@property(readonly, copy, nonatomic) NSString *mischiefMobId;
@property(readonly, copy, nonatomic) NSString *groupId;
- (id)copy;
- (NSAttributedString *)abbreviatedDisplayName:(long long)arg1;
- (NSArray *)lastGroupParticipantSenders;
- (NSDictionary *)participantLastContentWithoutExParticipants;
- (NSArray *)getOrderedBitmojiUsersWithSelfLast;
- (NSString *)defaultDisplayName;
- (NSArray *)orderedUsernames;
- (NSArray *)participantsWithoutSelf;
- (NSDictionary *)newBlockedParticipantExceptions;
- (_Bool)hasUnexemptBlockedParticipants;
- (_Bool)matchesQuery:(NSString *)arg1;
- (_Bool)matchesAllParticipantsIncludingSelf:(NSArray *)arg1;
- (_Bool)matchesAllParticipantsExcludingSelf:(NSArray *)arg1;
- (_Bool)containsParticipants:(NSArray *)arg1;
- (NSString *)usernameForUserId:(NSString *)arg1;
- (NSString *)userIdForUsername:(NSString *)arg1;
- (id <SCChatGroupParticipant>)exParticipantForUsername:(NSString *)arg1;
- (id <SCChatGroupParticipant>)exParticipantForUserId:(NSString *)arg1;
- (NSArray *)exParticipants;
- (id <SCChatGroupParticipant>)participantForUsername:(NSString *)arg1;
- (id <SCChatGroupParticipant>)participantForUserId:(NSString *)arg1;
- (NSArray *)participantsBeforeVersion:(unsigned long long)arg1;
- (UIColor *)colorForUserId:(NSString *)arg1;
- (id <SCChatGroup>)groupByUpdatingWithMetaData:(SOJUIdentityMischiefMetadata *)arg1 interactionTimestamp:(NSDate *)arg2;
- (NSString *)uniqueDisplayNameForUsername:(NSString *)arg1;
- (NSString *)formattedNameStringForBlockedParticipantsExceptions;
- (NSString *)formattedNameStringForDetailWithHeaderFont:(UIFont *)arg1 detailFont:(UIFont *)arg2 maxWidth:(double)arg3 maxHeight:(double)arg4;
- (NSString *)formattedNameStringForHeaderWithFont:(UIFont *)arg1 maxWidth:(double)arg2;
- (NSString *)getFormattedNameStringWithMaxWidth:(double)arg1 font:(UIFont *)arg2;
- (NSString *)getFormattedParticipantNamesStringWithMaxHeight:(double)arg1 constrainedToWidth:(double)arg2 font:(UIFont *)arg3;
- (_Bool)hasDisplay;
- (NSString *)display;
- (NSString *)name;
@end
