//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAAdWebViewLoadBase.h"

@interface SCAAdWebViewIosLoad : SCAAdWebViewLoadBase
{
}

- (void)setUnloadEventStartTimestampMillis:(long long)arg1;
- (void)setUnloadEventEndTimestampMillis:(long long)arg1;
- (void)setSecureConnectionStartTimestampMillis:(long long)arg1;
- (void)setResponseStartTimestampMillis:(long long)arg1;
- (void)setResponseEndTimestampMillis:(long long)arg1;
- (void)setRequestStartTimestampMillis:(long long)arg1;
- (void)setRedirectStartTimestampMillis:(long long)arg1;
- (void)setRedirectEndTimestampMillis:(long long)arg1;
- (void)setNavigationStartTimestampMillis:(long long)arg1;
- (void)setLoadEventStartTimestampMillis:(long long)arg1;
- (void)setLoadEventEndTimestampMillis:(long long)arg1;
- (void)setFetchStartTimestampMillis:(long long)arg1;
- (void)setDomainLookupStartTimestampMillis:(long long)arg1;
- (void)setDomainLookupEndTimestampMillis:(long long)arg1;
- (void)setDomLoadingTimestampMillis:(long long)arg1;
- (void)setDomInteractiveTimestampMillis:(long long)arg1;
- (void)setDomContentLoadedEventStartTimestampMillis:(long long)arg1;
- (void)setDomContentLoadedEventEndTimestampMillis:(long long)arg1;
- (void)setDomCompleteTimestampMillis:(long long)arg1;
- (void)setConnectStartTimestampMillis:(long long)arg1;
- (void)setConnectEndTimestampMillis:(long long)arg1;
- (long long)getEventQoS;
- (id)getEventName;

@end

