//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString, SOJUUnlockablesOndemandAssetDraft, SOJUUnlockablesOndemandImageFilter;

@protocol SOJUUnlockablesOndemandAsset <SCSojuMessage>
@property(readonly, nonatomic) NSNumber *isUpdate;
@property(readonly, nonatomic) SOJUUnlockablesOndemandAssetDraft *assetDraft;
@property(readonly, nonatomic) SOJUUnlockablesOndemandImageFilter *lensPreviewThumbnailImage;
@property(readonly, nonatomic) NSString *productType;
@property(readonly, nonatomic) NSString *status;
@property(readonly, nonatomic) NSNumber *submissionTime;
@property(readonly, nonatomic) NSNumber *scheduledEnd;
@property(readonly, nonatomic) NSNumber *scheduledStart;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) SOJUUnlockablesOndemandImageFilter *imageFilter;
@property(readonly, nonatomic) NSString *idValue;
@end

