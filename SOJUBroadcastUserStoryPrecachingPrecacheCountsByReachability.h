//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUBroadcastUserStoryPrecachingPrecacheCountsByReachability-Protocol.h"

@class NSNumber, NSString;

@interface SOJUBroadcastUserStoryPrecachingPrecacheCountsByReachability : SCSojuMessage <SOJUBroadcastUserStoryPrecachingPrecacheCountsByReachability>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithWifiCount:(id)arg1 wwanCount:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *wifiCount; // @dynamic wifiCount;
@property(readonly, nonatomic) NSNumber *wwanCount; // @dynamic wwanCount;

@end

