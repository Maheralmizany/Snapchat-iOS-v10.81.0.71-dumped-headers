//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNNetworkTypesConnectivityChangeNotifier-Protocol.h"

@interface SCNNetworkTypesConnectivityChangeNotifierCppProxy : NSObject <SCNNetworkTypesConnectivityChangeNotifier>
{
    struct Handle<std::__1::shared_ptr<snap::network_types::ConnectivityChangeNotifier>, std::__1::shared_ptr<snap::network_types::ConnectivityChangeNotifier>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)registerListener:(id)arg1;
- (void)notifyListener:(long long)arg1;
- (id)initWithCpp:(const shared_ptr_40099c5c *)arg1;

@end

