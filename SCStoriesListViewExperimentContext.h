//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCStoriesListViewExperimentContext : SCExperimentContext
{
    NSString *_listViewCapCatetory;
    NSString *_foldCatetory;
    unsigned long long _staticCapNumber;
}

@property(readonly, nonatomic) unsigned long long staticCapNumber; // @synthesize staticCapNumber=_staticCapNumber;
@property(readonly, copy, nonatomic) NSString *foldCatetory; // @synthesize foldCatetory=_foldCatetory;
@property(readonly, copy, nonatomic) NSString *listViewCapCatetory; // @synthesize listViewCapCatetory=_listViewCapCatetory;
- (void).cxx_destruct;
- (void)setupParameters;
- (id)experimentName;

@end

