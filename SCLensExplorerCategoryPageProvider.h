//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerCategoryPageProviding-Protocol.h"

@class NSString;
@protocol SCLensExplorerFactoryProtocol, SCLensExplorerStudySettingsProviderProtocol;

@interface SCLensExplorerCategoryPageProvider : NSObject <SCLensExplorerCategoryPageProviding>
{
    id <SCLensExplorerFactoryProtocol> _lensExplorerFactory;
    id <SCLensExplorerStudySettingsProviderProtocol> _studySettingsProvider;
}

- (void).cxx_destruct;
- (id)pageForCategory:(id)arg1;
- (id)initWithLensExplorerFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

