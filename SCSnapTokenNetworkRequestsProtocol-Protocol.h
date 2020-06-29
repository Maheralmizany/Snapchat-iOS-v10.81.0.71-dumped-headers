//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SCPerforming;

@protocol SCSnapTokenNetworkRequestsProtocol <NSObject>
- (void)fetchSnapSessionForUserId:(NSString *)arg1 serverScopeNames:(NSArray *)arg2 completionPerformer:(id <SCPerforming>)arg3 successBlock:(void (^)(SCPBSnaptokenSnapSessionResponse *))arg4 failureBlock:(void (^)(unsigned long long, NSError *))arg5;
- (void)fetchAccessTokensForServerScopeNames:(NSArray *)arg1 refreshToken:(NSString *)arg2 completionPerformer:(id <SCPerforming>)arg3 successBlock:(void (^)(SCPBSnaptokenSnapAccessTokensResponse *))arg4 failureBlock:(void (^)(unsigned long long, NSError *))arg5;
@end

