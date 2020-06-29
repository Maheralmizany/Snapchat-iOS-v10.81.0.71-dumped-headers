//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPReenactmentClientsManagerOutput-Protocol.h"

@class NSOperationQueue, NSString, SPReenactmentRequest;
@protocol SPReenactmentClientsManager;

@interface SPReenactmentVideoGenerator : NSObject <SPReenactmentClientsManagerOutput>
{
    id <SPReenactmentClientsManager> _reenactmentClientsManager;
    unsigned long long _type;
    SPReenactmentRequest *_request;
    CDUnknownBlockType _completion;
    NSOperationQueue *_videoFromImagesTranscodingQueue;
}

@property(retain, nonatomic) NSOperationQueue *videoFromImagesTranscodingQueue; // @synthesize videoFromImagesTranscodingQueue=_videoFromImagesTranscodingQueue;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) SPReenactmentRequest *request; // @synthesize request=_request;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id <SPReenactmentClientsManager> reenactmentClientsManager; // @synthesize reenactmentClientsManager=_reenactmentClientsManager;
- (void).cxx_destruct;
- (void)didFailFullScreenReenactmentForRequest:(id)arg1 withError:(id)arg2;
- (void)didFinishReenactment:(id)arg1;
- (void)didReadyToShowReenactment:(id)arg1;
- (void)didFailFullsizePreviewReenactmentForRequest:(id)arg1 withError:(id)arg2;
- (void)didFinishFullsizePreviewReenactmentResult:(id)arg1;
- (void)didReadyToShowFullsizePreviewReenactmentResult:(id)arg1;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithType:(unsigned long long)arg1 request:(id)arg2 videoFromImagesTranscodingQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
