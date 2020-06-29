//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FFFrame-Protocol.h"

@class NSString, UIImage;

@interface FFRawFrame : NSObject <FFFrame>
{
    UIImage *_originalUIImage;
    unsigned long long _length;
    struct CGSize _frameSize;
}

@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(retain, nonatomic) UIImage *originalUIImage; // @synthesize originalUIImage=_originalUIImage;
@property(readonly, nonatomic) struct CGSize frameSize; // @synthesize frameSize=_frameSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) unsigned long long dataLength;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

