//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUBroadcastAttribution-Protocol.h"

@class NSString;

@interface SOJUBroadcastAttribution : SCSojuMessage <SOJUBroadcastAttribution>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithSharedStoryAttributionUserId:(id)arg1 sharedStoryAttributionDisplayName:(id)arg2 sharedStoryAttributionUsername:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *sharedStoryAttributionDisplayName; // @dynamic sharedStoryAttributionDisplayName;
@property(readonly, nonatomic) NSString *sharedStoryAttributionUserId; // @dynamic sharedStoryAttributionUserId;
@property(readonly, nonatomic) NSString *sharedStoryAttributionUsername; // @dynamic sharedStoryAttributionUsername;
@property(readonly) Class superclass;

@end

