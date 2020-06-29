//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUGalleryMagicToolIndividual-Protocol.h"

@class NSNumber, NSString;

@interface SOJUGalleryMagicToolIndividual : SCSojuMessage <SOJUGalleryMagicToolIndividual>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithMagicToolType:(id)arg1 totalEditCount:(id)arg2 finalEditCount:(id)arg3 resetCount:(id)arg4 sessionCount:(id)arg5 hasMagicImage:(id)arg6 resourceId:(id)arg7 resourceUrl:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *finalEditCount; // @dynamic finalEditCount;
@property(readonly, nonatomic) NSNumber *hasMagicImage; // @dynamic hasMagicImage;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *magicToolType; // @dynamic magicToolType;
@property(readonly, nonatomic) NSNumber *resetCount; // @dynamic resetCount;
@property(readonly, nonatomic) NSString *resourceId; // @dynamic resourceId;
@property(readonly, nonatomic) NSString *resourceUrl; // @dynamic resourceUrl;
@property(readonly, nonatomic) NSNumber *sessionCount; // @dynamic sessionCount;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *totalEditCount; // @dynamic totalEditCount;

@end
