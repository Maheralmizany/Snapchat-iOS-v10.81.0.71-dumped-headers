//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextAwareThrottleRequest-Protocol.h"

@class NSString;

@interface SCContextAwareAppStartupThrottleRequest : NSObject <SCContextAwareThrottleRequest>
{
    NSString *_requestID;
    _Bool _isHotStartupRequest;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)requestID;
- (_Bool)shouldThrottle:(long long)arg1;
- (id)initWithHotStartupRequest:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
