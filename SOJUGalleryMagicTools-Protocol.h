//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUPurikuraMetadataResponse;

@protocol SOJUGalleryMagicTools <SCSojuMessage>
@property(readonly, nonatomic) SOJUPurikuraMetadataResponse *purikuraMetadata;
@property(readonly, nonatomic) NSString *finalEditSequence;
@property(readonly, nonatomic) NSArray *magicToolMetadata;
@property(readonly, nonatomic) NSNumber *hasMagicImage;
@property(readonly, nonatomic) NSNumber *sessionCount;
@property(readonly, nonatomic) NSNumber *resetCount;
@property(readonly, nonatomic) NSNumber *finalEditCount;
@property(readonly, nonatomic) NSNumber *totalEditCount;
@end

