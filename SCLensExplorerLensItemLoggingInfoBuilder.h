//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SCLensExplorerLensItemLoggingInfoBuilder : NSObject
{
    NSString *_storyId;
    NSString *_requestId;
    unsigned long long _storyKey;
    unsigned long long _index;
    NSString *_pageTypeSpecific;
    NSNumber *_sectionType;
    NSNumber *_itemType;
    unsigned long long _sectionIndex;
    long long _roleType;
}

+ (id)lensExplorerLensItemLoggingInfoFromExistingLensExplorerLensItemLoggingInfo:(id)arg1;
+ (id)lensExplorerLensItemLoggingInfo;
- (void).cxx_destruct;
- (id)withRoleType:(long long)arg1;
- (id)withSectionIndex:(unsigned long long)arg1;
- (id)withItemType:(id)arg1;
- (id)withSectionType:(id)arg1;
- (id)withPageTypeSpecific:(id)arg1;
- (id)withIndex:(unsigned long long)arg1;
- (id)withStoryKey:(unsigned long long)arg1;
- (id)withRequestId:(id)arg1;
- (id)withStoryId:(id)arg1;
- (id)build;

@end

