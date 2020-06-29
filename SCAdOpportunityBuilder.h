//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCAdOpportunityBuilder : NSObject
{
    NSString *_groupId;
    unsigned long long _adProductType;
    long long _adLoadStatus;
    _Bool _isPreviousGroupBrandUnsafe;
    _Bool _isNextGroupBrandUnsafe;
    _Bool _isTimeRuleNotSatisfied;
    _Bool _reachedAdSlot;
}

+ (id)adOpportunityFromExistingAdOpportunity:(id)arg1;
+ (id)adOpportunity;
- (void).cxx_destruct;
- (id)withReachedAdSlot:(_Bool)arg1;
- (id)withIsTimeRuleNotSatisfied:(_Bool)arg1;
- (id)withIsNextGroupBrandUnsafe:(_Bool)arg1;
- (id)withIsPreviousGroupBrandUnsafe:(_Bool)arg1;
- (id)withAdLoadStatus:(long long)arg1;
- (id)withAdProductType:(unsigned long long)arg1;
- (id)withGroupId:(id)arg1;
- (id)build;

@end

