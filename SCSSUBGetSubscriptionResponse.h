//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCSSUBGetSubscriptionResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(nonatomic) _Bool shouldHideIcons; // @dynamic shouldHideIcons;
@property(nonatomic) _Bool shouldHideImage; // @dynamic shouldHideImage;
@property(retain, nonatomic) NSMutableArray *subscriptionsArray; // @dynamic subscriptionsArray;
@property(readonly, nonatomic) unsigned long long subscriptionsArray_Count; // @dynamic subscriptionsArray_Count;
@property(copy, nonatomic) NSString *toggleOnBackgroundColorEnd; // @dynamic toggleOnBackgroundColorEnd;
@property(copy, nonatomic) NSString *toggleOnBackgroundColorStart; // @dynamic toggleOnBackgroundColorStart;

@end
