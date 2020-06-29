//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCPreviewFeatureSending-Protocol.h"

@class NSString, SCPreviewEphemeralMediaList, SCUserSession;
@protocol SCPreviewResources;

@interface SCPreviewFeatureSendingImpl : SCFeature <SCPreviewFeatureSending>
{
    SCUserSession *_userSession;
    id <SCPreviewResources> _resourceProvider;
    SCPreviewEphemeralMediaList *_ephemeralMediaList;
}

@property(readonly, nonatomic) SCPreviewEphemeralMediaList *ephemeralMediaList; // @synthesize ephemeralMediaList=_ephemeralMediaList;
- (void).cxx_destruct;
- (void)sendWasInitiated;
- (void)setContextHintForInteractiveStickers:(CDUnknownBlockType)arg1 prepareBlock:(CDUnknownBlockType)arg2;
- (void)sendingWillStart;
- (void)clearSendingEphemeralMediaList;
- (void)initializeSendingEphemeralMediaList;
- (id)initWithUserSession:(id)arg1 resourceProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
