//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCNComposerJSModule;

@interface SCComposerCachingJSModule : NSObject
{
    NSMutableDictionary *_properties;
    SCNComposerJSModule *_jsModule;
}

@property(readonly, nonatomic) SCNComposerJSModule *jsModule; // @synthesize jsModule=_jsModule;
- (void).cxx_destruct;
- (id)getProperty:(id)arg1;
- (id)initWithJSModule:(id)arg1;

@end

