//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, SCNGrapheneDiagnosticInfo;

@interface SCNGrapheneMetricsPayload : NSObject
{
    NSData *_frame;
    SCNGrapheneDiagnosticInfo *_diagnostics;
}

+ (id)MetricsPayloadWithFrame:(id)arg1 diagnostics:(id)arg2;
@property(readonly, nonatomic) SCNGrapheneDiagnosticInfo *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(readonly, nonatomic) NSData *frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFrame:(id)arg1 diagnostics:(id)arg2;

@end

