//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SOJUScannableAction-Protocol.h"

@class NSArray, NSString;

@protocol SOJUScannableActionScanToAuth <SOJUScannableAction>
@property(readonly, nonatomic) NSString *redirectUrl;
@property(readonly, nonatomic) NSArray *scopes;
@property(readonly, nonatomic) NSString *codeChallenge;
@property(readonly, nonatomic) NSString *state;
@property(readonly, nonatomic) NSString *clientId;
@end

