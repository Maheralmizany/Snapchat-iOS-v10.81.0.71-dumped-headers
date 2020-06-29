//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDelegateActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"
#import "SIGAccessoryViewProviding-Protocol.h"

@class NSString, UIView;
@protocol SCActionHandlingDelegate;

@interface SIGButtonViewProvider : NSObject <SIGAccessoryViewProviding, SCViewModelConfigurable, SCDelegateActionable>
{
    id _viewModel;
    UIView *_accessoryView;
    id <SCActionHandlingDelegate> _actionHandlingDelegate;
}

@property(nonatomic) __weak id <SCActionHandlingDelegate> actionHandlingDelegate; // @synthesize actionHandlingDelegate=_actionHandlingDelegate;
@property(nonatomic) __weak UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_didTapTrailingButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

