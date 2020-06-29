//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIFKVONSObject.h"

@class NSURL, SPFullscreenReenactmentResult;
@protocol AnimatorResultShareHandlerOutput;

@interface AnimatorResultShareHandler : AIFKVONSObject
{
    id <AnimatorResultShareHandlerOutput> _output;
    NSURL *_shareURL;
    SPFullscreenReenactmentResult *_fullscreenReenactmentResult;
}

@property(retain, nonatomic) SPFullscreenReenactmentResult *fullscreenReenactmentResult; // @synthesize fullscreenReenactmentResult=_fullscreenReenactmentResult;
@property(retain, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(nonatomic) __weak id <AnimatorResultShareHandlerOutput> output; // @synthesize output=_output;
- (void).cxx_destruct;
- (id)initWithSPFullscreenReenactmentResult:(id)arg1;

@end
