//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface SCLocationUpdateRequestItem : NSObject
{
    NSDate *_startTime;
    long long _appStateWhenRequestStart;
}

@property(nonatomic) long long appStateWhenRequestStart; // @synthesize appStateWhenRequestStart=_appStateWhenRequestStart;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)initWithStartTimestamp:(id)arg1 appState:(long long)arg2;

@end
