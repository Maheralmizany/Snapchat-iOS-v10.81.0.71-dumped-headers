//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextLegacyViewModel-Protocol.h"

@class NSDictionary, NSString;

@interface SCContextV2ViewModel : NSObject <SCContextLegacyViewModel>
{
    NSDictionary *_viewModel;
}

+ (id)withComposerContentProto:(id)arg1;
- (void).cxx_destruct;
- (id)transform:(CDUnknownBlockType)arg1;
- (_Bool)hasCards;
- (void)applyViewModelToView:(id)arg1 substitutionHandler:(id)arg2;
- (id)createComposerViewWithDocumentName:(id)arg1 bundleName:(id)arg2 owner:(id)arg3 substitutionHandler:(id)arg4;
- (id)createCTAViewWithOwner:(id)arg1 componentContext:(id)arg2 substitutionHandler:(id)arg3;
- (id)createCardsViewWithOwner:(id)arg1 componentContext:(id)arg2 substitutionHandler:(id)arg3;
- (id)initWithJSON:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

