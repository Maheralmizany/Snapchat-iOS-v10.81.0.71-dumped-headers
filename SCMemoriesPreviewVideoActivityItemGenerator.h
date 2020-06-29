//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActivityItemGenerating-Protocol.h"

@class NSString, NSURL, SnapVideoFilter, UIImage;
@protocol SCActivityItemGeneratingDelegate;

@interface SCMemoriesPreviewVideoActivityItemGenerator : NSObject <SCActivityItemGenerating>
{
    SnapVideoFilter *_videoFilter;
    NSURL *_outputUrl;
    UIImage *_thumbnail;
    NSString *_snapId;
    float _duration;
    id <SCActivityItemGeneratingDelegate> _delegate;
}

@property(nonatomic) __weak id <SCActivityItemGeneratingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancel;
- (id)generatePlaceholderItem;
- (unsigned long long)estimatedMediaSize;
- (long long)itemDuration;
- (id)itemId;
- (void)generateThumbnailForExport:(CDUnknownBlockType)arg1;
- (void)_videoCompletedWithUrl:(id)arg1 error:(id)arg2;
- (void)_updateProgress:(float)arg1;
- (void)generateItemForActivityType:(id)arg1;
- (id)initWithPreviewVideoFilter:(id)arg1 previewConfiguration:(id)arg2 outputUrl:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id item;
@property(readonly, nonatomic) unsigned long long itemCount;
@property(readonly, nonatomic) float progress;
@property(readonly) Class superclass;

@end
