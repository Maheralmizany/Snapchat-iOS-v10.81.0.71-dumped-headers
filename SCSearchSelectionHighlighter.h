//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCDisposableObserver, UITextField;

@interface SCSearchSelectionHighlighter : NSObject
{
    UITextField *_textField;
    SCDisposableObserver *_selectionObserver;
}

- (void).cxx_destruct;
- (void)_onSelectionChange;
- (id)initWithSelectionTracker:(id)arg1 textField:(id)arg2;

@end

