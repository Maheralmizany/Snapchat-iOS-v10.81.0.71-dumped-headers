//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, NSURL, SCLensCreator;

@interface SCCommunityLensData : NSObject <NSCopying, NSCoding>
{
    SCLensCreator *_lensCreator;
    NSString *_attributionName;
    NSString *_scannedData;
}

+ (id)communityLensDataWithGeofilterData:(id)arg1;
@property(readonly, copy, nonatomic) NSString *scannedData; // @synthesize scannedData=_scannedData;
@property(readonly, copy, nonatomic) NSString *attributionName; // @synthesize attributionName=_attributionName;
@property(readonly, copy, nonatomic) SCLensCreator *lensCreator; // @synthesize lensCreator=_lensCreator;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLensCreator:(id)arg1 attributionName:(id)arg2 scannedData:(id)arg3;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSURL *deepLinkURL;
- (id)snapScannedData;
- (id)displayUserName;

@end

