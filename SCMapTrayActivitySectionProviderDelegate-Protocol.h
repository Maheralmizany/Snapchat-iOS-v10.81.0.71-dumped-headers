//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMapTrayCameraControllingSectionProviderDelegate-Protocol.h"
#import "SCMapTrayStorySectionProviderDelegate-Protocol.h"

@class NSArray, NSURL, SCMapPerson, SCMapTrayActivitySectionProvider, UIView;

@protocol SCMapTrayActivitySectionProviderDelegate <SCMapTrayStorySectionProviderDelegate, SCMapTrayCameraControllingSectionProviderDelegate>
- (void)mapTrayActivitySectionProvider:(SCMapTrayActivitySectionProvider *)arg1 wantsToOpenUrl:(NSURL *)arg2;
- (void)mapTrayActivitySectionProvider:(SCMapTrayActivitySectionProvider *)arg1 wantsChatForPeople:(NSArray *)arg2 itemIndex:(unsigned long long)arg3 itemAge:(double)arg4;
- (void)mapTrayActivitySectionProvider:(SCMapTrayActivitySectionProvider *)arg1 wantsToShowMiniProfileForPerson:(SCMapPerson *)arg2 itemIndex:(unsigned long long)arg3 itemAge:(double)arg4;
- (void)mapTrayActivitySectionProvider:(SCMapTrayActivitySectionProvider *)arg1 wantsToPresentStoriesForPerson:(SCMapPerson *)arg2 fromSourceView:(UIView *)arg3 itemIndex:(unsigned long long)arg4 itemAge:(double)arg5;
@end

