//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCDataObjectContext, SCUserSession;
@protocol SCGallerySnap;

@interface SCMemoriesActivityItemGeneratorHelper : NSObject
{
    id <SCGallerySnap> _snap;
    SCDataObjectContext *_dataObjectContext;
    SCUserSession *_userSession;
    NSString *_generatorType;
}

- (void).cxx_destruct;
- (void)requestThumbnailForExporting:(CDUnknownBlockType)arg1;
- (id)initWithGallerySnap:(id)arg1 generatorType:(id)arg2 dataObjectContext:(id)arg3 userSession:(id)arg4;

@end
