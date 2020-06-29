//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSHTTPURLResponse;
@protocol SCStreamingRequestLoader;

@protocol SCStreamingLoadingRequestResolver <NSObject>
- (void)requestLoaderDidFinishLoading:(id <SCStreamingRequestLoader>)arg1 withError:(NSError *)arg2;
- (void)requestLoader:(id <SCStreamingRequestLoader>)arg1 didReceiveData:(NSData *)arg2;
- (void)requestLoader:(id <SCStreamingRequestLoader>)arg1 didReceiveResponse:(NSHTTPURLResponse *)arg2;
@end

