//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUStoryExtra-Protocol.h"

@class NSNumber, NSString;

@interface SOJUStoryExtra : SCSojuMessage <SOJUStoryExtra>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithViewCount:(id)arg1 screenshotCount:(id)arg2 screenCaptureShotCount:(id)arg3 screenCaptureRecordingCount:(id)arg4 snapSaveCount:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *screenCaptureRecordingCount; // @dynamic screenCaptureRecordingCount;
@property(readonly, nonatomic) NSNumber *screenCaptureShotCount; // @dynamic screenCaptureShotCount;
@property(readonly, nonatomic) NSNumber *screenshotCount; // @dynamic screenshotCount;
@property(readonly, nonatomic) NSNumber *snapSaveCount; // @dynamic snapSaveCount;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *viewCount; // @dynamic viewCount;

@end

