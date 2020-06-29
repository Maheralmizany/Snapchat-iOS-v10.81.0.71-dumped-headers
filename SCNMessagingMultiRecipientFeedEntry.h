//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNMessagingMultiRecipientFeedEntryIdentifier;

@interface SCNMessagingMultiRecipientFeedEntry : NSObject
{
    SCNMessagingMultiRecipientFeedEntryIdentifier *_identifier;
    long long _sendingState;
    long long _lastUpdateTimestamp;
}

+ (id)MultiRecipientFeedEntryWithIdentifier:(id)arg1 sendingState:(long long)arg2 lastUpdateTimestamp:(long long)arg3;
@property(readonly, nonatomic) long long lastUpdateTimestamp; // @synthesize lastUpdateTimestamp=_lastUpdateTimestamp;
@property(readonly, nonatomic) long long sendingState; // @synthesize sendingState=_sendingState;
@property(readonly, nonatomic) SCNMessagingMultiRecipientFeedEntryIdentifier *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)arg1 sendingState:(long long)arg2 lastUpdateTimestamp:(long long)arg3;

@end

