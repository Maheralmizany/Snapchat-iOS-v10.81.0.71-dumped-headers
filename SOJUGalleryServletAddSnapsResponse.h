//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUGalleryServletAddSnapsResponse-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGalleryServletQuota;

@interface SOJUGalleryServletAddSnapsResponse : SCSojuMessage <SOJUGalleryServletAddSnapsResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithServiceStatusCode:(id)arg1 userString:(id)arg2 backoffTime:(id)arg3 debugInfo:(id)arg4 quota:(id)arg5 totalEntryCount:(id)arg6 snaps:(id)arg7 lastSeqnum:(id)arg8 storageType:(id)arg9;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSNumber *backoffTime; // @dynamic backoffTime;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSString *debugInfo; // @dynamic debugInfo;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *lastSeqnum; // @dynamic lastSeqnum;
@property(readonly, nonatomic) SOJUGalleryServletQuota *quota; // @dynamic quota;
@property(readonly, nonatomic) NSNumber *serviceStatusCode; // @dynamic serviceStatusCode;
@property(readonly, nonatomic) NSArray *snaps; // @dynamic snaps;
@property(readonly, nonatomic) NSString *storageType; // @dynamic storageType;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *totalEntryCount; // @dynamic totalEntryCount;
@property(readonly, nonatomic) NSString *userString; // @dynamic userString;

@end
