//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTopicSendToDelegate-Protocol.h"

@class NSString, UIScrollView;

@interface SCTopicSendToManager : NSObject <SCTopicSendToDelegate>
{
    UIScrollView *_containingScrollView;
    _Bool _isTopicSearchPresented;
}

@property(nonatomic) _Bool isTopicSearchPresented; // @synthesize isTopicSearchPresented=_isTopicSearchPresented;
- (void).cxx_destruct;
- (void)topicSendToWillDismissSearch;
- (void)topicsUpdated;
- (struct CGPoint)originForPresentingTopicSearch;
- (void)topicSendToWillPresentSearchWithContainerCell:(id)arg1;
- (id)initWithContainingScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

