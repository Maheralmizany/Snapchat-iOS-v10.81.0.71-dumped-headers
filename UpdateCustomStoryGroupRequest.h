//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCSCORERequestMetadata, SCSCOREUUID;

@interface UpdateCustomStoryGroupRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *addedMembersArray; // @dynamic addedMembersArray;
@property(readonly, nonatomic) unsigned long long addedMembersArray_Count; // @dynamic addedMembersArray_Count;
@property(readonly, nonatomic) int autoSaveToMemoriesOneOfCase; // @dynamic autoSaveToMemoriesOneOfCase;
@property(nonatomic) _Bool disableAutoSaveToMemories; // @dynamic disableAutoSaveToMemories;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) _Bool enableAutoSaveToMemories; // @dynamic enableAutoSaveToMemories;
@property(retain, nonatomic) SCSCOREUUID *groupId; // @dynamic groupId;
@property(nonatomic) unsigned long long groupVersion; // @dynamic groupVersion;
@property(nonatomic) _Bool hasGroupId; // @dynamic hasGroupId;
@property(nonatomic) _Bool hasRequestMetadata; // @dynamic hasRequestMetadata;
@property(retain, nonatomic) NSMutableArray *modifiedMembersArray; // @dynamic modifiedMembersArray;
@property(readonly, nonatomic) unsigned long long modifiedMembersArray_Count; // @dynamic modifiedMembersArray_Count;
@property(retain, nonatomic) NSMutableArray *removedMembersArray; // @dynamic removedMembersArray;
@property(readonly, nonatomic) unsigned long long removedMembersArray_Count; // @dynamic removedMembersArray_Count;
@property(retain, nonatomic) SCSCORERequestMetadata *requestMetadata; // @dynamic requestMetadata;

@end
