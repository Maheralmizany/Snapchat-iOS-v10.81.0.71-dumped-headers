//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCStickersDeltaForceExperimentContext : SCExperimentContext
{
    _Bool _dfStickersEnabled;
    _Bool _dfBitmojiEnabled;
}

+ (id)experimentContextWithExperimentManager:(id)arg1;
@property(readonly, nonatomic) _Bool dfBitmojiEnabled; // @synthesize dfBitmojiEnabled=_dfBitmojiEnabled;
@property(readonly, nonatomic) _Bool dfStickersEnabled; // @synthesize dfStickersEnabled=_dfStickersEnabled;
- (void)setupParameters;
- (id)experimentName;

@end

