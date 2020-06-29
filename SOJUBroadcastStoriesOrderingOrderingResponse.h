//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUBroadcastStoriesOrderingOrderingResponse-Protocol.h"

@class NSArray, NSString;

@interface SOJUBroadcastStoriesOrderingOrderingResponse : SCSojuMessage <SOJUBroadcastStoriesOrderingOrderingResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithRecentOrder:(id)arg1 autoAdvanceOrder:(id)arg2 qualityProgrammingOrder:(id)arg3 storyScores:(id)arg4 storyDebug:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) NSArray *autoAdvanceOrder; // @dynamic autoAdvanceOrder;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *qualityProgrammingOrder; // @dynamic qualityProgrammingOrder;
@property(readonly, nonatomic) NSArray *recentOrder; // @dynamic recentOrder;
@property(readonly, nonatomic) NSArray *storyDebug; // @dynamic storyDebug;
@property(readonly, nonatomic) NSArray *storyScores; // @dynamic storyScores;
@property(readonly) Class superclass;

@end
