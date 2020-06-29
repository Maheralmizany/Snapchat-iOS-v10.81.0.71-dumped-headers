//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCognacAppImageResources : NSObject <NSCopying, NSCoding>
{
    NSString *_iconImageURL;
    NSString *_loadingImageURL;
    NSString *_logoImageURL;
    NSString *_verticalImageURL;
    NSString *_horizontalImageURL;
    NSString *_squareImageURL;
}

@property(readonly, copy, nonatomic) NSString *squareImageURL; // @synthesize squareImageURL=_squareImageURL;
@property(readonly, copy, nonatomic) NSString *horizontalImageURL; // @synthesize horizontalImageURL=_horizontalImageURL;
@property(readonly, copy, nonatomic) NSString *verticalImageURL; // @synthesize verticalImageURL=_verticalImageURL;
@property(readonly, copy, nonatomic) NSString *logoImageURL; // @synthesize logoImageURL=_logoImageURL;
@property(readonly, copy, nonatomic) NSString *loadingImageURL; // @synthesize loadingImageURL=_loadingImageURL;
@property(readonly, copy, nonatomic) NSString *iconImageURL; // @synthesize iconImageURL=_iconImageURL;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIconImageURL:(id)arg1 loadingImageURL:(id)arg2 logoImageURL:(id)arg3 verticalImageURL:(id)arg4 horizontalImageURL:(id)arg5 squareImageURL:(id)arg6;
- (id)initWithCoder:(id)arg1;

@end

