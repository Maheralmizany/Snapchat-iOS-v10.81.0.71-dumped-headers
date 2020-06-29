//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCChatUploadMediaMessageMetadata : NSObject <NSCopying>
{
    NSArray *_uploadMediaIds;
    long long _sendStatus;
    NSString *_clientResolutionId;
    NSString *_conversationId;
}

@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, copy, nonatomic) NSString *clientResolutionId; // @synthesize clientResolutionId=_clientResolutionId;
@property(readonly, nonatomic) long long sendStatus; // @synthesize sendStatus=_sendStatus;
@property(readonly, copy, nonatomic) NSArray *uploadMediaIds; // @synthesize uploadMediaIds=_uploadMediaIds;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUploadMediaIds:(id)arg1 sendStatus:(long long)arg2 clientResolutionId:(id)arg3 conversationId:(id)arg4;

@end

