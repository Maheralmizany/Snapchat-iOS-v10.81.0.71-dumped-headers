//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFeatureInteractionEvent-Protocol.h"

@class NSString, SCPreviewToolBarButtonItem, SCPreviewToolbarLongPressGestureRecognizer;

@interface SCPreviewToolbarLongPressGestureInteractionEvent : NSObject <SCFeatureInteractionEvent>
{
    SCPreviewToolbarLongPressGestureRecognizer *_gestureRecognizer;
    SCPreviewToolBarButtonItem *_item;
}

+ (id)createWithGesture:(id)arg1 toolbarItem:(id)arg2;
@property(readonly, nonatomic) SCPreviewToolBarButtonItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) SCPreviewToolbarLongPressGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void).cxx_destruct;
- (unsigned long long)processEventForFeature:(id)arg1;
- (id)initWithGesture:(id)arg1 toolbarItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
