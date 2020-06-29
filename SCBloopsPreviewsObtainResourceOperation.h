//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBloopsAsyncOperation.h"

@class NSData, NSError, NSString, SCLazy;

@interface SCBloopsPreviewsObtainResourceOperation : SCBloopsAsyncOperation
{
    NSString *_path;
    SCLazy *_contentDelivery;
    long long _possibleErrorCode;
    NSError *_error;
    NSData *_data;
}

@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)_errorDomain;
- (void)start;
- (id)initWithPath:(id)arg1 possibleErrorCode:(long long)arg2 contentDelivery:(id)arg3;

@end

