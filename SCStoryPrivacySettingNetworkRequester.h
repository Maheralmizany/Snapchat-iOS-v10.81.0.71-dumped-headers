//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCStoryPrivacySettingNetworkRequester : NSObject
{
    SCLazy *_sessionRequestManager;
}

- (void).cxx_destruct;
- (void)updateStoryPrivacy:(long long)arg1 blockedUserIds:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithSessionRequestManager:(id)arg1;

@end

