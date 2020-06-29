//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUIdentityContactWithData-Protocol.h"

@class NSNumber, NSString;

@interface SOJUIdentityContactWithData : SCSojuMessage <SOJUIdentityContactWithData>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithNumber:(id)arg1 displayName:(id)arg2 lastUpdatedTimestamp:(id)arg3 timesContacted:(id)arg4 lastTimeContacted:(id)arg5 starred:(id)arg6 customRingtone:(id)arg7 photoId:(id)arg8 photoUri:(id)arg9;

// Remaining properties
@property(readonly, nonatomic) NSString *customRingtone; // @dynamic customRingtone;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *lastTimeContacted; // @dynamic lastTimeContacted;
@property(readonly, nonatomic) NSNumber *lastUpdatedTimestamp; // @dynamic lastUpdatedTimestamp;
@property(readonly, nonatomic) NSString *number; // @dynamic number;
@property(readonly, nonatomic) NSString *photoId; // @dynamic photoId;
@property(readonly, nonatomic) NSString *photoUri; // @dynamic photoUri;
@property(readonly, nonatomic) NSNumber *starred; // @dynamic starred;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *timesContacted; // @dynamic timesContacted;

@end

