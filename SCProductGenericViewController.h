//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLeftSwipableViewController.h"

#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"

@class NSString, SCHeader, SCUserSession, UIView;

@interface SCProductGenericViewController : SCLeftSwipableViewController <SCHeaderDataSource, SCHeaderDelegate>
{
    unsigned long long _headerStyle;
    SCHeader *_header;
    UIView *_containerView;
    SCUserSession *_userSession;
}

+ (id)createHeaderLabel:(id)arg1;
+ (id)addLabelToHeader:(id)arg1 labelText:(id)arg2 verticalPadding:(double)arg3;
+ (id)addLabelToHeader:(id)arg1 labelText:(id)arg2;
+ (id)addLabelToHeaderInSection:(id)arg1 labelText:(id)arg2;
+ (id)viewForHeaderInSection:(id)arg1;
+ (double)heightForHeaderInSection:(id)arg1 labelText:(id)arg2;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long headerStyle; // @synthesize headerStyle=_headerStyle;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (id)textInputFieldFont;
- (void)showErrorWithTitle:(id)arg1 message:(id)arg2;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (void)leftSwipeSucceed;
- (_Bool)inValidView:(id)arg1;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (id)getTitle;
- (void)initHeader;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 headerStyle:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

