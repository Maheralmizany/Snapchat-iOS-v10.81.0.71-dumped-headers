//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUIdentityTrophyStage-Protocol.h"

@class NSNumber, NSString;

@interface SOJUIdentityTrophyStage : SCSojuMessage <SOJUIdentityTrophyStage>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithLabel:(id)arg1 unicode:(id)arg2 status:(id)arg3 achievedTimestamp:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) NSNumber *achievedTimestamp; // @dynamic achievedTimestamp;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *label; // @dynamic label;
@property(readonly, nonatomic) NSString *status; // @dynamic status;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *unicode; // @dynamic unicode;

@end

