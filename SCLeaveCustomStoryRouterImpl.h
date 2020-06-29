//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLeaveCustomStoryRouter-Protocol.h"
#import "SIGDialogDelegate-Protocol.h"

@class NSString, SCStoriesCustomStoryMetadata, UIViewController;
@protocol SCLeaveCustomStoryOptionsDelegate;

@interface SCLeaveCustomStoryRouterImpl : NSObject <SIGDialogDelegate, SCLeaveCustomStoryRouter>
{
    UIViewController *_presentingViewController;
    SCStoriesCustomStoryMetadata *_customStory;
    id <SCLeaveCustomStoryOptionsDelegate> _leaveCustomStoryDialogDelegate;
}

- (void).cxx_destruct;
- (void)presentLeaveCustomStoryOptionsWithDelegate:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 customStory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
