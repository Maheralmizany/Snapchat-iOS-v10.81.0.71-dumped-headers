//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsChatMediaContentProvider-Protocol.h"

@class NSData, NSString, SCBloopsChatMediaContentProviderAnalytics, SPScenario, UIImage;
@protocol SCSendFlowLogging;

@interface SCBloopsResultProvider : NSObject <SCBloopsChatMediaContentProvider>
{
    UIImage *_thumbnail;
    SPScenario *_scenario;
    struct CGSize _size;
    _Bool _jpegThumbnailData;
    id <SCSendFlowLogging> _logger;
    NSData *_miniThumbnailData;
    unsigned long long _reenactmentType;
    SCBloopsChatMediaContentProviderAnalytics *_analytics;
}

@property(readonly, nonatomic) SCBloopsChatMediaContentProviderAnalytics *analytics; // @synthesize analytics=_analytics;
- (void).cxx_destruct;
- (id)snapMetadata;
- (id)creatorAttribution;
- (_Bool)isInfiniteDuration;
- (id)venueId;
- (id)snapAttachmentUrl;
- (id)chatIV;
- (id)chatKey;
- (id)chatMediaID;
- (double)duration;
- (id)miniThumbnailData;
- (_Bool)isZipped;
- (double)height;
- (double)width;
- (long long)mediaContentType;
- (_Bool)needsToBeUploaded;
- (void)prepareDataToUploadForMediaId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *numericBloopdId;
@property(readonly, nonatomic) NSString *bloopdId;
@property(readonly, nonatomic) _Bool hasCustomText;
- (id)initWithScenarioModel:(id)arg1 thumbnail:(id)arg2 jpegThumbnailData:(_Bool)arg3 analytics:(id)arg4 reenactmentType:(unsigned long long)arg5;
- (id)initWithScenarioModel:(id)arg1 thumbnail:(id)arg2 jpegThumbnailData:(_Bool)arg3 logger:(id)arg4 analytics:(id)arg5 reenactmentType:(unsigned long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
