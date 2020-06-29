//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCImageProcessLensCommandProcessAction-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString;
@protocol SCImageProcessLensCommandProcessAction;

@interface SCImageProcessSerializedLensCommandProcessAction : NSObject <SCTraceEnabled, NSCopying, SCImageProcessLensCommandProcessAction>
{
    id <SCImageProcessLensCommandProcessAction> _processAction;
    NSString *_serializedDataString;
}

@property(copy) NSString *serializedDataString; // @synthesize serializedDataString=_serializedDataString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidateCachedTextures;
@property(readonly, nonatomic) _Bool hasValidCachedInputTexture;
- (struct CGAffineTransform)viewPortTransformWithInputTransform:(struct CGAffineTransform)arg1 exportMode:(_Bool)arg2;
- (long long)drawingOrientationWithInputOrientation:(long long)arg1 exportMode:(_Bool)arg2;
- (id)executeWithContext:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 pixelWidth:(unsigned long long)arg3 pixelHeight:(unsigned long long)arg4 outputPixelWidth:(unsigned long long)arg5 outputPixelHeight:(unsigned long long)arg6 lensComponentManager:(id)arg7 command:(id)arg8 overriddenProcessingInfoConfiguration:(id)arg9 error:(id *)arg10;
- (id)initWithProcessAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

