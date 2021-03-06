//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUAdAdPreferences-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdAdPreferences : SCSojuMessage <SOJUAdAdPreferences>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIsAudienceMatchOptOut:(id)arg1 isExternalActivityMatchOptOut:(id)arg2 isThirdPartyAdNetworkOptOut:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *isAudienceMatchOptOut; // @dynamic isAudienceMatchOptOut;
@property(readonly, nonatomic) NSNumber *isExternalActivityMatchOptOut; // @dynamic isExternalActivityMatchOptOut;
@property(readonly, nonatomic) NSNumber *isThirdPartyAdNetworkOptOut; // @dynamic isThirdPartyAdNetworkOptOut;
@property(readonly) Class superclass;

@end

