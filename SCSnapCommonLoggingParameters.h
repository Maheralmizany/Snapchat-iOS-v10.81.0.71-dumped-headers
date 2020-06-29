//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSDate, NSMutableSet, NSNumber, NSSet, NSString, SCACreativeKitSnapMetadata, SCFilterCarouselLoggingParameters, SCFilterViewMetrics, SCGalleryUserContext;

@interface SCSnapCommonLoggingParameters : NSObject <NSCoding, NSCopying>
{
    _Bool _withAnimated;
    _Bool _drawing;
    _Bool _cropping;
    _Bool _withGallery;
    _Bool _withMyStory;
    _Bool _withOurStory;
    _Bool _withSnap;
    _Bool _withLocationEnabled;
    _Bool _savedToGalleryByScreenshot;
    _Bool _savedToGalleryByScreenRecording;
    _Bool _reply;
    _Bool _flashOn;
    _Bool _frontCamera;
    _Bool _hasLabel;
    _Bool _lowLightBoostEnabledBeforeCapture;
    _Bool _handsFree;
    _Bool _withZooming;
    _Bool _isBatchCapture;
    _Bool _trimmed;
    _Bool _hasSplit;
    _Bool _hasIndividualCreativeTools;
    _Bool _hasGeoLens;
    _Bool _hasSponsoredLens;
    _Bool _captionTracking;
    _Bool _captionToolIsOpened;
    _Bool _filterReverse;
    _Bool _snapTimeIsLoop;
    _Bool _shouldSaveToMemories;
    _Bool _snapDidSendToChat;
    _Bool _snapDidPostToStory;
    _Bool _snapDidSaveAsCopy;
    _Bool _snapDidSaveToReplace;
    _Bool _snapIsFromSearch;
    _Bool _meo;
    _Bool _hasCreative;
    _Bool _drawToolButtonClicked;
    _Bool _emojiBrushClicked;
    _Bool _attachmentToolButtonClicked;
    _Bool _timerToolButtonClicked;
    _Bool _soundToolButtonClicked;
    _Bool _chatReplyAddMoreFriendButtonClicked;
    _Bool _postStoryButtonClicked;
    _Bool _hasBackgroundFilter;
    _Bool _drawToolColorChanged;
    _Bool _withAttachment;
    _Bool _soundToolEffectChanged;
    _Bool _visualFilterIsSeen;
    _Bool _withFilterPeeking;
    _Bool _withAdjustingExposure;
    _Bool _withAdjustingFocus;
    _Bool _fromSendTo;
    _Bool _withSnapReply;
    _Bool _withRecoveredMedia;
    _Bool _withMagicWandShown;
    _Bool _withMagicWandApplied;
    _Bool _withMagicWandCancelled;
    _Bool _magicMomentApplied;
    float _viewTime;
    float _mediaDuration;
    long long _animatedStickerCount;
    long long _animatedFilterCount;
    NSNumber *_withMyStoryPrivacyOverride;
    long long _caption;
    long long _filterIndexCount;
    long long _filterSeenCount;
    long long _filterIndexPos;
    long long _recipientCount;
    long long _invitedRecipientCount;
    long long _storyPostCount;
    long long _source;
    long long _productMediaType;
    NSString *_encryptedGeoData;
    NSString *_filterGeoId;
    NSString *_filterGeoIdList;
    NSString *_filterInfo;
    NSMutableSet *_unlockableStickers;
    NSString *_geoFilterDynamicContextSources;
    NSString *_filterVisual;
    NSString *_lagunaUserAgent;
    NSString *_lagunaDeviceId;
    NSString *_shareChannel;
    long long _lowLightStatus;
    long long _cameraFlipsWhileRecording;
    long long _mediaType;
    long long _cameraSource;
    long long _cameraMode;
    long long _gridModeState;
    long long _flashTriggerSource;
    long long _captureSource;
    double _zoomingLevel;
    long long _multiSnapCount;
    long long _multiSnapIndex;
    long long _deletedSegments;
    long long _multiSnapPreviewCount;
    long long _multiSnapPreviewIndex;
    long long _multiSnapOutputCount;
    long long _multiSnapOutputIndex;
    NSString *_lensId;
    NSString *_lensOptionId;
    long long _lensSource;
    long long _faceFrontCameraCount;
    long long _faceBackCameraCount;
    long long _lensIndexPos;
    long long _lensIndexCount;
    NSString *_lensBundleUrl;
    NSArray *_lensConfigurations;
    NSString *_snappableFunnelIdAndDepth;
    long long _captionAddCount;
    long long _captionUseCount;
    long long _captionDeletionCount;
    NSString *_captionStyleList;
    long long _captionStylesLoadingTime;
    long long _tagFromCarouselCount;
    long long _tagCount;
    long long _unverifiedTagCount;
    NSString *_staticCaptionPlacePositions;
    NSString *_staticCaptionWithTagPlacePositions;
    NSString *_captionScales;
    long long _filterMotion;
    long long _swipeCount;
    NSString *_snapSessionId;
    NSDate *_startRecordingTimestamp;
    NSString *_captureSessionId;
    long long _firstSwipeDirection;
    SCFilterViewMetrics *_infoFilterViewMetrics;
    NSDate *_lastFilterRenderTime;
    NSString *_filterRenderTimes;
    NSNumber *_filterInfoValue;
    long long _filterStreakValue;
    long long _filterStreakType;
    SCFilterCarouselLoggingParameters *_filterCarouselLoggingParameters;
    long long _saveCount;
    SCGalleryUserContext *_galleryUserContext;
    long long _gallerySendSource;
    NSString *_destinations;
    long long _galleryMediaType;
    long long _orientation;
    long long _entryType;
    NSString *_entryExternalId;
    NSString *_galleryCollectionCategory;
    unsigned long long _visitSendToCount;
    long long _stickerCount;
    long long _stickerTrackingCount;
    long long _stickerDeletionCount;
    long long _stickerAutoGeneratedUsageCount;
    long long _emojiStickersCount;
    long long _bitmojiStickersCount;
    long long _bitmojiGeoStickersCount;
    long long _snapchatStickersCount;
    long long _emojiStickersFromRecentCount;
    long long _bitmojiStickersFromRecentCount;
    long long _bitmojiGeoStickersFromRecentCount;
    long long _snapchatStickersFromRecentCount;
    long long _stickerFromSearchCount;
    long long _stickerUserEnterSearchCount;
    long long _pretypeStickerTagSelectCount;
    long long _prefixMatchStickerTagSelectCount;
    long long _infoStickersCount;
    long long _contextualStickersCount;
    long long _infoStickerTapCount;
    long long _unlockableStickerCount;
    long long _giphyStickerCount;
    long long _gameSnippetStickerCount;
    NSString *_emojiStickersList;
    NSString *_bitmojiStickersList;
    NSString *_bitmojiGeoStickersList;
    NSString *_snapchatStickersList;
    NSString *_infoStickersList;
    NSString *_contextualStickersList;
    NSString *_unlockableStickerList;
    NSString *_giphyStickerList;
    NSString *_gameSnippetStickerList;
    NSSet *_stickerPackIds;
    NSString *_staticStickerPlacePositions;
    double _stickerMaxScale;
    NSString *_encodedStickers;
    NSString *_stickerCanvasId;
    long long _customStickerCreationCount;
    long long _customStickerDeletionCount;
    long long _customStickerSelectionCount;
    long long _customStickerSelectionFromRecentCount;
    NSDate *_snapCreateTime;
    NSString *_correspondentIdsString;
    NSString *_mischiefIdsString;
    NSString *_snapcraftStyleId;
    unsigned long long _tapCount;
    double _filterVenueYOffset;
    unsigned long long _venueTapIndex;
    NSString *_venueID;
    NSString *_drawToolColorsHexString;
    unsigned long long _drawToolUndoButtonTapCount;
    long long _brushResizeCount;
    NSString *_brushStroke;
    NSString *_drawingStartPositions;
    long long _drawingV2PaletteChangeCount;
    NSString *_drawingV2PalettesUsed;
    long long _drawingV2StrawPickCount;
    NSString *_audioFilterStyleId;
    long long _videoMode;
    long long _groupStoriesSendCount;
    long long _availableGroupStoriesCount;
    long long _expiredGroupStoryPostCount;
    long long _availableExpiredGroupStoryCount;
    long long _officialStoriesSendCount;
    long long _sharedStoriesSendCount;
    long long _viewMoreStoriesTapCount;
    long long _filterStackingButtonAddCount;
    long long _filterStackingButtonRemoveCount;
    NSString *_autoCreativeFilterId;
    NSString *_entryId;
    NSString *_snapId;
    long long _mediaFormat;
    NSString *_spectaclesContentId;
    long long _previewExitType;
    double _shutterSpeed;
    double _ISO;
    double _aperture;
    double _brightness;
    NSString *_topsnapAdId;
    NSString *_topsnapAdRequestClientId;
    long long _filterSource;
    SCACreativeKitSnapMetadata *_creativeKitSnapMetadata;
    unsigned long long _screenOverlayDataSize;
    long long _roleType;
    NSString *_storyInviteIdHashed;
    NSNumber *_magicMomentSliderPosition;
    NSNumber *_magicMomentTriedCount;
    NSNumber *_version;
}

@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(nonatomic) _Bool magicMomentApplied; // @synthesize magicMomentApplied=_magicMomentApplied;
@property(copy, nonatomic) NSNumber *magicMomentTriedCount; // @synthesize magicMomentTriedCount=_magicMomentTriedCount;
@property(copy, nonatomic) NSNumber *magicMomentSliderPosition; // @synthesize magicMomentSliderPosition=_magicMomentSliderPosition;
@property(copy, nonatomic) NSString *storyInviteIdHashed; // @synthesize storyInviteIdHashed=_storyInviteIdHashed;
@property(nonatomic) long long roleType; // @synthesize roleType=_roleType;
@property(nonatomic) _Bool withMagicWandCancelled; // @synthesize withMagicWandCancelled=_withMagicWandCancelled;
@property(nonatomic) _Bool withMagicWandApplied; // @synthesize withMagicWandApplied=_withMagicWandApplied;
@property(nonatomic) _Bool withMagicWandShown; // @synthesize withMagicWandShown=_withMagicWandShown;
@property(nonatomic) unsigned long long screenOverlayDataSize; // @synthesize screenOverlayDataSize=_screenOverlayDataSize;
@property(nonatomic) _Bool withRecoveredMedia; // @synthesize withRecoveredMedia=_withRecoveredMedia;
@property(copy, nonatomic) SCACreativeKitSnapMetadata *creativeKitSnapMetadata; // @synthesize creativeKitSnapMetadata=_creativeKitSnapMetadata;
@property(nonatomic) _Bool withSnapReply; // @synthesize withSnapReply=_withSnapReply;
@property(nonatomic) long long filterSource; // @synthesize filterSource=_filterSource;
@property(copy, nonatomic) NSString *topsnapAdRequestClientId; // @synthesize topsnapAdRequestClientId=_topsnapAdRequestClientId;
@property(copy, nonatomic) NSString *topsnapAdId; // @synthesize topsnapAdId=_topsnapAdId;
@property(nonatomic) _Bool fromSendTo; // @synthesize fromSendTo=_fromSendTo;
@property(nonatomic) _Bool withAdjustingFocus; // @synthesize withAdjustingFocus=_withAdjustingFocus;
@property(nonatomic) _Bool withAdjustingExposure; // @synthesize withAdjustingExposure=_withAdjustingExposure;
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
@property(nonatomic) double aperture; // @synthesize aperture=_aperture;
@property(nonatomic) double ISO; // @synthesize ISO=_ISO;
@property(nonatomic) double shutterSpeed; // @synthesize shutterSpeed=_shutterSpeed;
@property(nonatomic) long long previewExitType; // @synthesize previewExitType=_previewExitType;
@property(copy, nonatomic) NSString *spectaclesContentId; // @synthesize spectaclesContentId=_spectaclesContentId;
@property(nonatomic) long long mediaFormat; // @synthesize mediaFormat=_mediaFormat;
@property(copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(copy, nonatomic) NSString *entryId; // @synthesize entryId=_entryId;
@property(nonatomic) _Bool withFilterPeeking; // @synthesize withFilterPeeking=_withFilterPeeking;
@property(copy, nonatomic) NSString *autoCreativeFilterId; // @synthesize autoCreativeFilterId=_autoCreativeFilterId;
@property(nonatomic) long long filterStackingButtonRemoveCount; // @synthesize filterStackingButtonRemoveCount=_filterStackingButtonRemoveCount;
@property(nonatomic) long long filterStackingButtonAddCount; // @synthesize filterStackingButtonAddCount=_filterStackingButtonAddCount;
@property(nonatomic) long long viewMoreStoriesTapCount; // @synthesize viewMoreStoriesTapCount=_viewMoreStoriesTapCount;
@property(nonatomic) long long sharedStoriesSendCount; // @synthesize sharedStoriesSendCount=_sharedStoriesSendCount;
@property(nonatomic) long long officialStoriesSendCount; // @synthesize officialStoriesSendCount=_officialStoriesSendCount;
@property(nonatomic) long long availableExpiredGroupStoryCount; // @synthesize availableExpiredGroupStoryCount=_availableExpiredGroupStoryCount;
@property(nonatomic) long long expiredGroupStoryPostCount; // @synthesize expiredGroupStoryPostCount=_expiredGroupStoryPostCount;
@property(nonatomic) long long availableGroupStoriesCount; // @synthesize availableGroupStoriesCount=_availableGroupStoriesCount;
@property(nonatomic) long long groupStoriesSendCount; // @synthesize groupStoriesSendCount=_groupStoriesSendCount;
@property(nonatomic) _Bool visualFilterIsSeen; // @synthesize visualFilterIsSeen=_visualFilterIsSeen;
@property(nonatomic) long long videoMode; // @synthesize videoMode=_videoMode;
@property(nonatomic) _Bool soundToolEffectChanged; // @synthesize soundToolEffectChanged=_soundToolEffectChanged;
@property(copy, nonatomic) NSString *audioFilterStyleId; // @synthesize audioFilterStyleId=_audioFilterStyleId;
@property(nonatomic) _Bool withAttachment; // @synthesize withAttachment=_withAttachment;
@property(nonatomic) long long drawingV2StrawPickCount; // @synthesize drawingV2StrawPickCount=_drawingV2StrawPickCount;
@property(copy, nonatomic) NSString *drawingV2PalettesUsed; // @synthesize drawingV2PalettesUsed=_drawingV2PalettesUsed;
@property(nonatomic) long long drawingV2PaletteChangeCount; // @synthesize drawingV2PaletteChangeCount=_drawingV2PaletteChangeCount;
@property(copy, nonatomic) NSString *drawingStartPositions; // @synthesize drawingStartPositions=_drawingStartPositions;
@property(copy, nonatomic) NSString *brushStroke; // @synthesize brushStroke=_brushStroke;
@property(nonatomic) long long brushResizeCount; // @synthesize brushResizeCount=_brushResizeCount;
@property(nonatomic) unsigned long long drawToolUndoButtonTapCount; // @synthesize drawToolUndoButtonTapCount=_drawToolUndoButtonTapCount;
@property(nonatomic) _Bool drawToolColorChanged; // @synthesize drawToolColorChanged=_drawToolColorChanged;
@property(copy, nonatomic) NSString *drawToolColorsHexString; // @synthesize drawToolColorsHexString=_drawToolColorsHexString;
@property(nonatomic) _Bool hasBackgroundFilter; // @synthesize hasBackgroundFilter=_hasBackgroundFilter;
@property(copy, nonatomic) NSString *venueID; // @synthesize venueID=_venueID;
@property(nonatomic) unsigned long long venueTapIndex; // @synthesize venueTapIndex=_venueTapIndex;
@property(nonatomic) double filterVenueYOffset; // @synthesize filterVenueYOffset=_filterVenueYOffset;
@property(nonatomic) unsigned long long tapCount; // @synthesize tapCount=_tapCount;
@property(copy, nonatomic) NSString *snapcraftStyleId; // @synthesize snapcraftStyleId=_snapcraftStyleId;
@property(copy, nonatomic) NSString *mischiefIdsString; // @synthesize mischiefIdsString=_mischiefIdsString;
@property(copy, nonatomic) NSString *correspondentIdsString; // @synthesize correspondentIdsString=_correspondentIdsString;
@property(copy, nonatomic) NSDate *snapCreateTime; // @synthesize snapCreateTime=_snapCreateTime;
@property(nonatomic) _Bool postStoryButtonClicked; // @synthesize postStoryButtonClicked=_postStoryButtonClicked;
@property(nonatomic) _Bool chatReplyAddMoreFriendButtonClicked; // @synthesize chatReplyAddMoreFriendButtonClicked=_chatReplyAddMoreFriendButtonClicked;
@property(nonatomic) _Bool soundToolButtonClicked; // @synthesize soundToolButtonClicked=_soundToolButtonClicked;
@property(nonatomic) _Bool timerToolButtonClicked; // @synthesize timerToolButtonClicked=_timerToolButtonClicked;
@property(nonatomic) _Bool attachmentToolButtonClicked; // @synthesize attachmentToolButtonClicked=_attachmentToolButtonClicked;
@property(nonatomic) _Bool emojiBrushClicked; // @synthesize emojiBrushClicked=_emojiBrushClicked;
@property(nonatomic) _Bool drawToolButtonClicked; // @synthesize drawToolButtonClicked=_drawToolButtonClicked;
@property(nonatomic) long long customStickerSelectionFromRecentCount; // @synthesize customStickerSelectionFromRecentCount=_customStickerSelectionFromRecentCount;
@property(nonatomic) long long customStickerSelectionCount; // @synthesize customStickerSelectionCount=_customStickerSelectionCount;
@property(nonatomic) long long customStickerDeletionCount; // @synthesize customStickerDeletionCount=_customStickerDeletionCount;
@property(nonatomic) long long customStickerCreationCount; // @synthesize customStickerCreationCount=_customStickerCreationCount;
@property(copy, nonatomic) NSString *stickerCanvasId; // @synthesize stickerCanvasId=_stickerCanvasId;
@property(copy, nonatomic) NSString *encodedStickers; // @synthesize encodedStickers=_encodedStickers;
@property(nonatomic) double stickerMaxScale; // @synthesize stickerMaxScale=_stickerMaxScale;
@property(copy, nonatomic) NSString *staticStickerPlacePositions; // @synthesize staticStickerPlacePositions=_staticStickerPlacePositions;
@property(copy, nonatomic) NSSet *stickerPackIds; // @synthesize stickerPackIds=_stickerPackIds;
@property(copy, nonatomic) NSString *gameSnippetStickerList; // @synthesize gameSnippetStickerList=_gameSnippetStickerList;
@property(copy, nonatomic) NSString *giphyStickerList; // @synthesize giphyStickerList=_giphyStickerList;
@property(copy, nonatomic) NSString *unlockableStickerList; // @synthesize unlockableStickerList=_unlockableStickerList;
@property(copy, nonatomic) NSString *contextualStickersList; // @synthesize contextualStickersList=_contextualStickersList;
@property(copy, nonatomic) NSString *infoStickersList; // @synthesize infoStickersList=_infoStickersList;
@property(copy, nonatomic) NSString *snapchatStickersList; // @synthesize snapchatStickersList=_snapchatStickersList;
@property(copy, nonatomic) NSString *bitmojiGeoStickersList; // @synthesize bitmojiGeoStickersList=_bitmojiGeoStickersList;
@property(copy, nonatomic) NSString *bitmojiStickersList; // @synthesize bitmojiStickersList=_bitmojiStickersList;
@property(copy, nonatomic) NSString *emojiStickersList; // @synthesize emojiStickersList=_emojiStickersList;
@property(nonatomic) long long gameSnippetStickerCount; // @synthesize gameSnippetStickerCount=_gameSnippetStickerCount;
@property(nonatomic) long long giphyStickerCount; // @synthesize giphyStickerCount=_giphyStickerCount;
@property(nonatomic) long long unlockableStickerCount; // @synthesize unlockableStickerCount=_unlockableStickerCount;
@property(nonatomic) long long infoStickerTapCount; // @synthesize infoStickerTapCount=_infoStickerTapCount;
@property(nonatomic) long long contextualStickersCount; // @synthesize contextualStickersCount=_contextualStickersCount;
@property(nonatomic) long long infoStickersCount; // @synthesize infoStickersCount=_infoStickersCount;
@property(nonatomic) long long prefixMatchStickerTagSelectCount; // @synthesize prefixMatchStickerTagSelectCount=_prefixMatchStickerTagSelectCount;
@property(nonatomic) long long pretypeStickerTagSelectCount; // @synthesize pretypeStickerTagSelectCount=_pretypeStickerTagSelectCount;
@property(nonatomic) long long stickerUserEnterSearchCount; // @synthesize stickerUserEnterSearchCount=_stickerUserEnterSearchCount;
@property(nonatomic) long long stickerFromSearchCount; // @synthesize stickerFromSearchCount=_stickerFromSearchCount;
@property(nonatomic) long long snapchatStickersFromRecentCount; // @synthesize snapchatStickersFromRecentCount=_snapchatStickersFromRecentCount;
@property(nonatomic) long long bitmojiGeoStickersFromRecentCount; // @synthesize bitmojiGeoStickersFromRecentCount=_bitmojiGeoStickersFromRecentCount;
@property(nonatomic) long long bitmojiStickersFromRecentCount; // @synthesize bitmojiStickersFromRecentCount=_bitmojiStickersFromRecentCount;
@property(nonatomic) long long emojiStickersFromRecentCount; // @synthesize emojiStickersFromRecentCount=_emojiStickersFromRecentCount;
@property(nonatomic) long long snapchatStickersCount; // @synthesize snapchatStickersCount=_snapchatStickersCount;
@property(nonatomic) long long bitmojiGeoStickersCount; // @synthesize bitmojiGeoStickersCount=_bitmojiGeoStickersCount;
@property(nonatomic) long long bitmojiStickersCount; // @synthesize bitmojiStickersCount=_bitmojiStickersCount;
@property(nonatomic) long long emojiStickersCount; // @synthesize emojiStickersCount=_emojiStickersCount;
@property(nonatomic) long long stickerAutoGeneratedUsageCount; // @synthesize stickerAutoGeneratedUsageCount=_stickerAutoGeneratedUsageCount;
@property(nonatomic) long long stickerDeletionCount; // @synthesize stickerDeletionCount=_stickerDeletionCount;
@property(nonatomic) long long stickerTrackingCount; // @synthesize stickerTrackingCount=_stickerTrackingCount;
@property(nonatomic) long long stickerCount; // @synthesize stickerCount=_stickerCount;
@property(nonatomic) unsigned long long visitSendToCount; // @synthesize visitSendToCount=_visitSendToCount;
@property(retain, nonatomic) NSString *galleryCollectionCategory; // @synthesize galleryCollectionCategory=_galleryCollectionCategory;
@property(retain, nonatomic) NSString *entryExternalId; // @synthesize entryExternalId=_entryExternalId;
@property(nonatomic) _Bool hasCreative; // @synthesize hasCreative=_hasCreative;
@property(nonatomic) _Bool meo; // @synthesize meo=_meo;
@property(nonatomic) long long entryType; // @synthesize entryType=_entryType;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long galleryMediaType; // @synthesize galleryMediaType=_galleryMediaType;
@property(retain, nonatomic) NSString *destinations; // @synthesize destinations=_destinations;
@property(nonatomic) long long gallerySendSource; // @synthesize gallerySendSource=_gallerySendSource;
@property(retain, nonatomic) SCGalleryUserContext *galleryUserContext; // @synthesize galleryUserContext=_galleryUserContext;
@property(nonatomic) _Bool snapIsFromSearch; // @synthesize snapIsFromSearch=_snapIsFromSearch;
@property(nonatomic) _Bool snapDidSaveToReplace; // @synthesize snapDidSaveToReplace=_snapDidSaveToReplace;
@property(nonatomic) _Bool snapDidSaveAsCopy; // @synthesize snapDidSaveAsCopy=_snapDidSaveAsCopy;
@property(nonatomic) _Bool snapDidPostToStory; // @synthesize snapDidPostToStory=_snapDidPostToStory;
@property(nonatomic) _Bool snapDidSendToChat; // @synthesize snapDidSendToChat=_snapDidSendToChat;
@property(nonatomic) long long saveCount; // @synthesize saveCount=_saveCount;
@property(nonatomic) _Bool shouldSaveToMemories; // @synthesize shouldSaveToMemories=_shouldSaveToMemories;
@property(copy, nonatomic) SCFilterCarouselLoggingParameters *filterCarouselLoggingParameters; // @synthesize filterCarouselLoggingParameters=_filterCarouselLoggingParameters;
@property(nonatomic) _Bool snapTimeIsLoop; // @synthesize snapTimeIsLoop=_snapTimeIsLoop;
@property(nonatomic) long long filterStreakType; // @synthesize filterStreakType=_filterStreakType;
@property(nonatomic) long long filterStreakValue; // @synthesize filterStreakValue=_filterStreakValue;
@property(copy, nonatomic) NSNumber *filterInfoValue; // @synthesize filterInfoValue=_filterInfoValue;
@property(copy, nonatomic) NSString *filterRenderTimes; // @synthesize filterRenderTimes=_filterRenderTimes;
@property(copy, nonatomic) NSDate *lastFilterRenderTime; // @synthesize lastFilterRenderTime=_lastFilterRenderTime;
@property(retain, nonatomic) SCFilterViewMetrics *infoFilterViewMetrics; // @synthesize infoFilterViewMetrics=_infoFilterViewMetrics;
@property(nonatomic) long long firstSwipeDirection; // @synthesize firstSwipeDirection=_firstSwipeDirection;
@property(copy, nonatomic) NSString *captureSessionId; // @synthesize captureSessionId=_captureSessionId;
@property(retain, nonatomic) NSDate *startRecordingTimestamp; // @synthesize startRecordingTimestamp=_startRecordingTimestamp;
@property(copy, nonatomic) NSString *snapSessionId; // @synthesize snapSessionId=_snapSessionId;
@property(nonatomic) long long swipeCount; // @synthesize swipeCount=_swipeCount;
@property(nonatomic) _Bool filterReverse; // @synthesize filterReverse=_filterReverse;
@property(nonatomic) long long filterMotion; // @synthesize filterMotion=_filterMotion;
@property(copy, nonatomic) NSString *captionScales; // @synthesize captionScales=_captionScales;
@property(copy, nonatomic) NSString *staticCaptionWithTagPlacePositions; // @synthesize staticCaptionWithTagPlacePositions=_staticCaptionWithTagPlacePositions;
@property(copy, nonatomic) NSString *staticCaptionPlacePositions; // @synthesize staticCaptionPlacePositions=_staticCaptionPlacePositions;
@property(nonatomic) long long unverifiedTagCount; // @synthesize unverifiedTagCount=_unverifiedTagCount;
@property(nonatomic) long long tagCount; // @synthesize tagCount=_tagCount;
@property(nonatomic) long long tagFromCarouselCount; // @synthesize tagFromCarouselCount=_tagFromCarouselCount;
@property(nonatomic) _Bool captionToolIsOpened; // @synthesize captionToolIsOpened=_captionToolIsOpened;
@property(nonatomic) long long captionStylesLoadingTime; // @synthesize captionStylesLoadingTime=_captionStylesLoadingTime;
@property(copy, nonatomic) NSString *captionStyleList; // @synthesize captionStyleList=_captionStyleList;
@property(nonatomic) long long captionDeletionCount; // @synthesize captionDeletionCount=_captionDeletionCount;
@property(nonatomic) long long captionUseCount; // @synthesize captionUseCount=_captionUseCount;
@property(nonatomic) long long captionAddCount; // @synthesize captionAddCount=_captionAddCount;
@property(nonatomic) _Bool captionTracking; // @synthesize captionTracking=_captionTracking;
@property(copy, nonatomic) NSString *snappableFunnelIdAndDepth; // @synthesize snappableFunnelIdAndDepth=_snappableFunnelIdAndDepth;
@property(nonatomic) _Bool hasSponsoredLens; // @synthesize hasSponsoredLens=_hasSponsoredLens;
@property(nonatomic) _Bool hasGeoLens; // @synthesize hasGeoLens=_hasGeoLens;
@property(copy, nonatomic) NSArray *lensConfigurations; // @synthesize lensConfigurations=_lensConfigurations;
@property(copy, nonatomic) NSString *lensBundleUrl; // @synthesize lensBundleUrl=_lensBundleUrl;
@property(nonatomic) long long lensIndexCount; // @synthesize lensIndexCount=_lensIndexCount;
@property(nonatomic) long long lensIndexPos; // @synthesize lensIndexPos=_lensIndexPos;
@property(nonatomic) long long faceBackCameraCount; // @synthesize faceBackCameraCount=_faceBackCameraCount;
@property(nonatomic) long long faceFrontCameraCount; // @synthesize faceFrontCameraCount=_faceFrontCameraCount;
@property(nonatomic) long long lensSource; // @synthesize lensSource=_lensSource;
@property(copy, nonatomic) NSString *lensOptionId; // @synthesize lensOptionId=_lensOptionId;
@property(copy, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(nonatomic) long long multiSnapOutputIndex; // @synthesize multiSnapOutputIndex=_multiSnapOutputIndex;
@property(nonatomic) long long multiSnapOutputCount; // @synthesize multiSnapOutputCount=_multiSnapOutputCount;
@property(nonatomic) long long multiSnapPreviewIndex; // @synthesize multiSnapPreviewIndex=_multiSnapPreviewIndex;
@property(nonatomic) long long multiSnapPreviewCount; // @synthesize multiSnapPreviewCount=_multiSnapPreviewCount;
@property(nonatomic) _Bool hasIndividualCreativeTools; // @synthesize hasIndividualCreativeTools=_hasIndividualCreativeTools;
@property(nonatomic) _Bool hasSplit; // @synthesize hasSplit=_hasSplit;
@property(nonatomic) _Bool trimmed; // @synthesize trimmed=_trimmed;
@property(nonatomic) long long deletedSegments; // @synthesize deletedSegments=_deletedSegments;
@property(nonatomic) long long multiSnapIndex; // @synthesize multiSnapIndex=_multiSnapIndex;
@property(nonatomic) long long multiSnapCount; // @synthesize multiSnapCount=_multiSnapCount;
@property(nonatomic) _Bool isBatchCapture; // @synthesize isBatchCapture=_isBatchCapture;
@property(nonatomic) double zoomingLevel; // @synthesize zoomingLevel=_zoomingLevel;
@property(nonatomic) _Bool withZooming; // @synthesize withZooming=_withZooming;
@property(nonatomic) long long captureSource; // @synthesize captureSource=_captureSource;
@property(nonatomic) long long flashTriggerSource; // @synthesize flashTriggerSource=_flashTriggerSource;
@property(nonatomic) long long gridModeState; // @synthesize gridModeState=_gridModeState;
@property(nonatomic) long long cameraMode; // @synthesize cameraMode=_cameraMode;
@property(nonatomic) long long cameraSource; // @synthesize cameraSource=_cameraSource;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) float mediaDuration; // @synthesize mediaDuration=_mediaDuration;
@property(nonatomic) _Bool handsFree; // @synthesize handsFree=_handsFree;
@property(nonatomic) _Bool lowLightBoostEnabledBeforeCapture; // @synthesize lowLightBoostEnabledBeforeCapture=_lowLightBoostEnabledBeforeCapture;
@property(nonatomic) _Bool hasLabel; // @synthesize hasLabel=_hasLabel;
@property(nonatomic) long long cameraFlipsWhileRecording; // @synthesize cameraFlipsWhileRecording=_cameraFlipsWhileRecording;
@property(nonatomic) _Bool frontCamera; // @synthesize frontCamera=_frontCamera;
@property(nonatomic) _Bool flashOn; // @synthesize flashOn=_flashOn;
@property(nonatomic) long long lowLightStatus; // @synthesize lowLightStatus=_lowLightStatus;
@property(retain, nonatomic) NSString *shareChannel; // @synthesize shareChannel=_shareChannel;
@property(copy, nonatomic) NSString *lagunaDeviceId; // @synthesize lagunaDeviceId=_lagunaDeviceId;
@property(copy, nonatomic) NSString *lagunaUserAgent; // @synthesize lagunaUserAgent=_lagunaUserAgent;
@property(copy, nonatomic) NSString *filterVisual; // @synthesize filterVisual=_filterVisual;
@property(copy, nonatomic) NSString *geoFilterDynamicContextSources; // @synthesize geoFilterDynamicContextSources=_geoFilterDynamicContextSources;
@property(copy, nonatomic) NSMutableSet *unlockableStickers; // @synthesize unlockableStickers=_unlockableStickers;
@property(copy, nonatomic) NSString *filterInfo; // @synthesize filterInfo=_filterInfo;
@property(copy, nonatomic) NSString *filterGeoIdList; // @synthesize filterGeoIdList=_filterGeoIdList;
@property(copy, nonatomic) NSString *filterGeoId; // @synthesize filterGeoId=_filterGeoId;
@property(copy, nonatomic) NSString *encryptedGeoData; // @synthesize encryptedGeoData=_encryptedGeoData;
@property(nonatomic) long long productMediaType; // @synthesize productMediaType=_productMediaType;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long storyPostCount; // @synthesize storyPostCount=_storyPostCount;
@property(nonatomic) long long invitedRecipientCount; // @synthesize invitedRecipientCount=_invitedRecipientCount;
@property(nonatomic) long long recipientCount; // @synthesize recipientCount=_recipientCount;
@property(nonatomic) long long filterIndexPos; // @synthesize filterIndexPos=_filterIndexPos;
@property(nonatomic) long long filterSeenCount; // @synthesize filterSeenCount=_filterSeenCount;
@property(nonatomic) long long filterIndexCount; // @synthesize filterIndexCount=_filterIndexCount;
@property(nonatomic) long long caption; // @synthesize caption=_caption;
@property(nonatomic) float viewTime; // @synthesize viewTime=_viewTime;
@property(nonatomic) _Bool reply; // @synthesize reply=_reply;
@property(nonatomic) _Bool savedToGalleryByScreenRecording; // @synthesize savedToGalleryByScreenRecording=_savedToGalleryByScreenRecording;
@property(nonatomic) _Bool savedToGalleryByScreenshot; // @synthesize savedToGalleryByScreenshot=_savedToGalleryByScreenshot;
@property(nonatomic) _Bool withLocationEnabled; // @synthesize withLocationEnabled=_withLocationEnabled;
@property(nonatomic) _Bool withSnap; // @synthesize withSnap=_withSnap;
@property(nonatomic) _Bool withOurStory; // @synthesize withOurStory=_withOurStory;
@property(retain, nonatomic) NSNumber *withMyStoryPrivacyOverride; // @synthesize withMyStoryPrivacyOverride=_withMyStoryPrivacyOverride;
@property(nonatomic) _Bool withMyStory; // @synthesize withMyStory=_withMyStory;
@property(nonatomic) _Bool withGallery; // @synthesize withGallery=_withGallery;
@property(nonatomic) _Bool cropping; // @synthesize cropping=_cropping;
@property(nonatomic) _Bool drawing; // @synthesize drawing=_drawing;
@property(nonatomic) _Bool withAnimated; // @synthesize withAnimated=_withAnimated;
@property(nonatomic) long long animatedFilterCount; // @synthesize animatedFilterCount=_animatedFilterCount;
@property(nonatomic) long long animatedStickerCount; // @synthesize animatedStickerCount=_animatedStickerCount;
- (void).cxx_destruct;
- (id)_convertDictionaryToCreativeKitSnapMetadata:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sceneIntelligenceRequestId;
@property(readonly, copy, nonatomic) NSString *lensInfo;
- (long long)animatedSnapType;
- (id)mediaTypeString;
- (_Bool)hasGeoContents;
- (id)awakeAfterFastCoding;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)willEncodeObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)_legacyUpdateLensDataWithConfiguration:(id)arg1;
- (void)updateLensDataWithConfiguration:(id)arg1;
- (void)updateWithLensLogger:(id)arg1 configuration:(id)arg2;
- (id)toUnlockablesSnapInfo;

@end

