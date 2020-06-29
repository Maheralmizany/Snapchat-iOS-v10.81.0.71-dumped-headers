//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUGalleryServletDefunctMedia-Protocol.h"

@class NSNumber, NSString;

@interface SOJUGalleryServletDefunctMedia : SCSojuMessage <SOJUGalleryServletDefunctMedia>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithMediaId:(id)arg1 defunctReason:(id)arg2;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSNumber *defunctReason; // @dynamic defunctReason;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *mediaId; // @dynamic mediaId;
@property(readonly) Class superclass;

@end

