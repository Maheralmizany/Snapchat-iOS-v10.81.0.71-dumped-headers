//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNMessagingAppStoryInfo, SCNMessagingMyStoryInfo, SCNMessagingSnapProStoryInfo, SCNMessagingUUID;

@interface SCNMessagingStoryId : NSObject
{
    long long _storyType;
    SCNMessagingUUID *_storySpecificId;
    SCNMessagingMyStoryInfo *_myStoryInfo;
    SCNMessagingAppStoryInfo *_appStoryInfo;
    SCNMessagingSnapProStoryInfo *_snapProStoryInfo;
}

+ (id)StoryIdWithStoryType:(long long)arg1 storySpecificId:(id)arg2 myStoryInfo:(id)arg3 appStoryInfo:(id)arg4 snapProStoryInfo:(id)arg5;
@property(readonly, nonatomic) SCNMessagingSnapProStoryInfo *snapProStoryInfo; // @synthesize snapProStoryInfo=_snapProStoryInfo;
@property(readonly, nonatomic) SCNMessagingAppStoryInfo *appStoryInfo; // @synthesize appStoryInfo=_appStoryInfo;
@property(readonly, nonatomic) SCNMessagingMyStoryInfo *myStoryInfo; // @synthesize myStoryInfo=_myStoryInfo;
@property(readonly, nonatomic) SCNMessagingUUID *storySpecificId; // @synthesize storySpecificId=_storySpecificId;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStoryType:(long long)arg1 storySpecificId:(id)arg2 myStoryInfo:(id)arg3 appStoryInfo:(id)arg4 snapProStoryInfo:(id)arg5;

@end

