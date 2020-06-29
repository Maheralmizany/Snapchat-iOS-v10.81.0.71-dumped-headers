//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL;

@interface LSAUriRequest : NSObject
{
    NSURL *_uri;
    NSString *_identifier;
    NSString *_method;
    NSString *_contentType;
    NSData *_data;
}

@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) NSString *method; // @synthesize method=_method;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSURL *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;
- (id)initWithUri:(id)arg1 requestId:(id)arg2 method:(id)arg3 contentType:(id)arg4 data:(id)arg5;
- (long long)sc_requestMethod;
- (id)sc_invalidRequestResponse;
- (id)sc_errorResponseWithErrorCode:(long long)arg1 description:(id)arg2;

@end

