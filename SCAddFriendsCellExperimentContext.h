//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCAddFriendsCellExperimentContext : SCExperimentContext
{
    _Bool _primaryLabelTwoLineEnabled;
    NSString *_longLocalesFlags;
    NSString *_enableNewAddPill;
}

@property(readonly, nonatomic) NSString *enableNewAddPill; // @synthesize enableNewAddPill=_enableNewAddPill;
@property(readonly, nonatomic) NSString *longLocalesFlags; // @synthesize longLocalesFlags=_longLocalesFlags;
@property(readonly, nonatomic) _Bool primaryLabelTwoLineEnabled; // @synthesize primaryLabelTwoLineEnabled=_primaryLabelTwoLineEnabled;
- (void).cxx_destruct;
- (void)setupParameters;
- (id)experimentName;

@end

