//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SIGTextFieldPillDelegate-Protocol.h"

@class NSString, SCDisposableObserverLifecycle, SCSelectionTracker, SIGTextField;
@protocol UITextFieldDelegate;

@interface SIGTextFieldPillTracker : NSObject <SIGTextFieldPillDelegate>
{
    SCSelectionTracker *_selectionTracker;
    SIGTextField *_searchField;
    id <UITextFieldDelegate> _textFieldDelegate;
    SCDisposableObserverLifecycle *_subscription;
}

- (void).cxx_destruct;
- (void)_onParticipantUpdates:(id)arg1;
- (void)userDeletingPillUsingKeyboard:(id)arg1;
- (id)initWithSearchField:(id)arg1 selectionTracker:(id)arg2 textFieldDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

