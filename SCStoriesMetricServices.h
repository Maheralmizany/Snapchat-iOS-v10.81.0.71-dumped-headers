//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;
@protocol SCStoriesBlizzardLogging, SCStoriesGhostToStoriesMetricsEmitting, SCStoriesGrapheneMetricsEmitting;

@interface SCStoriesMetricServices : NSObject
{
    id <SCStoriesGrapheneMetricsEmitting> _grapheneMetricsEmitter;
    id <SCStoriesGhostToStoriesMetricsEmitting> _ghostToMyStoriesMetricsEmitter;
    id <SCStoriesGhostToStoriesMetricsEmitting> _ghostToFriendStoriesMetricsEmitter;
    id <SCStoriesBlizzardLogging> _blizzardLogger;
    SCLazy *_postingLogger;
}

@property(readonly, nonatomic) SCLazy *postingLogger; // @synthesize postingLogger=_postingLogger;
@property(readonly, nonatomic) id <SCStoriesBlizzardLogging> blizzardLogger; // @synthesize blizzardLogger=_blizzardLogger;
@property(readonly, nonatomic) id <SCStoriesGhostToStoriesMetricsEmitting> ghostToFriendStoriesMetricsEmitter; // @synthesize ghostToFriendStoriesMetricsEmitter=_ghostToFriendStoriesMetricsEmitter;
@property(readonly, nonatomic) id <SCStoriesGhostToStoriesMetricsEmitting> ghostToMyStoriesMetricsEmitter; // @synthesize ghostToMyStoriesMetricsEmitter=_ghostToMyStoriesMetricsEmitter;
@property(readonly, nonatomic) id <SCStoriesGrapheneMetricsEmitting> grapheneMetricsEmitter; // @synthesize grapheneMetricsEmitter=_grapheneMetricsEmitter;
- (void).cxx_destruct;
- (id)initWithGrapheneMetricsEmitter:(id)arg1 ghostToMyStoriesMetricsEmitter:(id)arg2 ghostToFriendStoriesMetricsEmitter:(id)arg3 blizzardLogger:(id)arg4 postingLogger:(id)arg5;

@end

