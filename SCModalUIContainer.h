//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUIContainer-Protocol.h"

@class UIViewController;

@interface SCModalUIContainer : NSObject <SCUIContainer>
{
    UIViewController *_presentingViewController;
    _Bool _animated;
}

- (void).cxx_destruct;
- (void)detachUI:(CDUnknownBlockType)arg1;
- (void)attachUI:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 animated:(_Bool)arg2;

@end

