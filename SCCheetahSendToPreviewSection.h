//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCollectionViewSection-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, SCCheetahSendToPreviewCollectionViewCell, SCCheetahSendToPreviewMessageCollector, SCCollectionViewSectionUpdateModel, SCEventListenerAnnouncer, UIView;
@protocol SCCollectionViewSectionDelegate, SCCollectionViewSectionLayoutProviding, SCSearchIntentHandler, SCSendPreviewMediaView, SCSendPreviewViewModel;

@interface SCCheetahSendToPreviewSection : NSObject <SCEventListener, UITextViewDelegate, SCCollectionViewSection>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCCheetahSendToPreviewMessageCollector *_previewMsgCollector;
    id <SCSendPreviewViewModel> _previewMediaSource;
    UIView<SCSendPreviewMediaView> *_mediaView;
    SCCheetahSendToPreviewCollectionViewCell *_previewCollectionViewCell;
    double _contentHeight;
    _Bool _isMediaViewExplicitlyPaused;
    SCCollectionViewSectionUpdateModel *_sectionUpdateModel;
    id <SCCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler_DEPRECATED;
    long long _dataLoadingStatus;
}

+ (id)announcerIdentifier;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler_DEPRECATED; // @synthesize intentHandler_DEPRECATED=_intentHandler_DEPRECATED;
@property(nonatomic) __weak id <SCCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SCCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
- (void).cxx_destruct;
- (void)_updateViewModel;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)startMediaView;
- (void)stopMediaView;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (id)sectionInsets;
- (unsigned long long)numberOfCellsInSection;
- (id)reuseCellClassesByIdentifiers;
- (void)applyConfiguration:(id)arg1;
- (void)tearDown;
- (void)setUp;
- (id)initWithPreviewMsgCollector:(id)arg1 previewMediaSource:(id)arg2;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SCCollectionViewSectionLayoutProviding> layoutCalculator;
@property(copy, nonatomic) CDUnknownBlockType sectionUpdatingBlock;
@property(readonly) Class superclass;

@end

