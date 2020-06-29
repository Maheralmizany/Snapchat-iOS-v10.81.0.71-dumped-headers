//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUDiscoverResponse-Protocol.h"

@class NSString;

@interface SOJUDiscoverResponse : SCSojuMessage <SOJUDiscoverResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithGetChannels:(id)arg1 getEdition:(id)arg2 videoCatalog:(id)arg3 adVideoCatalog:(id)arg4 validationEndpoint:(id)arg5 resourceParameterName:(id)arg6 resourceParameterValue:(id)arg7 compatibility:(id)arg8;

// Remaining properties
@property(readonly, nonatomic) NSString *adVideoCatalog; // @dynamic adVideoCatalog;
@property(readonly, nonatomic) NSString *compatibility; // @dynamic compatibility;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *getChannels; // @dynamic getChannels;
@property(readonly, nonatomic) NSString *getEdition; // @dynamic getEdition;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *resourceParameterName; // @dynamic resourceParameterName;
@property(readonly, nonatomic) NSString *resourceParameterValue; // @dynamic resourceParameterValue;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *validationEndpoint; // @dynamic validationEndpoint;
@property(readonly, nonatomic) NSString *videoCatalog; // @dynamic videoCatalog;

@end
