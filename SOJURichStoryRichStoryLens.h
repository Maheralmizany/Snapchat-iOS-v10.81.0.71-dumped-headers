//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJURichStoryRichStoryLens-Protocol.h"

@class NSNumber, NSString;

@interface SOJURichStoryRichStoryLens : SCSojuMessage <SOJURichStoryRichStoryLens>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithLensCreativeId:(id)arg1 lensScancodeId:(id)arg2 scancodeVersion:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lensCreativeId; // @dynamic lensCreativeId;
@property(readonly, nonatomic) NSString *lensScancodeId; // @dynamic lensScancodeId;
@property(readonly, nonatomic) NSNumber *scancodeVersion; // @dynamic scancodeVersion;
@property(readonly) Class superclass;

@end

