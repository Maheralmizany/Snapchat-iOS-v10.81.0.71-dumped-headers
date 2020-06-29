//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesOndemandTemplate-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGeofilterResponse;

@interface SOJUUnlockablesOndemandTemplate : SCSojuMessage <SOJUUnlockablesOndemandTemplate>
{
}

+ (void)registerMessageFields:(id)arg1;
+ (id)screenDensity;
- (id)initWithImageUrl:(id)arg1 thumbnailUrl:(id)arg2 backgroundImageUrls:(id)arg3 defaultFontName:(id)arg4 defaultFontUrl:(id)arg5 defaultWidth:(id)arg6 defaultHeight:(id)arg7 productType:(id)arg8 idValue:(id)arg9 categoryId:(id)arg10 textBoxSpecArray:(id)arg11 instanceId:(id)arg12 baseLensGeofilterId:(id)arg13 smallLensPreviewImageUrl:(id)arg14 baseLensGeofilterResponse:(id)arg15 comicId:(id)arg16;

// Remaining properties
@property(readonly, nonatomic) NSArray *backgroundImageUrls; // @dynamic backgroundImageUrls;
@property(readonly, nonatomic) NSNumber *baseLensGeofilterId; // @dynamic baseLensGeofilterId;
@property(readonly, nonatomic) SOJUGeofilterResponse *baseLensGeofilterResponse; // @dynamic baseLensGeofilterResponse;
@property(readonly, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(readonly, nonatomic) NSString *comicId; // @dynamic comicId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSString *defaultFontName; // @dynamic defaultFontName;
@property(readonly, nonatomic) NSString *defaultFontUrl; // @dynamic defaultFontUrl;
@property(readonly, nonatomic) NSNumber *defaultHeight; // @dynamic defaultHeight;
@property(readonly, nonatomic) NSNumber *defaultWidth; // @dynamic defaultWidth;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) NSString *imageUrl; // @dynamic imageUrl;
@property(readonly, nonatomic) NSString *instanceId; // @dynamic instanceId;
@property(readonly, nonatomic) NSString *productType; // @dynamic productType;
@property(readonly, nonatomic) NSString *smallLensPreviewImageUrl; // @dynamic smallLensPreviewImageUrl;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *textBoxSpecArray; // @dynamic textBoxSpecArray;
@property(readonly, nonatomic) NSString *thumbnailUrl; // @dynamic thumbnailUrl;

@end
