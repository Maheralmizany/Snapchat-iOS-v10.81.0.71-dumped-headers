//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCognacCypressRequestOperation.h"

@class NSString, SCCognacSnapchatterService;

@interface SCCognacGetConversationParticipantsRequestOperation : SCCognacCypressRequestOperation
{
    _Bool _isGroupConversation;
    SCCognacSnapchatterService *_snapchatterService;
    NSString *_appId;
    NSString *_conversationId;
}

@property(nonatomic) _Bool isGroupConversation; // @synthesize isGroupConversation=_isGroupConversation;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) SCCognacSnapchatterService *snapchatterService; // @synthesize snapchatterService=_snapchatterService;
- (void).cxx_destruct;
- (_Bool)_validateState;
- (void)teardown;
- (void)handleError:(id)arg1;
- (void)run;

@end
