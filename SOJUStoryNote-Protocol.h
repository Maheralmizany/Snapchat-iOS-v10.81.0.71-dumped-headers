//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString, SOJUStoryPointer;

@protocol SOJUStoryNote <SCSojuMessage>
@property(readonly, nonatomic) NSNumber *saved;
@property(readonly, nonatomic) NSNumber *screenRecorded;
@property(readonly, nonatomic) NSNumber *isFriendViewOfPublicStory;
@property(readonly, nonatomic) SOJUStoryPointer *storypointer;
@property(readonly, nonatomic) NSNumber *timestamp;
@property(readonly, nonatomic) NSNumber *screenshotted;
@property(readonly, nonatomic) NSString *viewer;
@end
