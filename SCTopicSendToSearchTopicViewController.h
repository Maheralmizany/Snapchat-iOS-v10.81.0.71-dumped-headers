//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCTopicSendToAddTopicsFromSearchDelegate-Protocol.h"
#import "SCTopicSendToSearchTopicsDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, SCSectionBasedCollectionViewUpdater, SCStoriesSelectedTopicsDataSource, SCTopicSendToSearchTopicView, SCTopicSendToSelectedTopicsCollectionViewController, SCTopicSendToSuggestedTopicsDataProvider;
@protocol SCActionHandling, SCStoriesSuggestedTopicsRequesting;

@interface SCTopicSendToSearchTopicViewController : UIViewController <UICollectionViewDelegate, SCTopicSendToAddTopicsFromSearchDelegate, SCTopicSendToSearchTopicsDelegate>
{
    SCTopicSendToSearchTopicView *_searchTopicView;
    SCTopicSendToSelectedTopicsCollectionViewController *_selectedTopicCollectionViewController;
    id <SCActionHandling> _actionHandler;
    SCStoriesSelectedTopicsDataSource *_selectedTopicsDataSource;
    id <SCStoriesSuggestedTopicsRequesting> _suggestedTopicsRequester;
    struct CGRect _containerFrame;
    SCSectionBasedCollectionViewUpdater *_suggestedTopicsCollectionViewUpdater;
    SCTopicSendToSuggestedTopicsDataProvider *_suggestedTopicsDataProvider;
    NSString *_latestQuery;
}

- (void).cxx_destruct;
- (void)addNewTopicAndDismiss:(id)arg1;
- (void)addNewTopic:(id)arg1;
- (void)addTopic:(id)arg1;
- (void)_updateDataProviderTopicsWithReturnedTopics:(id)arg1 selectedTopics:(id)arg2 query:(id)arg3;
- (void)_updateTopics:(id)arg1 query:(id)arg2;
- (void)searchAndUpdateTopicsWithQuery:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithContainerFrame:(struct CGRect)arg1 actionHandler:(id)arg2 suggestedTopicsRequester:(id)arg3 selectedTopicsDataSource:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

