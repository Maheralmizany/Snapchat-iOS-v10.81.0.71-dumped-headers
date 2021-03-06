//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPImageFetcher-Protocol.h"

@class NSString, SPImage, UIImage;

@interface SPCameraImageFetcher : NSObject <SPImageFetcher>
{
    _Bool _backCamera;
    UIImage *_thumbnailImage;
    unsigned long long _type;
    SPImage *_image;
}

@property(readonly, nonatomic) _Bool backCamera; // @synthesize backCamera=_backCamera;
@property(retain, nonatomic) SPImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
- (void).cxx_destruct;
- (void)fetchSPImage:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithImage:(id)arg1 backCamera:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

