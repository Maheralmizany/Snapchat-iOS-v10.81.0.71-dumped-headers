//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSData, NSString;

@protocol SOJUMessageParcel <SCSojuMessage>
@property(readonly, nonatomic) NSString *tagVersion;
@property(readonly, nonatomic) NSString *tag;
@property(readonly, nonatomic) NSArray *media;
@property(readonly, nonatomic) NSData *payloadDeprecated;
@property(readonly, nonatomic) NSString *contents;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *idValue;
@end
