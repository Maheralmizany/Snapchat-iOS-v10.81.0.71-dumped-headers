//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCSnapchattersGroupSummary : NSObject <NSCopying>
{
    _Bool _isStoryMuted;
    _Bool _hasUnexemptBlockedParticipants;
    NSString *_groupDisplayName;
    NSArray *_participants;
}

@property(readonly, nonatomic) _Bool hasUnexemptBlockedParticipants; // @synthesize hasUnexemptBlockedParticipants=_hasUnexemptBlockedParticipants;
@property(readonly, copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) _Bool isStoryMuted; // @synthesize isStoryMuted=_isStoryMuted;
@property(readonly, copy, nonatomic) NSString *groupDisplayName; // @synthesize groupDisplayName=_groupDisplayName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGroupDisplayName:(id)arg1 isStoryMuted:(_Bool)arg2 participants:(id)arg3 hasUnexemptBlockedParticipants:(_Bool)arg4;

@end

