//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseAPIClient.h"

@class NSDateFormatter, NSURL;

@interface 345763ac5e9 : SCBaseAPIClient
{
    NSURL *_defaultBaseURL;
    double _loggingRate;
    NSDateFormatter *_dateFormatter;
}

+ (void)apiClientDidFinishRequest:(id)arg1 response:(id)arg2 parameters:(id)arg3;
+ (void)removeListener:(id)arg1;
+ (void)addListener:(id)arg1;
+ (id)getConnectionType;
+ (id)getCarrierMNC;
+ (id)getCarrierMCC;
+ (id)getCarrierName;
+ (_Bool)isDevSnapConnect;
+ (_Bool)isDevAuthService;
+ (_Bool)isDevSnapchat;
+ (id)defaultSnapConnectUrl;
+ (id)defaultSnaptokenUrl;
+ (id)defaultAuthServiceUrl;
+ (id)defaultUrl;
+ (id)updateSharedSnapConnectClientWithUrl:(id)arg1;
+ (id)updateSharedAuthServiceClientWithUrl:(id)arg1;
+ (id)updateSharedClientWithUrl:(id)arg1;
+ (id)sharedSnapConnectClient;
+ (id)sharedAuthServiceClient;
+ (id)sharedClient;
+ (void)initialize;
+ (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
+ (void)showAlertAndWaitForDismissalWithUrl:(id)arg1;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) double loggingRate; // @synthesize loggingRate=_loggingRate;
@property(retain, nonatomic) NSURL *defaultBaseURL; // @synthesize defaultBaseURL=_defaultBaseURL;
- (void).cxx_destruct;
- (id)57dd4acf0c3783489:(id)arg1 9a40:(id)arg2 0479aafbfe:(id)arg3;
- (id)71b408fd0ec6a97d21b433c96e6d5b:(id)arg1 3d1a:(id)arg2 641111be88:(id)arg3 0014c5754363053cdc3d372d3:(CDUnknownBlockType)arg4;
- (_Bool)isCustomEndpoint;
- (_Bool)_shouldLogPayloadGeneration;
- (void)4bf59a093abc83a7e46:(id)arg1 3d94:(id)arg2 b6eea1d07b:(id)arg3;
- (id)c04a399b1ab61fd9a:(id)arg1 64b:(id)arg2 450dc42110:(id)arg3 4aaf7821e5ced:(_Bool)arg4;
- (id)initWithBaseURL:(id)arg1;

@end

