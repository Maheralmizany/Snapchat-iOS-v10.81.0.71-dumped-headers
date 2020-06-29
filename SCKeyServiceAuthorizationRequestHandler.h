//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface SCKeyServiceAuthorizationRequestHandler : NSObject
{
    NSString *_UUID;
    NSString *_passphrase;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _authorizationHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType authorizationHandler; // @synthesize authorizationHandler=_authorizationHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) NSString *passphrase; // @synthesize passphrase=_passphrase;
@property(readonly, copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (void)performWithResult:(_Bool)arg1 error:(id)arg2;
- (id)initWithUUID:(id)arg1 passphrase:(id)arg2 queue:(id)arg3 authorizationHandler:(CDUnknownBlockType)arg4;

@end

