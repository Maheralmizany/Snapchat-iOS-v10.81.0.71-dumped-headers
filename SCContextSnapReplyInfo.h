//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCCOREUUID;

@interface SCContextSnapReplyInfo : NSObject
{
    SCCOREUUID *_inviteId;
    SCCOREUUID *_storyId;
    NSString *_storyName;
}

@property(copy, nonatomic) NSString *storyName; // @synthesize storyName=_storyName;
@property(retain, nonatomic) SCCOREUUID *storyId; // @synthesize storyId=_storyId;
@property(retain, nonatomic) SCCOREUUID *inviteId; // @synthesize inviteId=_inviteId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *storyIdString;
@property(readonly, nonatomic) NSString *inviteIdString;
- (id)initWithInviteId:(id)arg1 storyId:(id)arg2 storyName:(id)arg3;

@end

