//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SSSessionToken : NSObject
{
    NSString *_sessionId;
    NSString *_chatSessionId;
    NSString *_searchSessionId;
}

@property(readonly, nonatomic) NSString *searchSessionId; // @synthesize searchSessionId=_searchSessionId;
@property(readonly, nonatomic) NSString *chatSessionId; // @synthesize chatSessionId=_chatSessionId;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)initWithSessionId:(id)arg1 chatSessionId:(id)arg2 searchSessionId:(id)arg3;

@end

