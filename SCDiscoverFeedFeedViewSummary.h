//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface SCDiscoverFeedFeedViewSummary : NSObject
{
    NSMutableDictionary *_sectionFeedViewSummaryDict;
    _Bool _hasEnded;
    NSDate *_pageOpenTimestamp;
    NSDictionary *_closingData;
    long long _pageType;
    NSString *_pageTypeSpecific;
}

@property(readonly, nonatomic) NSString *pageTypeSpecific; // @synthesize pageTypeSpecific=_pageTypeSpecific;
@property(readonly, nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(copy, nonatomic) NSDictionary *closingData; // @synthesize closingData=_closingData;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(readonly, nonatomic) NSDate *pageOpenTimestamp; // @synthesize pageOpenTimestamp=_pageOpenTimestamp;
- (void).cxx_destruct;
- (id)_getSectionForKey:(id)arg1;
- (id)feedViewDidEnd;
- (void)sectionFeedView:(id)arg1 setUncompletedStoryCount:(long long)arg2;
- (void)sectionFeedView:(id)arg1 itemsAvailable:(id)arg2;
- (id)initWithOpenTimestamp:(id)arg1 sections:(id)arg2 pageType:(long long)arg3 pageTypeSpecific:(id)arg4;

@end

