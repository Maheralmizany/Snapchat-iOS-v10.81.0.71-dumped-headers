//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUDiscoverEditionResponse-Protocol.h"

@class NSNumber, NSString, SOJUDiscoverChannelResponse;

@interface SOJUDiscoverEditionResponse : SCSojuMessage <SOJUDiscoverEditionResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithChannel:(id)arg1 validity:(id)arg2 generationTs:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) SOJUDiscoverChannelResponse *channel; // @dynamic channel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *generationTs; // @dynamic generationTs;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *validity; // @dynamic validity;

@end

