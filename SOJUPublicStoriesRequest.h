//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUPublicStoriesRequest-Protocol.h"

@class NSNumber, NSString;

@interface SOJUPublicStoriesRequest : SCSojuMessage <SOJUPublicStoriesRequest>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 sharedId:(id)arg4 screenWidthIn:(id)arg5 screenHeightIn:(id)arg6 screenWidthPx:(id)arg7 screenHeightPx:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *reqToken; // @dynamic reqToken;
@property(readonly, nonatomic) NSNumber *screenHeightIn; // @dynamic screenHeightIn;
@property(readonly, nonatomic) NSNumber *screenHeightPx; // @dynamic screenHeightPx;
@property(readonly, nonatomic) NSNumber *screenWidthIn; // @dynamic screenWidthIn;
@property(readonly, nonatomic) NSNumber *screenWidthPx; // @dynamic screenWidthPx;
@property(readonly, nonatomic) NSString *sharedId; // @dynamic sharedId;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *timestamp; // @dynamic timestamp;
@property(readonly, nonatomic) NSString *username; // @dynamic username;

@end

