//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCCTXPostSnapActions, SCContextV3SnapParams;

@interface SCContextV3PostSnapParams : NSObject <NSCopying>
{
    _Bool _isGroupConversation;
    SCCTXPostSnapActions *_postSnapActions;
    SCContextV3SnapParams *_snapParams;
    NSString *_contextSessionId;
    NSString *_conversationId;
}

@property(readonly, nonatomic) _Bool isGroupConversation; // @synthesize isGroupConversation=_isGroupConversation;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, copy, nonatomic) NSString *contextSessionId; // @synthesize contextSessionId=_contextSessionId;
@property(readonly, copy, nonatomic) SCContextV3SnapParams *snapParams; // @synthesize snapParams=_snapParams;
@property(readonly, copy, nonatomic) SCCTXPostSnapActions *postSnapActions; // @synthesize postSnapActions=_postSnapActions;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPostSnapActions:(id)arg1 snapParams:(id)arg2 contextSessionId:(id)arg3 conversationId:(id)arg4 isGroupConversation:(_Bool)arg5;

@end

