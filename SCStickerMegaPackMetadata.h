//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSNumber;

@interface SCStickerMegaPackMetadata : NSObject
{
    NSNumber *_version;
    NSData *_syncToken;
    NSArray *_packMetadatas;
}

@property(retain, nonatomic) NSArray *packMetadatas; // @synthesize packMetadatas=_packMetadatas;
@property(retain, nonatomic) NSData *syncToken; // @synthesize syncToken=_syncToken;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
- (void).cxx_destruct;

@end

