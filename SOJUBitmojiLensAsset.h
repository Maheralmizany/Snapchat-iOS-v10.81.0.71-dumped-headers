//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUBitmojiLensAsset-Protocol.h"

@class NSArray, NSString;

@interface SOJUBitmojiLensAsset : SCSojuMessage <SOJUBitmojiLensAsset>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIdValue:(id)arg1 url:(id)arg2 signature:(id)arg3 contentSignature:(id)arg4 storageOptions:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) NSString *contentSignature; // @dynamic contentSignature;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) NSString *signature; // @dynamic signature;
@property(readonly, nonatomic) NSArray *storageOptions; // @dynamic storageOptions;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *url; // @dynamic url;

@end
