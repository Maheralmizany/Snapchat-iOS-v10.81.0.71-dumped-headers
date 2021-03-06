//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapFeatureTapResponder-Protocol.h"

@class NSString;
@protocol SCMapFeatureProvider, SCMapPlaceTapHandlerDelegate;

@interface SCMapPlaceTapHandler : NSObject <SCMapFeatureTapResponder>
{
    id <SCMapFeatureProvider> _mapFeatureProvider;
    id <SCMapPlaceTapHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCMapPlaceTapHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)priorResponderDidHandleTouch:(id)arg1;
- (void)didCancelTouchOnMapWithReason:(id)arg1;
- (struct SCMapTouchResponderResult)didLongPressOnMapAtPoint:(struct CGPoint)arg1;
- (struct SCMapTouchResponderResult)didTouchUpOnMapAtPoint:(struct CGPoint)arg1;
- (struct SCMapTouchResponderResult)didTouchDownOnMapAtPoint:(struct CGPoint)arg1;
- (id)initWithMapFeatureProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

