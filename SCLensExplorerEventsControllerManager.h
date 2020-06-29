//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLock, NSMutableDictionary, SCLensExplorerDataStoreFactory, SCLensExplorerSectionIndexProvider, SCQueuePerformer;
@protocol SCLensExplorerDependencyProviderProtocol, SCLensExplorerLoggerProtocol;

@interface SCLensExplorerEventsControllerManager : NSObject
{
    id <SCLensExplorerDependencyProviderProtocol> _dependencyProvider;
    SCLensExplorerDataStoreFactory *_dataStoreFactory;
    SCLensExplorerSectionIndexProvider *_sectionIndexProvider;
    NSMutableDictionary *_lensCategoryEventsController;
    NSLock *_eventsControllerLock;
    NSArray *_eventControllers;
    SCQueuePerformer *_performer;
    id <SCLensExplorerLoggerProtocol> _rankingLogger;
}

@property(retain, nonatomic) id <SCLensExplorerLoggerProtocol> rankingLogger; // @synthesize rankingLogger=_rankingLogger;
@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSArray *eventControllers; // @synthesize eventControllers=_eventControllers;
- (void).cxx_destruct;
- (void)saveLongImpressions;
- (void)flush;
- (id)categoryEventsControllerForSectionIdentifier:(id)arg1;
- (id)categoryEventsControllerForLensCategory:(unsigned long long)arg1;
- (id)initWithDependencyProvider:(id)arg1 dataStoreFactory:(id)arg2;

@end
