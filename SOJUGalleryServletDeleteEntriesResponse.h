//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUGalleryServletDeleteEntriesResponse-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGalleryServletQuota;

@interface SOJUGalleryServletDeleteEntriesResponse : SCSojuMessage <SOJUGalleryServletDeleteEntriesResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithEntries:(id)arg1 lastSeqnum:(id)arg2 serviceStatusCode:(id)arg3 userString:(id)arg4 backoffTime:(id)arg5 debugInfo:(id)arg6 quota:(id)arg7 totalEntryCount:(id)arg8;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSNumber *backoffTime; // @dynamic backoffTime;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSString *debugInfo; // @dynamic debugInfo;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *entries; // @dynamic entries;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *lastSeqnum; // @dynamic lastSeqnum;
@property(readonly, nonatomic) SOJUGalleryServletQuota *quota; // @dynamic quota;
@property(readonly, nonatomic) NSNumber *serviceStatusCode; // @dynamic serviceStatusCode;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *totalEntryCount; // @dynamic totalEntryCount;
@property(readonly, nonatomic) NSString *userString; // @dynamic userString;

@end
