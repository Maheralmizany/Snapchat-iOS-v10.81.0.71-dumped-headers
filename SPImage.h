//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSNumber, NSString, UIImage;

@interface SPImage : NSObject <NSCoding>
{
    _Bool _shouldBeValidated;
    _Bool _shouldBeBeautified;
    NSString *_identifier;
    unsigned long long _source;
    UIImage *_image;
    NSNumber *_wasFaceInRect;
    NSNumber *_wasNeutralFace;
    NSData *_segmentationData;
}

@property(retain, nonatomic) NSData *segmentationData; // @synthesize segmentationData=_segmentationData;
@property(retain, nonatomic) NSNumber *wasNeutralFace; // @synthesize wasNeutralFace=_wasNeutralFace;
@property(retain, nonatomic) NSNumber *wasFaceInRect; // @synthesize wasFaceInRect=_wasFaceInRect;
@property(readonly, nonatomic) _Bool shouldBeBeautified; // @synthesize shouldBeBeautified=_shouldBeBeautified;
@property(nonatomic) _Bool shouldBeValidated; // @synthesize shouldBeValidated=_shouldBeValidated;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) unsigned long long source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)markAsValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 source:(unsigned long long)arg2 image:(id)arg3 shouldBeValidated:(_Bool)arg4 shouldBeBeautified:(_Bool)arg5;

@end
