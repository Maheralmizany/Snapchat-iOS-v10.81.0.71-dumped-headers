//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCContextImage_InlineImage;

@interface SCContextImage_EncryptedImage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(retain, nonatomic) SCContextImage_InlineImage *inlineImage; // @dynamic inlineImage;
@property(copy, nonatomic) NSString *iv; // @dynamic iv;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(readonly, nonatomic) int sourceOneOfCase; // @dynamic sourceOneOfCase;

@end

