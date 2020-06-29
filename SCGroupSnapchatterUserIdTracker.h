//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol SCPerforming;

@interface SCGroupSnapchatterUserIdTracker : NSObject
{
    id <SCPerforming> _performer;
    NSMutableDictionary *_userIdToGroupIds;
}

- (void).cxx_destruct;
- (void)clear;
- (void)updateUserIdToGroupIdsWithNewGroup:(id)arg1 oldGroup:(id)arg2;
- (void)updateUserIdToGroupIdsWithGroups:(id)arg1;
- (id)userIdToGroupIds;
- (id)initWithPerformer:(id)arg1;

@end

