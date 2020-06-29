//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCContextV3Services : NSObject
{
    SCLazy *_ctaProvider;
    SCLazy *_postSnapProvider;
    SCLazy *_actionHandlerProvider;
    SCLazy *_tappableElementsProvider;
    SCLazy *_excludedCardsProvider;
}

@property(readonly, nonatomic) SCLazy *excludedCardsProvider; // @synthesize excludedCardsProvider=_excludedCardsProvider;
@property(readonly, nonatomic) SCLazy *tappableElementsProvider; // @synthesize tappableElementsProvider=_tappableElementsProvider;
@property(readonly, nonatomic) SCLazy *actionHandlerProvider; // @synthesize actionHandlerProvider=_actionHandlerProvider;
@property(readonly, nonatomic) SCLazy *postSnapProvider; // @synthesize postSnapProvider=_postSnapProvider;
@property(readonly, nonatomic) SCLazy *ctaProvider; // @synthesize ctaProvider=_ctaProvider;
- (void).cxx_destruct;
- (id)initWithCtaProvider:(id)arg1 postSnapProvider:(id)arg2 actionHandlerProvider:(id)arg3 tappableElementsProvider:(id)arg4 excludedCardsProvider:(id)arg5;

@end

