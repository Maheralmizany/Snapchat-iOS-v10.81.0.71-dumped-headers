//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface FaceZonesHolder : NSObject <NSCoding>
{
    struct FaceZones _faceZones;
}

@property(nonatomic) struct FaceZones faceZones; // @synthesize faceZones=_faceZones;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceZones:(struct FaceZones)arg1;

@end

