//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, NSOperationQueue;

@interface GADEventConsoleLogger : NSObject
{
    NSOperationQueue *_operationQueue;
    GADObserverCollection *_settingsUpdateObservers;
    GADObserverCollection *_loggingObservers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)logEvent:(id)arg1;
- (void)updateEnabled;
- (id)init;

@end

