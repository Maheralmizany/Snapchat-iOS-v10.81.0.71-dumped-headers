//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUBloopsFriendBloopsDataElement-Protocol.h"

@class NSString;

@interface SOJUBloopsFriendBloopsDataElement : SCSojuMessage <SOJUBloopsFriendBloopsDataElement>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithEncKey:(id)arg1 encIv:(id)arg2 url:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *encIv; // @dynamic encIv;
@property(readonly, nonatomic) NSString *encKey; // @dynamic encKey;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *url; // @dynamic url;

@end

