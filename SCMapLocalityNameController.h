//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapViewportListener-Protocol.h"
#import "SCMapViewportMetadataUpdatesListener-Protocol.h"

@class NSString, UIView;
@protocol SCMapLocalityLabel, SCMapViewport, SCMapViewportMetadataProvider;

@interface SCMapLocalityNameController : NSObject <SCMapViewportListener, SCMapViewportMetadataUpdatesListener>
{
    id <SCMapViewport> _viewport;
    id <SCMapViewportMetadataProvider> _viewportMetadataProvider;
    UIView<SCMapLocalityLabel> *_label;
}

@property(readonly, nonatomic) UIView<SCMapLocalityLabel> *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)viewportMetadataDidUpdateWithData:(id)arg1 error:(id)arg2;
- (void)mapViewport:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapViewportIsChanging:(id)arg1;
- (void)dealloc;
- (id)initWithMapViewport:(id)arg1 label:(id)arg2 viewportMetadataProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

