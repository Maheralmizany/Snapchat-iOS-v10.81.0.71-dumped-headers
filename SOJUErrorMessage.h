//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUErrorMessage-Protocol.h"

@class NSString;

@interface SOJUErrorMessage : SCSojuMessage <SOJUErrorMessage>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithType:(id)arg1 idValue:(id)arg2 appEngineTarget:(id)arg3 message:(id)arg4 errorId:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) NSString *appEngineTarget; // @dynamic appEngineTarget;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *errorId; // @dynamic errorId;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) NSString *message; // @dynamic message;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *type; // @dynamic type;

@end

