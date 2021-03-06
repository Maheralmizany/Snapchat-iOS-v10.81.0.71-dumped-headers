//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsReenactmentResult-Protocol.h"

@class NSString, SCBloopsAttributionModel, SPFullscreenReenactmentResult, UIImage;
@protocol SCBloopsModel;

@interface SCBloopsReenactmentResultImpl : NSObject <SCBloopsReenactmentResult>
{
    id <SCBloopsModel> _bloopModel;
    SPFullscreenReenactmentResult *_reenactmentResult;
    UIImage *_thumbnailImage;
    SCBloopsAttributionModel *_attribution;
}

@property(readonly, nonatomic) SCBloopsAttributionModel *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(readonly, nonatomic) SPFullscreenReenactmentResult *reenactmentResult; // @synthesize reenactmentResult=_reenactmentResult;
@property(readonly, nonatomic) id <SCBloopsModel> bloopModel; // @synthesize bloopModel=_bloopModel;
- (void).cxx_destruct;
- (id)initWithResult:(id)arg1 forBloopModel:(id)arg2 thumbnailImage:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

