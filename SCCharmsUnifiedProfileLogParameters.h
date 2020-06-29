//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCharmsUnifiedProfileLogParameters : NSObject <NSCopying>
{
    _Bool _isGroupProfile;
    _Bool _isFriendProfile;
    _Bool _isCharmNew;
    _Bool _fromTap;
    _Bool _fromSwipeLeft;
    _Bool _fromSwipeRight;
    _Bool _actionSucceeded;
    _Bool _actionCancelled;
    _Bool _actionFailed;
    int _charmID;
    unsigned int _position;
    unsigned int _maxPosition;
    NSString *_profileSessionID;
    double _viewDuration;
}

@property(readonly, nonatomic) _Bool actionFailed; // @synthesize actionFailed=_actionFailed;
@property(readonly, nonatomic) _Bool actionCancelled; // @synthesize actionCancelled=_actionCancelled;
@property(readonly, nonatomic) _Bool actionSucceeded; // @synthesize actionSucceeded=_actionSucceeded;
@property(readonly, nonatomic) _Bool fromSwipeRight; // @synthesize fromSwipeRight=_fromSwipeRight;
@property(readonly, nonatomic) _Bool fromSwipeLeft; // @synthesize fromSwipeLeft=_fromSwipeLeft;
@property(readonly, nonatomic) _Bool fromTap; // @synthesize fromTap=_fromTap;
@property(readonly, nonatomic) double viewDuration; // @synthesize viewDuration=_viewDuration;
@property(readonly, nonatomic) unsigned int maxPosition; // @synthesize maxPosition=_maxPosition;
@property(readonly, nonatomic) unsigned int position; // @synthesize position=_position;
@property(readonly, nonatomic) _Bool isCharmNew; // @synthesize isCharmNew=_isCharmNew;
@property(readonly, nonatomic) int charmID; // @synthesize charmID=_charmID;
@property(readonly, copy, nonatomic) NSString *profileSessionID; // @synthesize profileSessionID=_profileSessionID;
@property(readonly, nonatomic) _Bool isFriendProfile; // @synthesize isFriendProfile=_isFriendProfile;
@property(readonly, nonatomic) _Bool isGroupProfile; // @synthesize isGroupProfile=_isGroupProfile;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsGroupProfile:(_Bool)arg1 isFriendProfile:(_Bool)arg2 profileSessionID:(id)arg3 charmID:(int)arg4 isCharmNew:(_Bool)arg5 position:(unsigned int)arg6 maxPosition:(unsigned int)arg7 viewDuration:(double)arg8 fromTap:(_Bool)arg9 fromSwipeLeft:(_Bool)arg10 fromSwipeRight:(_Bool)arg11 actionSucceeded:(_Bool)arg12 actionCancelled:(_Bool)arg13 actionFailed:(_Bool)arg14;

@end

