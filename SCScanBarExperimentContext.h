//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCScanBarExperimentContext : SCExperimentContext
{
    _Bool _scanBarEnabled;
    _Bool _enabledOnScanButton;
    long long _maxNumberOfItems;
    double _showingIndividualItemDuration;
    double _endingDuration;
}

@property(readonly, nonatomic) _Bool enabledOnScanButton; // @synthesize enabledOnScanButton=_enabledOnScanButton;
@property(readonly, nonatomic) double endingDuration; // @synthesize endingDuration=_endingDuration;
@property(readonly, nonatomic) double showingIndividualItemDuration; // @synthesize showingIndividualItemDuration=_showingIndividualItemDuration;
@property(readonly, nonatomic) long long maxNumberOfItems; // @synthesize maxNumberOfItems=_maxNumberOfItems;
@property(readonly, nonatomic) _Bool scanBarEnabled; // @synthesize scanBarEnabled=_scanBarEnabled;
- (void)setupParameters;
- (id)experimentName;

@end

