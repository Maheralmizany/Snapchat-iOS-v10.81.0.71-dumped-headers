//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCServicesExposer, SCUserSessionScope;

@interface SCGalleryDataObjectStorageEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCServicesExposer *_memoriesDataObjectStorageServiceExposer;
}

@property(retain, nonatomic) SCServicesExposer *memoriesDataObjectStorageServiceExposer; // @synthesize memoriesDataObjectStorageServiceExposer=_memoriesDataObjectStorageServiceExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)end;
- (id)_galleryDataObjectContext;
- (void)begin;

@end
