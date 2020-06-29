//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSNumber, NSString, SCCUser;

@interface SCCIncomingFriend : SCComposerMarshallableObject
{
    SCCUser *_user;
    NSString *_localizedIncomingSource;
    NSNumber *_incomingTimestamp;
    NSNumber *_isIgnored;
    NSNumber *_isViewed;
}

@property(retain, nonatomic) NSNumber *isViewed; // @synthesize isViewed=_isViewed;
@property(retain, nonatomic) NSNumber *isIgnored; // @synthesize isIgnored=_isIgnored;
@property(retain, nonatomic) NSNumber *incomingTimestamp; // @synthesize incomingTimestamp=_incomingTimestamp;
@property(copy, nonatomic) NSString *localizedIncomingSource; // @synthesize localizedIncomingSource=_localizedIncomingSource;
@property(retain, nonatomic) SCCUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithUser:(id)arg1 localizedIncomingSource:(id)arg2;
- (id)initWithUser:(id)arg1 localizedIncomingSource:(id)arg2 incomingTimestamp:(id)arg3;
- (id)initWithUser:(id)arg1 localizedIncomingSource:(id)arg2 incomingTimestamp:(id)arg3 isIgnored:(id)arg4;
- (id)initWithUser:(id)arg1 localizedIncomingSource:(id)arg2 incomingTimestamp:(id)arg3 isIgnored:(id)arg4 isViewed:(id)arg5;
- (id)initWithSCSnapchatter:(id)arg1;

@end
