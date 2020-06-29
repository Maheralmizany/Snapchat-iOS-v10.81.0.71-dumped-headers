//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PendingNetworkRequest;
@protocol SCSnapAdsNetworkAdapter;

@interface SCSnapAdsSerializingNetworkManager : NSObject
{
    id <SCSnapAdsNetworkAdapter> _networkAdapter;
    NSMutableArray *_pendingRequests;
    PendingNetworkRequest *_activeRequest;
}

@property(retain, nonatomic) PendingNetworkRequest *activeRequest; // @synthesize activeRequest=_activeRequest;
@property(retain, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) id <SCSnapAdsNetworkAdapter> networkAdapter; // @synthesize networkAdapter=_networkAdapter;
- (void).cxx_destruct;
- (void)emitNextRequest;
- (void)onUserLogout;
- (void)submit:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initWithNetworkAdapter:(id)arg1;

@end
