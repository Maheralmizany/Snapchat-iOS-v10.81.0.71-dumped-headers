//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFeedHeaderPromptItem-Protocol.h"

@class NSString, SCFeatureSettingsService, SCHeaderPromptView, SCHeaderPromptViewModel, SCLazy, SCUserSession;
@protocol SCFeedHeaderPromptItemDelegate;

@interface SCFeedHeaderPromptBirthday : NSObject <SCFeedHeaderPromptItem>
{
    SCUserSession *_userSession;
    SCLazy *_birthdayProvider;
    SCLazy *_promptStateProvider;
    SCFeatureSettingsService *_featureSettingsService;
    _Bool _didDismissTweakPrompt;
    int _protoPromptType;
    SCHeaderPromptView *_view;
    SCHeaderPromptViewModel *_viewModel;
    id <SCFeedHeaderPromptItemDelegate> _delegate;
}

+ (id)newWithUserSession:(id)arg1 delegate:(id)arg2 birthdayProvider:(id)arg3 promptStateProvider:(id)arg4;
@property(nonatomic) __weak id <SCFeedHeaderPromptItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCHeaderPromptView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)headerPromptViewDidDismiss:(id)arg1;
- (void)headerPromptViewDidTap:(id)arg1;
- (_Bool)shouldShowPromptFromTweak;
- (void)tweakedPromptDidExpire;
- (void)willShowPrompt;
- (_Bool)shouldShowPrompt;
@property(retain, nonatomic) SCHeaderPromptViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) int protoPromptType; // @synthesize protoPromptType=_protoPromptType;
@property(readonly, nonatomic) unsigned long long itemType;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 birthdayProvider:(id)arg3 promptStateProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

