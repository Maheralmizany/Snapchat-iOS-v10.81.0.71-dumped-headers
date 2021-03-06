//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSString, SCCommerceBitmojiViewModelProvider, SCCommerceSession, SCOperaPage, SCUserSession, SOJUCommerceProductInfo;
@protocol NavigationDelegate;

@interface SCCommerceProductOperaLayer : NSObject <SCOperaLayer>
{
    SCOperaPage *_page;
    _Bool _shouldPostDismissalEvent;
    NSString *_productId;
    SOJUCommerceProductInfo *_productInfo;
    NSString *_discoverEditionName;
    SCUserSession *_userSession;
    SCCommerceSession *_commerceSession;
    SCCommerceBitmojiViewModelProvider *_bitmojiViewModelProvider;
    id <NavigationDelegate> _navigationDelegate;
    unsigned long long _presentedViewType;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, nonatomic) _Bool shouldPostDismissalEvent; // @synthesize shouldPostDismissalEvent=_shouldPostDismissalEvent;
@property(readonly, nonatomic) unsigned long long presentedViewType; // @synthesize presentedViewType=_presentedViewType;
@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) SCCommerceBitmojiViewModelProvider *bitmojiViewModelProvider; // @synthesize bitmojiViewModelProvider=_bitmojiViewModelProvider;
@property(readonly, nonatomic) SCCommerceSession *commerceSession; // @synthesize commerceSession=_commerceSession;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly) NSString *discoverEditionName; // @synthesize discoverEditionName=_discoverEditionName;
@property(readonly) SOJUCommerceProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(readonly) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)setPage:(id)arg1;
- (id)page;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

