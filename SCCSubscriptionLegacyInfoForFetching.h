//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCCSubscriptionLegacyInfoForFetching : SCComposerMarshallableObject
{
    NSString *_username;
    NSString *_displayName;
}

@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithUsername:(id)arg1;
- (id)initWithUsername:(id)arg1 displayName:(id)arg2;

@end
