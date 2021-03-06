//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerInfoCardPresenterProtocol-Protocol.h"
#import "SCLensInfoCardPresentationDelegate-Protocol.h"

@class NSString, SCUserSession;
@protocol NavigationDelegate, SCLensByIdRetrievable, SCLensInfoCardPresentation;

@interface SCLensExplorerInfoCardPresenterImpl : NSObject <SCLensInfoCardPresentationDelegate, SCLensExplorerInfoCardPresenterProtocol>
{
    _Bool _presented;
    id <SCLensInfoCardPresentation> _lensInfoCardPresenter;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    id <SCLensByIdRetrievable> _lensRetrievable;
}

@property(nonatomic) __weak id <SCLensByIdRetrievable> lensRetrievable; // @synthesize lensRetrievable=_lensRetrievable;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool presented; // @synthesize presented=_presented;
@property(retain, nonatomic) id <SCLensInfoCardPresentation> lensInfoCardPresenter; // @synthesize lensInfoCardPresenter=_lensInfoCardPresenter;
- (void).cxx_destruct;
- (void)_performHapticFeedback;
- (void)_resetCurrentInfoCardPresenter;
- (void)_showInfoCardForCurrentPresenter;
- (void)_setupInfoCardPresenterWithLens:(id)arg1 viewController:(id)arg2;
- (void)lensInfoCardPresenterDidDismissInfoCard:(id)arg1;
- (_Bool)isPresenting;
- (void)showInfoCardForLens:(id)arg1 fromViewController:(id)arg2;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 lensRetrievable:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

