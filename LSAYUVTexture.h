//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LSATexture;

@interface LSAYUVTexture : NSObject
{
    LSATexture *_yTexture;
    LSATexture *_uvTexture;
}

@property(readonly, nonatomic) LSATexture *uvTexture; // @synthesize uvTexture=_uvTexture;
@property(readonly, nonatomic) LSATexture *yTexture; // @synthesize yTexture=_yTexture;
- (void).cxx_destruct;
- (id)initWithYTexture:(id)arg1 UVTexture:(id)arg2;

@end

