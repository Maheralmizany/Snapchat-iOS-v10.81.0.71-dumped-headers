//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUAdTargeting-Protocol.h"

@class NSDictionary, NSString;

@interface SOJUAdTargeting : SCSojuMessage <SOJUAdTargeting>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithContentStreamId:(id)arg1 sessionTargetingString:(id)arg2 targetingMap:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NSString *contentStreamId; // @dynamic contentStreamId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *sessionTargetingString; // @dynamic sessionTargetingString;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSDictionary *targetingMap; // @dynamic targetingMap;

@end

