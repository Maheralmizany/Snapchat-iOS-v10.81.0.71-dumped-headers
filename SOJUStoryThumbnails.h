//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUStoryThumbnails-Protocol.h"

@class NSString, SOJUStoryThumbnail;

@interface SOJUStoryThumbnails : SCSojuMessage <SOJUStoryThumbnails>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithUnviewed:(id)arg1 viewed:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SOJUStoryThumbnail *unviewed; // @dynamic unviewed;
@property(readonly, nonatomic) SOJUStoryThumbnail *viewed; // @dynamic viewed;

@end

