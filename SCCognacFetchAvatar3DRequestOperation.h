//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCognacCypressRequestOperation.h"

@class SCCognacAvatarService, SCCognacFetchAvatar3DRequestBody;

@interface SCCognacFetchAvatar3DRequestOperation : SCCognacCypressRequestOperation
{
    SCCognacFetchAvatar3DRequestBody *_requestBody;
    _Bool _obfuscatedIdentity;
    SCCognacAvatarService *_avatarService;
}

@property(nonatomic) _Bool obfuscatedIdentity; // @synthesize obfuscatedIdentity=_obfuscatedIdentity;
@property(retain, nonatomic) SCCognacAvatarService *avatarService; // @synthesize avatarService=_avatarService;
- (void).cxx_destruct;
- (_Bool)_validateState;
- (void)teardown;
- (void)run;

@end

