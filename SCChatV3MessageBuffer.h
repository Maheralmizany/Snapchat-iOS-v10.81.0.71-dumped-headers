//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SCLazy;

@interface SCChatV3MessageBuffer : NSObject
{
    NSMutableArray *_messageBuffer;
    SCLazy *_graphene;
    SCLazy *_shakeToReporter;
}

- (void).cxx_destruct;
- (_Bool)needsToFillGaps;
- (id)processBufferForConversation:(id)arg1 knownSeqNums:(struct NSDictionary *)arg2;
- (id)enqueueMessage:(id)arg1 forConversation:(id)arg2 withGapHandler:(CDUnknownBlockType)arg3;
- (id)initWithGraphene:(id)arg1 shakeToReporter:(id)arg2;

@end

