//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacOperaSession-Protocol.h"

@class NSString, SCCognacOperaDataSource;
@protocol SCCognacCypressProxy;

@interface SCCognacOperaLocalStorageSession : NSObject <SCCognacOperaSession>
{
    SCCognacOperaDataSource *_dataSource;
    id <SCCognacCypressProxy> _cypressProxy;
}

+ (id)registeredEventsForOperaSession;
@property(retain, nonatomic) id <SCCognacCypressProxy> cypressProxy; // @synthesize cypressProxy=_cypressProxy;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (CDUnknownBlockType)_deleteDataHandler;
- (CDUnknownBlockType)_getDataHandler;
- (CDUnknownBlockType)_setDataHandler;
- (id)registeredCypressHandlerNameToHandler;
- (void)pauseSession;
- (void)endSession;
- (void)startSession;
- (void)resumeSession;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

