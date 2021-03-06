//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCStoriesPlaybackConfig : NSObject <NSCopying>
{
    long long _storyPlayMode;
    long long _viewLocation;
    long long _viewingType;
    unsigned long long _viewingActionContext;
    long long _playSource;
    long long _startingEntryEvent;
}

@property(readonly, nonatomic) long long startingEntryEvent; // @synthesize startingEntryEvent=_startingEntryEvent;
@property(readonly, nonatomic) long long playSource; // @synthesize playSource=_playSource;
@property(readonly, nonatomic) unsigned long long viewingActionContext; // @synthesize viewingActionContext=_viewingActionContext;
@property(readonly, nonatomic) long long viewingType; // @synthesize viewingType=_viewingType;
@property(readonly, nonatomic) long long viewLocation; // @synthesize viewLocation=_viewLocation;
@property(readonly, nonatomic) long long storyPlayMode; // @synthesize storyPlayMode=_storyPlayMode;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoryPlayMode:(long long)arg1 viewLocation:(long long)arg2 viewingType:(long long)arg3 viewingActionContext:(unsigned long long)arg4 playSource:(long long)arg5 startingEntryEvent:(long long)arg6;

@end

