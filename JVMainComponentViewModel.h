//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class JVOpenImagesOverlayViewModel, NSArray;

@interface JVMainComponentViewModel : SCComposerMarshallableObject
{
    JVOpenImagesOverlayViewModel *_openImagesOverlayViewModel;
    NSArray *_demoModes;
}

@property(copy, nonatomic) NSArray *demoModes; // @synthesize demoModes=_demoModes;
@property(retain, nonatomic) JVOpenImagesOverlayViewModel *openImagesOverlayViewModel; // @synthesize openImagesOverlayViewModel=_openImagesOverlayViewModel;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithOpenImagesOverlayViewModel:(id)arg1 demoModes:(id)arg2;

@end

