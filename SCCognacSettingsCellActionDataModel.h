//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCCognacContentUpdateInfo;

@interface SCCognacSettingsCellActionDataModel : NSObject <NSCopying>
{
    _Bool _isAppLoaded;
    _Bool _isGroupConversation;
    NSString *_appId;
    NSString *_buildId;
    NSString *_sessionId;
    NSString *_conversationId;
    NSString *_instanceId;
    SCCognacContentUpdateInfo *_contentUpdateInfo;
    unsigned long long _appType;
}

@property(readonly, nonatomic) _Bool isGroupConversation; // @synthesize isGroupConversation=_isGroupConversation;
@property(readonly, nonatomic) _Bool isAppLoaded; // @synthesize isAppLoaded=_isAppLoaded;
@property(readonly, nonatomic) unsigned long long appType; // @synthesize appType=_appType;
@property(readonly, copy, nonatomic) SCCognacContentUpdateInfo *contentUpdateInfo; // @synthesize contentUpdateInfo=_contentUpdateInfo;
@property(readonly, copy, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, copy, nonatomic) NSString *buildId; // @synthesize buildId=_buildId;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAppId:(id)arg1 buildId:(id)arg2 sessionId:(id)arg3 conversationId:(id)arg4 instanceId:(id)arg5 contentUpdateInfo:(id)arg6 appType:(unsigned long long)arg7 isAppLoaded:(_Bool)arg8 isGroupConversation:(_Bool)arg9;

@end

