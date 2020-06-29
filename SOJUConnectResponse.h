//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUConnectResponse-Protocol.h"

@class NSNumber, NSString, SOJUServer;

@interface SOJUConnectResponse : SCSojuMessage <SOJUConnectResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithType:(id)arg1 idValue:(id)arg2 appEngineTarget:(id)arg3 success:(id)arg4 failureReason:(id)arg5 alternativeServer:(id)arg6;

// Remaining properties
@property(readonly, nonatomic) SOJUServer *alternativeServer; // @dynamic alternativeServer;
@property(readonly, nonatomic) NSString *appEngineTarget; // @dynamic appEngineTarget;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *failureReason; // @dynamic failureReason;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) NSNumber *success; // @dynamic success;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *type; // @dynamic type;

@end
