//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCCognacLSBCypressProxyLongPollingEvent : NSObject
{
    NSString *_handlerName;
    id _data;
    NSString *_responseId;
    CDUnknownBlockType _responseCallback;
}

@property(copy, nonatomic) CDUnknownBlockType responseCallback; // @synthesize responseCallback=_responseCallback;
@property(copy, nonatomic) NSString *responseId; // @synthesize responseId=_responseId;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *handlerName; // @synthesize handlerName=_handlerName;
- (void).cxx_destruct;

@end

