//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCMapGroupCarouselPage, UIView;
@protocol SCChatGroup;

@protocol SCMapGroupCarouselPageDelegate <NSObject>
- (void)mapGroupCarouselPage:(SCMapGroupCarouselPage *)arg1 wantsChatForGroup:(id <SCChatGroup>)arg2;
- (void)mapGroupCarouselPageWantsToUpdateCurrentStatus:(SCMapGroupCarouselPage *)arg1;
- (void)mapGroupCarouselPage:(SCMapGroupCarouselPage *)arg1 didTapStoryForGroup:(id <SCChatGroup>)arg2 sourceView:(UIView *)arg3;
@end

