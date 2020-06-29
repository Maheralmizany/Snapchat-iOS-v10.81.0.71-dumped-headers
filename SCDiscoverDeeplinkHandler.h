//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaPlaylistFetcher-Protocol.h"

@class NSDictionary, NSNumber, NSSet, NSString, SCDeepLinkURL, SCDiscoverChannel, SCDiscoverDSnapExpirationValidator, SCDiscoverEdition, SCDiscoverEditionFetcher, SCUserSession;
@protocol SCDiscoverPublisherProfileDeeplinkHandler, SCDiscoverShowDeeplinkHandler, SCOperaPlaylistFetcherDelegate;

@interface SCDiscoverDeeplinkHandler : NSObject <SCOperaPlaylistFetcher>
{
    NSString *_publisherName;
    NSString *_editionId;
    NSString *_dSnapId;
    NSNumber *_linkableState;
    NSDictionary *_chunkDictionary;
    _Bool _isAd;
    long long _publisherId;
    unsigned long long _subscribeState;
    SCDeepLinkURL *_deepLinkURL;
    unsigned long long _deeplinkType;
    unsigned long long _loadingState;
    NSSet *_selectedDSnapIds;
    SCDiscoverEdition *_resolvedEdition;
    SCUserSession *_userSession;
    _Bool _enableUnskippableAd;
    SCDiscoverDSnapExpirationValidator *_validator;
    SCDiscoverEditionFetcher *_editionFetcher;
    _Bool _shouldStartWithLongform;
    NSString *_deepLinkId;
    unsigned long long _context;
    SCDiscoverChannel *_channel;
    NSDictionary *_additionalInfo;
    id <SCOperaPlaylistFetcherDelegate> _delegate;
    id <SCDiscoverShowDeeplinkHandler> _showHandler;
    id <SCDiscoverPublisherProfileDeeplinkHandler> _publisherProfileHandler;
}

@property(readonly, nonatomic) __weak id <SCDiscoverPublisherProfileDeeplinkHandler> publisherProfileHandler; // @synthesize publisherProfileHandler=_publisherProfileHandler;
@property(readonly, nonatomic) __weak id <SCDiscoverShowDeeplinkHandler> showHandler; // @synthesize showHandler=_showHandler;
@property(nonatomic) __weak id <SCOperaPlaylistFetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(readonly, nonatomic) SCDiscoverChannel *channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) unsigned long long context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *deepLinkId; // @synthesize deepLinkId=_deepLinkId;
@property(readonly, nonatomic) _Bool shouldStartWithLongform; // @synthesize shouldStartWithLongform=_shouldStartWithLongform;
- (void).cxx_destruct;
- (void)setLoadingState:(unsigned long long)arg1;
- (unsigned long long)loadingState;
- (id)_editionFromEdition:(id)arg1 withDSnapIds:(id)arg2;
- (void)_prepareLinkedEdition;
- (void)_validateEditionDeeplink;
- (void)_validateDSnapDeeplink;
- (void)_validateHttpDeeplink;
- (void)_prepareResolvedDeeplinkDataModel;
- (void)_prepareChannelDeeplinkDataModel;
- (void)_prepareEditionDeeplinkDataModel;
- (void)_prepareDSnapDeeplinkDataModel;
- (void)_prepareHttpDeeplinkDataModel;
- (void)fetchPlaylist;
- (id)firstDisplayGroupDataModel;
- (id)resolvedDataModels;
- (id)currentLoadingProperties;
- (void)_deeplinkValidationDidFail;
- (void)_wasDeniedDeepLinkingWithPublisherId:(id)arg1 availability:(unsigned long long)arg2;
- (void)_didSucceedValidatingDeeplink;
- (void)_prepareDeeplinkDataModelBasedOnDeeplinkType;
- (void)_updateDeepLinkType;
- (id)initWithDeeplinkURL:(id)arg1 additionalInfo:(id)arg2 context:(unsigned long long)arg3 selectedDSnapIds:(id)arg4 userSession:(id)arg5 showHandler:(id)arg6 publisherProfileHandler:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
