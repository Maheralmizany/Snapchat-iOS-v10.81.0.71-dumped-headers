//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "SIGSelectBarItem-Protocol.h"

@class NSOrderedSet, NSString, SCSelectionParticipant;

@interface SCSelectionItem : NSObject <SIGSelectBarItem, NSCopying, NSCoding>
{
    SCSelectionParticipant *_recipient;
    NSOrderedSet *_participants;
}

@property(readonly, copy, nonatomic) NSOrderedSet *participants; // @synthesize participants=_participants;
@property(readonly, copy, nonatomic) SCSelectionParticipant *recipient; // @synthesize recipient=_recipient;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecipient:(id)arg1 participants:(id)arg2;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *accessibilityIdentifier;
@property(readonly, nonatomic) unsigned long long SIGSelectBarItemType;
@property(readonly, nonatomic) NSString *SIGSelectBarItemTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

