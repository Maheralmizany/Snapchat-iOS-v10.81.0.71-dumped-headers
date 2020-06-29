//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMediaCardViewModel.h"

@class SCBaseMediaThumbnailViewModel, SCUserSession;
@protocol SCAdShareMediaThumbnailViewModel;

@interface SCAdShareMediaCardViewModel : SCMediaCardViewModel
{
    SCBaseMediaThumbnailViewModel<SCAdShareMediaThumbnailViewModel> *_thumbnailViewModel;
    SCUserSession *_userSession;
}

@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) SCBaseMediaThumbnailViewModel<SCAdShareMediaThumbnailViewModel> *thumbnailViewModel; // @synthesize thumbnailViewModel=_thumbnailViewModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)defaultThumbnailImage;
- (long long)type;
- (_Bool)isCircularThumbnail;
- (id)initWithThumbnailViewModel:(id)arg1;

@end

