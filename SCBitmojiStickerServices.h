//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCBitmojiStickerServices : NSObject
{
    SCLazy *_packProvider;
    SCLazy *_packFetcher;
    SCLazy *_refresher;
    SCLazy *_search;
    SCLazy *_searchFetcher;
}

@property(readonly, nonatomic) SCLazy *searchFetcher; // @synthesize searchFetcher=_searchFetcher;
@property(readonly, nonatomic) SCLazy *search; // @synthesize search=_search;
@property(readonly, nonatomic) SCLazy *refresher; // @synthesize refresher=_refresher;
@property(readonly, nonatomic) SCLazy *packFetcher; // @synthesize packFetcher=_packFetcher;
@property(readonly, nonatomic) SCLazy *packProvider; // @synthesize packProvider=_packProvider;
- (void).cxx_destruct;
- (id)initWithPackProvider:(id)arg1 packFetcher:(id)arg2 refresher:(id)arg3 search:(id)arg4 searchFetcher:(id)arg5;

@end

