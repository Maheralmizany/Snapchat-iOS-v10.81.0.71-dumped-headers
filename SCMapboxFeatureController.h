//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapFeatureProvider-Protocol.h"

@class SCMapboxView;

@interface SCMapboxFeatureController : NSObject <SCMapFeatureProvider>
{
    SCMapboxView *_mapboxView;
}

- (void).cxx_destruct;
- (id)featuresAtPoint:(struct CGPoint)arg1;
- (id)initWithMapboxView:(id)arg1;

@end

