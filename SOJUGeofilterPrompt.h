//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUGeofilterPrompt-Protocol.h"

@class NSNumber, NSString;

@interface SOJUGeofilterPrompt : SCSojuMessage <SOJUGeofilterPrompt>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithText:(id)arg1 position:(id)arg2 fadeInTimeMs:(id)arg3 onScreenTimeMs:(id)arg4 fadeOutTimeMs:(id)arg5;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *fadeInTimeMs; // @dynamic fadeInTimeMs;
@property(readonly, nonatomic) NSNumber *fadeOutTimeMs; // @dynamic fadeOutTimeMs;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *onScreenTimeMs; // @dynamic onScreenTimeMs;
@property(readonly, nonatomic) NSString *position; // @dynamic position;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *text; // @dynamic text;

@end

