//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet;
@protocol SCPerforming;

@interface SCGroupLeaveStateTracker : NSObject
{
    id <SCPerforming> _performer;
    NSMutableSet *_currentlyLeavingGroupIds;
    NSMutableDictionary *_leftGroupVersionByGroupId;
    NSDictionary *_leftGroupVersionByGroupIdSnapshot_DEPRECATED;
}

@property(retain) NSDictionary *leftGroupVersionByGroupIdSnapshot_DEPRECATED; // @synthesize leftGroupVersionByGroupIdSnapshot_DEPRECATED=_leftGroupVersionByGroupIdSnapshot_DEPRECATED;
- (void).cxx_destruct;
- (void)_takeLeftGroupVersionByGroupIdSnapshot_DEPRECATED;
- (long long)leftGroupVersion:(id)arg1;
- (_Bool)isGroupLeftGroup:(id)arg1;
- (void)clearLeftGroupVersion:(id)arg1;
- (_Bool)isGroupInLeavingState:(id)arg1;
- (void)clearCurrentlyLeavingGroup:(id)arg1;
- (void)startLeavingGroup:(id)arg1;
- (void)clear;
- (id)initWithPerformer:(id)arg1;

@end

