//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCImpalaSnapInsightsViewModel : SCComposerMarshallableObject
{
    NSString *_businessProfileId;
    NSString *_snapId;
}

@property(copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithBusinessProfileId:(id)arg1 snapId:(id)arg2;

@end

