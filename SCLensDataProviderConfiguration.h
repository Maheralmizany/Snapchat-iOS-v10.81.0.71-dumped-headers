//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensDataProviderConfiguration-Protocol.h"

@class NSPredicate, NSString, SCLens;

@interface SCLensDataProviderConfiguration : NSObject <SCLensDataProviderConfiguration>
{
    _Bool _shouldBlockDefaultBundledLenses;
    NSPredicate *_filteringPredicate;
    NSString *_applicableContext;
    SCLens *_originalLens;
    NSString *_ownerContextDescription;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (id)bundledLensProvider;
+ (id)onlyLensesSuitableForMemories;
+ (id)onlyPreviewWorldLensesPredicate;
+ (id)excludePreviewWorldLensesPredicate;
+ (id)excludeSnappablesPredicate;
+ (id)excludeFriendmojiPredicate;
+ (id)excludeBitmojiPredicate;
+ (id)excludeStudioLensesPredicate;
+ (id)excludeLiveCameraLensesPredicate;
+ (id)excludeMainCameraExclusiveLensesPredicate;
+ (id)configurationForCreative;
+ (id)configurationForLiveLensPreview;
+ (id)configurationForSceneIntelligence;
+ (id)configurationForSnap3D;
+ (id)configurationForReplyOnStory;
+ (id)configurationForReplyCameraWithBitmojiLinked:(_Bool)arg1 friendBitmojiLinked:(_Bool)arg2;
+ (id)configurationForVideoChat;
+ (id)configurationForWorldLensesInPreview;
+ (id)configurationForLensesInPreviewWithApplicableContext:(id)arg1;
+ (id)configurationForLiveCamera;
@property(readonly, copy, nonatomic) NSString *ownerContextDescription; // @synthesize ownerContextDescription=_ownerContextDescription;
@property(readonly, nonatomic) _Bool shouldBlockDefaultBundledLenses; // @synthesize shouldBlockDefaultBundledLenses=_shouldBlockDefaultBundledLenses;
@property(readonly, copy, nonatomic) SCLens *originalLens; // @synthesize originalLens=_originalLens;
@property(readonly, copy, nonatomic) NSString *applicableContext; // @synthesize applicableContext=_applicableContext;
@property(readonly, copy, nonatomic) NSPredicate *filteringPredicate; // @synthesize filteringPredicate=_filteringPredicate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFilteringPredicate:(id)arg1 applicableContext:(id)arg2 originalLens:(id)arg3 shouldBlockDefaultBundledLenses:(_Bool)arg4 ownerContextDescription:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

