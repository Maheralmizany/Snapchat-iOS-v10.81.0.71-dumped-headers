//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADEventContextSource-Protocol.h"

@class GADEventContext, GADTargeting, NSDictionary, NSString, NSURL, NSURLRequest;
@protocol OS_dispatch_queue;

@interface GADServerRequest : NSObject <GADEventContextSource>
{
    GADEventContext *_context;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSDictionary *_RTBAdapters;
    GADTargeting *_targeting;
    NSURLRequest *_URLRequest;
    NSURL *_baseURL;
    NSDictionary *_signals;
}

@property(readonly, copy, nonatomic) NSDictionary *signals; // @synthesize signals=_signals;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSURLRequest *URLRequest; // @synthesize URLRequest=_URLRequest;
@property(retain, nonatomic) GADTargeting *targeting; // @synthesize targeting=_targeting;
- (void).cxx_destruct;
- (_Bool)updateAdReferences:(id *)arg1;
- (void)updateSignals;
@property(readonly, nonatomic) NSDictionary *RTBAdapters;
- (void)clearRTBAdapters;
- (void)updateRTBAdapters;
- (id)initWithContext:(id)arg1;
@property(readonly, nonatomic) GADEventContext *context;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

