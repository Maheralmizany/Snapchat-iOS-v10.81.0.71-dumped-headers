//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary;

@interface SCConversationVersion : NSObject <NSCopying, NSCoding>
{
    unsigned long long _subtype;
    NSDictionary *_oneOnOneConversation_chatSequenceNumbers;
    NSDictionary *_oneOnOneConversation_updateSequenceNumbers;
    NSDictionary *_groupConversation_knownChatSequenceNumbers;
}

+ (id)oneOnOneConversationWithChatSequenceNumbers:(id)arg1 updateSequenceNumbers:(id)arg2;
+ (id)groupConversationWithKnownChatSequenceNumbers:(id)arg1;
- (void).cxx_destruct;
- (void)matchOneOnOneConversation:(CDUnknownBlockType)arg1 groupConversation:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end

