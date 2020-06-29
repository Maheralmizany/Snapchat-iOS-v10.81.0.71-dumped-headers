//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUVenue-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUVenue : SCSojuMessage <SOJUVenue>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithVenueId:(id)arg1 name:(id)arg2 locality:(id)arg3 filterId:(id)arg4 subtitle:(id)arg5 splitByServer:(id)arg6 matchingGeofilterId:(id)arg7 isExtra:(id)arg8 venueName:(id)arg9 categories:(id)arg10 iconUrl:(id)arg11 superCategory:(id)arg12;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSArray *categories; // @dynamic categories;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *filterId; // @dynamic filterId;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(readonly, nonatomic) NSNumber *isExtra; // @dynamic isExtra;
@property(readonly, nonatomic) NSString *locality; // @dynamic locality;
@property(readonly, nonatomic) NSString *matchingGeofilterId; // @dynamic matchingGeofilterId;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) NSNumber *splitByServer; // @dynamic splitByServer;
@property(readonly, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(readonly, nonatomic) NSString *superCategory; // @dynamic superCategory;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *venueId; // @dynamic venueId;
@property(readonly, nonatomic) NSString *venueName; // @dynamic venueName;

@end

