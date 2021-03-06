//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SCSendTaskMetadataContainer-Protocol.h"
#import "SOJUNycShare-Protocol.h"

@class NSString;

@interface SOJUNycShare : SCSojuMessage <SCSendTaskMetadataContainer, SOJUNycShare>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithStoryId:(id)arg1 mediaType:(id)arg2 poiId:(id)arg3;
- (unsigned long long)sendTaskType;
- (id)sendTaskMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *mediaType; // @dynamic mediaType;
@property(readonly, nonatomic) NSString *poiId; // @dynamic poiId;
@property(readonly, nonatomic) NSString *storyId; // @dynamic storyId;
@property(readonly) Class superclass;

@end

