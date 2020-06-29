//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCustomStoriesUpdateListener-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"
#import "SCMyUnifiedProfileSnapProSectionDescriptorProviderDelegate-Protocol.h"
#import "SCStoriesModelUpdateListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedProfileSectionDescriptorProviding-Protocol.h"

@class NSString, SCExperimentManager, SCMyUnifiedProfileSnapProSectionDescriptorProvider;
@protocol SCUnifiedProfileSectionDescriptorProvidingDelegate;

@interface SCMyUnifiedProfileSectionDescriptorProvider : NSObject <SCStoriesModelUpdateListener, SCMyUnifiedProfileSnapProSectionDescriptorProviderDelegate, SCTraceEnabled, SCDataCoordinatorListener, SCCustomStoriesUpdateListener, SCUnifiedProfileSectionDescriptorProviding>
{
    SCMyUnifiedProfileSnapProSectionDescriptorProvider *_snapProSectionDescriptorProvider;
    SCExperimentManager *_experimentManager;
    _Bool _showMap;
    id <SCUnifiedProfileSectionDescriptorProvidingDelegate> _delegate;
}

@property(nonatomic) __weak id <SCUnifiedProfileSectionDescriptorProvidingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_reloadSection;
- (void)didUpdatePostableStories;
- (void)didUpdateCustomStoriesWithPublicationIds:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)snapProSectionDescriptorProviderDidUpdateSectionDesciptors:(id)arg1;
- (void)storiesModelDidUpdateWithParams:(id)arg1;
- (id)_storiesSections;
- (void)fetchSectionDescriptors:(CDUnknownBlockType)arg1 updatingQueue:(id)arg2;
- (id)initWithUserSession:(id)arg1 actionHandler:(id)arg2 showMap:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

