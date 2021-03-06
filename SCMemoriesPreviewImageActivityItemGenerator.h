//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActivityItemGenerating-Protocol.h"

@class NSString, UIImage;
@protocol SCActivityItemGeneratingDelegate;

@interface SCMemoriesPreviewImageActivityItemGenerator : NSObject <SCActivityItemGenerating>
{
    UIImage *_image;
    NSString *_snapId;
    id <SCActivityItemGeneratingDelegate> _delegate;
}

@property(nonatomic) __weak id <SCActivityItemGeneratingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancel;
- (id)generatePlaceholderItem;
- (void)generateThumbnailForExport:(CDUnknownBlockType)arg1;
- (void)generateItemForActivityType:(id)arg1;
- (long long)itemDuration;
- (unsigned long long)estimatedMediaSize;
- (id)itemId;
- (id)initWithPreviewImage:(id)arg1 previewConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id item;
@property(readonly, nonatomic) unsigned long long itemCount;
@property(readonly, nonatomic) float progress;
@property(readonly) Class superclass;

@end

