//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNMessagingServerConversationIdentifier, SCNMessagingUUID;

@interface SCNMessagingConversationMetadata : NSObject
{
    SCNMessagingUUID *_clientId;
    SCNMessagingServerConversationIdentifier *_serverId;
    long long _version;
}

+ (id)ConversationMetadataWithClientId:(id)arg1 serverId:(id)arg2 version:(long long)arg3;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) SCNMessagingServerConversationIdentifier *serverId; // @synthesize serverId=_serverId;
@property(readonly, nonatomic) SCNMessagingUUID *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithClientId:(id)arg1 serverId:(id)arg2 version:(long long)arg3;

@end

