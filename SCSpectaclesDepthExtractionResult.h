//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSError;

@interface SCSpectaclesDepthExtractionResult : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSError *_preparationFailed_error;
    NSError *_extractionFailed_error;
}

+ (id)preparationFailedWithError:(id)arg1;
+ (id)extractionFailedWithError:(id)arg1;
+ (id)depthExtracted;
+ (id)cancelled;
- (void).cxx_destruct;
- (void)matchCancelled:(CDUnknownBlockType)arg1 preparationFailed:(CDUnknownBlockType)arg2 extractionFailed:(CDUnknownBlockType)arg3 depthExtracted:(CDUnknownBlockType)arg4;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

