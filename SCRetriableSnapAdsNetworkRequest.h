//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRetriableRequest-Protocol.h"

@class NSDictionary, NSString, SCSnapAdsNetworkRequest;

@interface SCRetriableSnapAdsNetworkRequest : NSObject <SCRetriableRequest>
{
    NSString *_key;
    NSDictionary *_cookies;
    long long _retroType;
    _Bool _useGzipRequestCompression;
    _Bool shouldPersist;
    unsigned long long retryCount;
    SCSnapAdsNetworkRequest *_request;
}

+ (id)changeNumOfAttemptsForTrack:(id)arg1;
@property(readonly, nonatomic) SCSnapAdsNetworkRequest *request; // @synthesize request=_request;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount;
@property(nonatomic) _Bool shouldPersist; // @synthesize shouldPersist;
- (void).cxx_destruct;
- (id)toPersistenceObject;
- (void)_incrementErrorAutomeasure:(id)arg1;
- (id)toSCRequest;
- (unsigned long long)_getServerConfigRetryCount:(long long)arg1;
- (_Bool)_persistenceSetting:(long long)arg1;
- (void)_logIncorrectConfigSettings:(id)arg1;
- (id)initWithSnapAdsNetworkRequest:(id)arg1 requestKey:(id)arg2 cookies:(id)arg3 useGzipRequestCompression:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

