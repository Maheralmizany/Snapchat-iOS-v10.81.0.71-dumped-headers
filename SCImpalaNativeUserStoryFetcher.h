//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCStoryPlayerNativeUserStoryFetching-Protocol.h"

@class NSString, SCLazy;

@interface SCImpalaNativeUserStoryFetcher : NSObject <SCCStoryPlayerNativeUserStoryFetching>
{
    SCLazy *_storiesDataProvider;
}

- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)getNativeUserStoryWithUserId:(id)arg1 username:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)initWithStoriesDataProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

