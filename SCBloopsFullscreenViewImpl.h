//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCBloopsFullscreenViewInput-Protocol.h"
#import "SPFullscreenPlayerModuleOutput-Protocol.h"

@class NSString;
@protocol SCBloopsFullscreenViewOutput, SCBloopsReenactmentResult, SPFullscreenPlayerModuleInput;

@interface SCBloopsFullscreenViewImpl : UIView <SPFullscreenPlayerModuleOutput, SCBloopsFullscreenViewInput>
{
    id <SPFullscreenPlayerModuleInput> _fullscreenPlayerModuleInput;
    id <SCBloopsFullscreenViewOutput> _output;
    id <SCBloopsReenactmentResult> _reenactmentResult;
}

@property(retain, nonatomic) id <SCBloopsReenactmentResult> reenactmentResult; // @synthesize reenactmentResult=_reenactmentResult;
@property(nonatomic) __weak id <SCBloopsFullscreenViewOutput> output; // @synthesize output=_output;
- (void).cxx_destruct;
- (void)spFullscreenPlayerModule:(id)arg1 didFinishLoopOfVideo:(long long)arg2;
- (void)spFullscreenPlayerModule:(id)arg1 didChangePlayingState:(_Bool)arg2;
- (void)exitVisibleState;
- (void)enterVisibleState;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
