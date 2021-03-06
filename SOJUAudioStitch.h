//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SCAudioStitch-Protocol.h"
#import "SOJUAudioStitch-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUAudioStitch : SCSojuMessage <SCAudioStitch, SOJUAudioStitch>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithAudioStitchId:(id)arg1 snapsPerRow:(id)arg2 snapsPerColumn:(id)arg3 snaps:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) NSString *audioStitchId; // @dynamic audioStitchId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *snaps; // @dynamic snaps;
@property(readonly, nonatomic) NSNumber *snapsPerColumn; // @dynamic snapsPerColumn;
@property(readonly, nonatomic) NSNumber *snapsPerRow; // @dynamic snapsPerRow;
@property(readonly) Class superclass;

@end

