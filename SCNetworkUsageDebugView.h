//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UILabel, UIView;

@interface SCNetworkUsageDebugView : NSObject
{
    UIView *_containerView;
    UILabel *_networkUsageLabel;
    long long _totalReceivedBytes;
    long long _totalSentBytes;
}

+ (id)shared;
@property long long totalSentBytes; // @synthesize totalSentBytes=_totalSentBytes;
@property long long totalReceivedBytes; // @synthesize totalReceivedBytes=_totalReceivedBytes;
- (void).cxx_destruct;
- (void)willEnterForeground;
- (id)_strFromNetworkUsageInBytes:(long long)arg1;
- (void)_updateNetworkUsageLabel;
- (void)updateDebugViewWithResponseWireSize:(long long)arg1 requestSize:(long long)arg2;
- (void)hide;
- (void)show;
- (id)init;

@end

