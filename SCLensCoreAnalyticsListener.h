//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSAAnalyticsComponentListener-Protocol.h"
#import "SCLensUIUpdateListener-Protocol.h"

@class NSString;

@interface SCLensCoreAnalyticsListener : NSObject <LSAAnalyticsComponentListener, SCLensUIUpdateListener>
{
    NSString *_selectedLensId;
    NSString *_selectedContentId;
}

@property(copy, nonatomic) NSString *selectedContentId; // @synthesize selectedContentId=_selectedContentId;
- (void).cxx_destruct;
- (void)willShowLensesWithContext:(unsigned long long)arg1;
- (void)willDisplayLens:(id)arg1 withContext:(unsigned long long)arg2;
- (void)didUpdateActiveLensOrder:(id)arg1 withContext:(unsigned long long)arg2;
- (void)didSelectLens:(id)arg1 withContext:(unsigned long long)arg2;
- (void)didHideLensesWithContext:(unsigned long long)arg1;
- (void)didEndDisplayingLens:(id)arg1 withContext:(unsigned long long)arg2;
- (void)analyticsComponent:(id)arg1 didPreparePerformanceAnalyticsReport:(id)arg2;
- (void)analyticsComponent:(id)arg1 didPrepareEventAnalyticsReport:(id)arg2 effectId:(id)arg3;
- (void)analyticsComponent:(id)arg1 didChangeContent:(id)arg2 effectId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

