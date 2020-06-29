//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface AMPUploadResponseInfo : NSObject <NSCopying>
{
    _Bool _isUploadSuccessful;
    NSString *_formattedLogQueueName;
    NSNumber *_statusCode;
    unsigned long long _requestSizeInBytes;
    unsigned long long _responseSizeInBytes;
    double _requestLatency;
}

@property(readonly, nonatomic) double requestLatency; // @synthesize requestLatency=_requestLatency;
@property(readonly, nonatomic) unsigned long long responseSizeInBytes; // @synthesize responseSizeInBytes=_responseSizeInBytes;
@property(readonly, nonatomic) unsigned long long requestSizeInBytes; // @synthesize requestSizeInBytes=_requestSizeInBytes;
@property(readonly, nonatomic) _Bool isUploadSuccessful; // @synthesize isUploadSuccessful=_isUploadSuccessful;
@property(readonly, copy, nonatomic) NSNumber *statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, copy, nonatomic) NSString *formattedLogQueueName; // @synthesize formattedLogQueueName=_formattedLogQueueName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFormattedLogQueueName:(id)arg1 statusCode:(id)arg2 isUploadSuccessful:(_Bool)arg3 requestSizeInBytes:(unsigned long long)arg4 responseSizeInBytes:(unsigned long long)arg5 requestLatency:(double)arg6;

@end

