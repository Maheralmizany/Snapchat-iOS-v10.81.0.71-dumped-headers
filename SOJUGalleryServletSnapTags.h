//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUGalleryServletSnapTags-Protocol.h"

@class NSNumber, NSString;

@interface SOJUGalleryServletSnapTags : SCSojuMessage <SOJUGalleryServletSnapTags>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithSnapId:(id)arg1 tagVersion:(id)arg2 tags:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *snapId; // @dynamic snapId;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *tagVersion; // @dynamic tagVersion;
@property(readonly, nonatomic) NSString *tags; // @dynamic tags;

@end

