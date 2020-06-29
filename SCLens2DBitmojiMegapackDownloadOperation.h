//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLensAssetDownloadOperation.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLensBitmojiListManager;

@interface SCLens2DBitmojiMegapackDownloadOperation : SCLensAssetDownloadOperation <SCTraceEnabled>
{
    SCLensBitmojiListManager *_bitmojiListManager;
}

@property(retain, nonatomic) SCLensBitmojiListManager *bitmojiListManager; // @synthesize bitmojiListManager=_bitmojiListManager;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)processBitmojiListResponse:(id)arg1 cached:(_Bool)arg2 inputSettings:(id)arg3 error:(id)arg4;
- (void)boostWithSettings:(id)arg1;
- (void)executeWithSettings:(id)arg1;
- (id)initWithLens:(id)arg1 requestTiming:(long long)arg2 asset:(id)arg3 bitmojiListManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

