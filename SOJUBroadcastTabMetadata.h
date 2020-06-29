//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUBroadcastTabMetadata-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUBroadcastTabMetadata : SCSojuMessage <SOJUBroadcastTabMetadata>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithTabId:(id)arg1 localizedTitle:(id)arg2 defaut:(id)arg3 channels:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) NSArray *channels; // @dynamic channels;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSNumber *defaut; // @dynamic defaut;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *tabId; // @dynamic tabId;

@end

