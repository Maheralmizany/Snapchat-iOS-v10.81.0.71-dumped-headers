//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCWebBrowsingScriptController.h"

@interface SCWebBrowsingScriptScrolling : SCWebBrowsingScriptController
{
    _Bool _isScrolledToTop;
}

+ (id)new;
@property(nonatomic) _Bool isScrolledToTop; // @synthesize isScrolledToTop=_isScrolledToTop;
- (_Bool)isURLSupported:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)init;

@end

