//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUStoryNote-Protocol.h"

@class NSNumber, NSString, SOJUStoryPointer;

@interface SOJUStoryNote : SCSojuMessage <SOJUStoryNote>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithViewer:(id)arg1 screenshotted:(id)arg2 timestamp:(id)arg3 storypointer:(id)arg4 isFriendViewOfPublicStory:(id)arg5 screenRecorded:(id)arg6 saved:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *isFriendViewOfPublicStory; // @dynamic isFriendViewOfPublicStory;
@property(readonly, nonatomic) NSNumber *saved; // @dynamic saved;
@property(readonly, nonatomic) NSNumber *screenRecorded; // @dynamic screenRecorded;
@property(readonly, nonatomic) NSNumber *screenshotted; // @dynamic screenshotted;
@property(readonly, nonatomic) SOJUStoryPointer *storypointer; // @dynamic storypointer;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *timestamp; // @dynamic timestamp;
@property(readonly, nonatomic) NSString *viewer; // @dynamic viewer;

@end
