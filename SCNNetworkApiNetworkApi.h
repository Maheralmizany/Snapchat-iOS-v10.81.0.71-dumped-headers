//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNNetworkApiNetworkApi : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::network_api::NetworkApi>, std::__1::shared_ptr<snap::network_api::NetworkApi>> _cppRefHandle;
}

+ (id)createInstance:(id)arg1 uiPageChangeNotifier:(id)arg2 dataSaverModeChangeNotifier:(id)arg3 connectivityChangeNotifier:(id)arg4 userLogOutNotifier:(id)arg5 bandwidthChangeNotifier:(id)arg6 platformNetworkManager:(id)arg7 dataProviderFactory:(id)arg8 networkDispatchQueue:(id)arg9 networkApiConfig:(id)arg10;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)pathToNetLog;
- (void)stopNetLog;
- (_Bool)startNetLog;
- (long long)getCronetStreamEngine;
- (void)cancelFromNetworkManagerDirectly:(id)arg1;
- (void)cancel:(id)arg1;
- (void)updateUILayoutOrder:(id)arg1 uiPageInfo:(id)arg2 mediaContextType:(long long)arg3;
- (void)update:(id)arg1 rankingSignals:(id)arg2;
- (void)submitToNetworkManagerDirectly:(id)arg1 downloadFilePath:(id)arg2 progressiveCallback:(id)arg3 callback:(id)arg4 uploadDataProvider:(id)arg5;
- (void)submit:(id)arg1 downloadFilePath:(id)arg2 rankingSignals:(id)arg3 executor:(id)arg4 progressiveCallback:(id)arg5 callback:(id)arg6 uploadDataProvider:(id)arg7 retryConfig:(id)arg8;
- (id)initWithCpp:(const shared_ptr_8a449218 *)arg1;

@end

