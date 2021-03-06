//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCGallerySearchResultsViewControllerDelegate-Protocol.h"

@class NSString, SCSearchNavigationCoordinator, SCUserSession;
@protocol SCStartChatDelegate;

@interface SCGallerySearchActionHandler : NSObject <SCGallerySearchResultsViewControllerDelegate, SCActionHandling>
{
    SCUserSession *_userSession;
    SCSearchNavigationCoordinator *_searchNavigationCoordinator;
    id <SCStartChatDelegate> _startChatDelegate;
}

@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) __weak SCSearchNavigationCoordinator *searchNavigationCoordinator; // @synthesize searchNavigationCoordinator=_searchNavigationCoordinator;
- (void).cxx_destruct;
- (void)searchResultsViewControllerShouldDismiss:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

