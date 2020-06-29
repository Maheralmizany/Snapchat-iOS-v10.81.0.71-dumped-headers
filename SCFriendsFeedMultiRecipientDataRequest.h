//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface SCFriendsFeedMultiRecipientDataRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    long long _update_type;
    NSDate *_update_timestamp;
    NSString *_update_feedItemId;
    NSString *_update_messageId;
}

+ (id)updateWithType:(long long)arg1 timestamp:(id)arg2 feedItemId:(id)arg3 messageId:(id)arg4;
+ (id)clear;
- (void).cxx_destruct;
- (void)matchUpdate:(CDUnknownBlockType)arg1 clear:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

