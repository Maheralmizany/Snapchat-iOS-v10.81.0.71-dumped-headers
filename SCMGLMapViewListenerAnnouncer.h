//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMGLMapViewListener-Protocol.h"

@class NSString;

@interface SCMGLMapViewListenerAnnouncer : NSObject <SCMGLMapViewListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCMGLMapViewListener>, std::__1::allocator<__weak id<SCMGLMapViewListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)mapView:(id)arg1 didFinishLoadingStyle:(id)arg2;
- (void)mapViewDidFinishRenderingFrame:(id)arg1 fullyRendered:(_Bool)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapViewWillStartLoadingMap:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapViewRegionIsChanging:(id)arg1;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

