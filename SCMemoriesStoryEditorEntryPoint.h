//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCMemoriesDataObjectStorageService, SCMemoriesStoryEditorScope, SCScopeExposer;

@interface SCMemoriesStoryEditorEntryPoint : SCEntryPoint
{
    SCMemoriesStoryEditorScope *_memoriesStoryEditorScope;
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCMemoriesDataObjectStorageService *_memoriesDataObjectStorageService;
    SCScopeExposer *_memoriesAddSnapsScopeExposer;
}

@property(retain, nonatomic) SCScopeExposer *memoriesAddSnapsScopeExposer; // @synthesize memoriesAddSnapsScopeExposer=_memoriesAddSnapsScopeExposer;
@property(nonatomic) __weak SCMemoriesDataObjectStorageService *memoriesDataObjectStorageService; // @synthesize memoriesDataObjectStorageService=_memoriesDataObjectStorageService;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
@property(nonatomic) __weak SCMemoriesStoryEditorScope *memoriesStoryEditorScope; // @synthesize memoriesStoryEditorScope=_memoriesStoryEditorScope;
- (void).cxx_destruct;
- (id)end;
- (void)begin;

@end

