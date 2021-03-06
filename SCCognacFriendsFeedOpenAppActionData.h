//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCCognacAppDataModel;

@interface SCCognacFriendsFeedOpenAppActionData : NSObject <NSCopying>
{
    _Bool _isGroupConversation;
    NSString *_appInstanceId;
    NSString *_conversationId;
    NSString *_conversationName;
    SCCognacAppDataModel *_appDataModel;
}

@property(readonly, copy, nonatomic) SCCognacAppDataModel *appDataModel; // @synthesize appDataModel=_appDataModel;
@property(readonly, nonatomic) _Bool isGroupConversation; // @synthesize isGroupConversation=_isGroupConversation;
@property(readonly, copy, nonatomic) NSString *conversationName; // @synthesize conversationName=_conversationName;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, copy, nonatomic) NSString *appInstanceId; // @synthesize appInstanceId=_appInstanceId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAppInstanceId:(id)arg1 conversationId:(id)arg2 conversationName:(id)arg3 isGroupConversation:(_Bool)arg4 appDataModel:(id)arg5;

@end

