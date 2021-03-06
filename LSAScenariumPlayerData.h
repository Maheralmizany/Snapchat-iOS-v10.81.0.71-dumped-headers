//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LSAScenariumAudioTrack;

@interface LSAScenariumPlayerData : NSObject
{
    LSAScenariumAudioTrack *_audioTrack;
    unsigned long long _playerSuspendState;
    long long _playRepeatCount;
}

@property(nonatomic) long long playRepeatCount; // @synthesize playRepeatCount=_playRepeatCount;
@property(nonatomic) unsigned long long playerSuspendState; // @synthesize playerSuspendState=_playerSuspendState;
@property(retain, nonatomic) LSAScenariumAudioTrack *audioTrack; // @synthesize audioTrack=_audioTrack;
- (void).cxx_destruct;
- (id)initWithAudioTrack:(id)arg1 suspendState:(unsigned long long)arg2 repeatCount:(long long)arg3;

@end

