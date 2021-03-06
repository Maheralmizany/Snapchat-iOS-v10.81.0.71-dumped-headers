//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface SCGalleryEncryptedDatabasePendingLocationRequest : NSObject
{
    NSString *_snapId;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _resultHandler;
}

@property(readonly, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
- (void).cxx_destruct;
- (id)initWithSnapId:(id)arg1 synchronous:(_Bool)arg2 queue:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;

@end

