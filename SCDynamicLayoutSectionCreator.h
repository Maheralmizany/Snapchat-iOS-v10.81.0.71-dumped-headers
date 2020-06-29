//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchSectionCreating-Protocol.h"

@class NSString, SCCollectionViewSectionDataProvidingScheduler, SCDiscoverFeedSectionExtensionServices, SCExperimentManager, SCLazy, SCStreamingMediaManager, UIColor;
@protocol SCActionHandling, SCDiscoverFeedDataFetching, SCDiscoverFeedSnapAdsSharedInstanceStud, SCDiscoverFeedWhiteSpaceGestureCoordinating, SCImageDownloading, SCLegacyItemDownloading;

@interface SCDynamicLayoutSectionCreator : NSObject <SCSearchSectionCreating>
{
    SCStreamingMediaManager *_streamingMediaManager;
    id <SCActionHandling> _actionHandler;
    id <SCDiscoverFeedDataFetching> _discoverFeedDataFetcher;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _videoDownloader;
    CDUnknownFunctionPointerType _storyViewModelBuilderFunc;
    SCExperimentManager *_experimentManager;
    NSString *_bitmojiAvatarId;
    UIColor *_textColor;
    UIColor *_backgroundColor;
    _Bool _disableWhitespaceTile;
    _Bool _shouldEnablePublisherProfiles;
    _Bool _shouldBounceCarousels;
    id <SCDiscoverFeedSnapAdsSharedInstanceStud> _snapAdsSharedInstance;
    id <SCDiscoverFeedWhiteSpaceGestureCoordinating> _gestureCoordinator;
    SCCollectionViewSectionDataProvidingScheduler *_dataProvidingScheduler;
    id <SCActionHandling> _sectionHeaderActionHandler;
    SCLazy *_bloopsAPI;
    SCDiscoverFeedSectionExtensionServices *_sectionExtensionServices;
}

@property(retain, nonatomic) SCDiscoverFeedSectionExtensionServices *sectionExtensionServices; // @synthesize sectionExtensionServices=_sectionExtensionServices;
- (void).cxx_destruct;
- (id)sectionForDescriptor:(id)arg1;
- (id)initWithActionHandler:(id)arg1 discoverFeedDataFetcher:(id)arg2 storyViewModelBuilderFunc:(CDUnknownFunctionPointerType)arg3 imageDownloader:(id)arg4 videoDownloader:(id)arg5 experimentManager:(id)arg6 bitmojiAvatarId:(id)arg7 textColor:(id)arg8 backgroundColor:(id)arg9 shouldEnablePublisherProfiles:(_Bool)arg10 shouldBounceCarousels:(_Bool)arg11 snapAdsSharedInstance:(id)arg12 gestureCoordinator:(id)arg13 streamingMediaManager:(id)arg14 sectionHeaderActionHandler:(id)arg15 bloopsAPI:(id)arg16;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

