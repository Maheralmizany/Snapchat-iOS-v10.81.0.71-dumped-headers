//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection;

@interface GADImpressionMonitor : NSObject
{
    GADObserverCollection *_observers;
}

+ (void)addMonitorToAd:(id)arg1 adConfiguration:(struct NSDictionary *)arg2;
- (void).cxx_destruct;
- (id)initWithAd:(id)arg1 impressionDefinition:(long long)arg2;

@end

