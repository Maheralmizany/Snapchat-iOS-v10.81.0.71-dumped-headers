//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SPScenarioResourceFileModel : NSObject
{
    NSString *_path;
    NSNumber *_crc32;
    NSNumber *_size;
}

@property(readonly, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(readonly, nonatomic) NSNumber *crc32; // @synthesize crc32=_crc32;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

