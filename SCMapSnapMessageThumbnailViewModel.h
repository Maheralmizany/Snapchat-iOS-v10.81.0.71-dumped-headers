//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMaskedMediaThumbnailViewModel-Protocol.h"
#import "SCChatSingleMediaThumbnailViewModel-Protocol.h"

@class NSDate, NSString, SCBaseMediaThumbnailViewModel, SCMapSnapLocationCardViewModel, UIColor;

@interface SCMapSnapMessageThumbnailViewModel : NSObject <SCChatSingleMediaThumbnailViewModel, SCChatMaskedMediaThumbnailViewModel>
{
    _Bool _isSendingOrHasFailed;
    NSDate *_storyTimestamp;
    long long _viewableStatus;
    SCBaseMediaThumbnailViewModel *_baseMediaThumbnailViewModel;
    SCMapSnapLocationCardViewModel *_locationCardViewModel;
    UIColor *_senderColor;
    NSString *_messageId;
    NSString *_conversationId;
}

+ (id)_storyInfoLabelFont;
+ (id)_unviewableLabelFont;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) UIColor *senderColor; // @synthesize senderColor=_senderColor;
@property(readonly, nonatomic) SCMapSnapLocationCardViewModel *locationCardViewModel; // @synthesize locationCardViewModel=_locationCardViewModel;
@property(readonly, nonatomic) SCBaseMediaThumbnailViewModel *baseMediaThumbnailViewModel; // @synthesize baseMediaThumbnailViewModel=_baseMediaThumbnailViewModel;
- (void).cxx_destruct;
- (_Bool)_isExpired;
- (_Bool)_isViewable;
- (_Bool)shouldDisplayStoryInfoLabel;
- (_Bool)shouldDisplayUnviewableLabel;
- (id)attributedTextForUnviewableLabel;
- (id)attributedTextForStoryInfoLabel;
- (_Bool)shouldCropCircularMedia;
- (_Bool)shouldShowFullScreenView;
- (_Bool)shouldDisplayTapToLoad;
- (_Bool)containsVideo;
- (id)_deepLinkToLat:(double)arg1 lng:(double)arg2 zoom:(double)arg3 displayText:(id)arg4;
- (void)_configureLocationCardForPoiShareWithMapMetadata:(id)arg1 poiShare:(id)arg2 enableStreaming:(_Bool)arg3;
- (void)_configureLocationCardForSnapShareWithMapMetadata:(id)arg1;
- (void)setMessageId:(id)arg1 conversationId:(id)arg2;
- (void)_initLocationCardViewModelWithMapMetadata:(id)arg1 poiShare:(id)arg2 enableStreaming:(_Bool)arg3;
- (id)initWithMapSnapMetadata:(id)arg1 poiMetadata:(id)arg2 storyMediaContent:(id)arg3 isSendingOrHasFailed:(_Bool)arg4 senderColor:(id)arg5 messageId:(id)arg6 conversationId:(id)arg7 enableStreaming:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

