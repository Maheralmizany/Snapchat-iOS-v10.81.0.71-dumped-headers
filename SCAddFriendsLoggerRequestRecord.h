//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCAddFriendsLoggerRequestRecord : NSObject
{
    _Bool _isCancelled;
    long long actionType;
    double uiStartTime;
    double networkStartTime;
    double networkEndTime;
    double uiEndTime;
    NSString *_failure;
}

@property(retain, nonatomic) NSString *failure; // @synthesize failure=_failure;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) double uiEndTime; // @synthesize uiEndTime;
@property(nonatomic) double networkEndTime; // @synthesize networkEndTime;
@property(nonatomic) double networkStartTime; // @synthesize networkStartTime;
@property(nonatomic) double uiStartTime; // @synthesize uiStartTime;
@property(nonatomic) long long actionType; // @synthesize actionType;
- (void).cxx_destruct;

@end
