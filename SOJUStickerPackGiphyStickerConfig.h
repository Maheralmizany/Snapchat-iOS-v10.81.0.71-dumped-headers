//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUStickerPackGiphyStickerConfig-Protocol.h"

@class NSNumber, NSString;

@interface SOJUStickerPackGiphyStickerConfig : SCSojuMessage <SOJUStickerPackGiphyStickerConfig>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithGiphyApiKey:(id)arg1 apiKeyVersion:(id)arg2 supportTrending:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NSString *apiKeyVersion; // @dynamic apiKeyVersion;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *giphyApiKey; // @dynamic giphyApiKey;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *supportTrending; // @dynamic supportTrending;

@end
