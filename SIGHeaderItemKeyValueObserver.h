//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SIGHeaderItem;
@protocol SIGHeaderItemObserverDelegate;

@interface SIGHeaderItemKeyValueObserver : NSObject
{
    id <SIGHeaderItemObserverDelegate> _delegate;
    SIGHeaderItem *_observedHeaderItem;
}

@property(retain, nonatomic) SIGHeaderItem *observedHeaderItem; // @synthesize observedHeaderItem=_observedHeaderItem;
@property(nonatomic) __weak id <SIGHeaderItemObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingHeaderItem;
- (void)dealloc;

@end
