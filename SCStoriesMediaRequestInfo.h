//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCRequest;

@interface SCStoriesMediaRequestInfo : NSObject
{
    _Bool _isEligibleForStreaming;
    SCRequest *_request;
}

@property(readonly, nonatomic) _Bool isEligibleForStreaming; // @synthesize isEligibleForStreaming=_isEligibleForStreaming;
@property(readonly, copy, nonatomic) SCRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 isEligibleForStreaming:(_Bool)arg2;

@end

