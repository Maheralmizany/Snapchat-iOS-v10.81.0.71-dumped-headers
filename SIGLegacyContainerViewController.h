//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SIGContainerViewController.h"

#import "SCActiveUserNavigationViewController-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"

@class NSString;

@interface SIGLegacyContainerViewController : SIGContainerViewController <SCPageNameLogging, SCActiveUserNavigationViewController, SCShakeToReportDelegate>
{
}

- (id)jiraMetaInfo;
- (id)defaultSubProjectName;
- (id)defaultProjectNameV2;
- (void)willEndCensoringScreenshot;
- (void)willStartCensoringScreenshot;
- (_Bool)shouldDisableShakeToReportOnCurrentPage;
- (void)mightDismissWithStyle:(unsigned long long)arg1;
- (id)attributedPage;
- (id)pageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

