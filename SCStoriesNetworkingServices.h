//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCStoriesNetworkingServices : NSObject
{
    SCLazy *_mixerNetworkRequester;
    SCLazy *_mixerEndpointManager;
    SCLazy *_fsnNetworkRequester;
}

@property(readonly, nonatomic) SCLazy *fsnNetworkRequester; // @synthesize fsnNetworkRequester=_fsnNetworkRequester;
@property(readonly, nonatomic) SCLazy *mixerEndpointManager; // @synthesize mixerEndpointManager=_mixerEndpointManager;
@property(readonly, nonatomic) SCLazy *mixerNetworkRequester; // @synthesize mixerNetworkRequester=_mixerNetworkRequester;
- (void).cxx_destruct;
- (id)initWithMixerNetworkRequester:(id)arg1 mixerEndpointManager:(id)arg2 fsnNetworkRequester:(id)arg3;

@end

