//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCContextV3SnapIdentity : NSObject <NSCopying>
{
    int _viewingContext;
    NSString *_clientId;
    NSString *_storySnapId;
    NSString *_storyId;
    NSString *_chatMessageId;
}

@property(readonly, nonatomic) int viewingContext; // @synthesize viewingContext=_viewingContext;
@property(readonly, copy, nonatomic) NSString *chatMessageId; // @synthesize chatMessageId=_chatMessageId;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(readonly, copy, nonatomic) NSString *storySnapId; // @synthesize storySnapId=_storySnapId;
@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClientId:(id)arg1 storySnapId:(id)arg2 storyId:(id)arg3 chatMessageId:(id)arg4 viewingContext:(int)arg5;
- (id)initWithSnapContextSnapIdentity:(id)arg1;
- (id)initWithContextData:(id)arg1;
@property(readonly, nonatomic) NSString *canonicalId;

@end

