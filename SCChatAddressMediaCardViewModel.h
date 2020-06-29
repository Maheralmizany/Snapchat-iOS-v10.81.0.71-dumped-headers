//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCChatAddressMediaCardViewModel : NSObject <NSCopying>
{
    NSString *_addressThumbnailImageCacheId;
    NSString *_address;
    NSString *_trackingId;
}

@property(readonly, copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, copy, nonatomic) NSString *addressThumbnailImageCacheId; // @synthesize addressThumbnailImageCacheId=_addressThumbnailImageCacheId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAddressThumbnailImageCacheId:(id)arg1 address:(id)arg2 trackingId:(id)arg3;

@end

