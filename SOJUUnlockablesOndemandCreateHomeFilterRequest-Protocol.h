//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString, SOJUUnlockablesOndemandHomeFilterAddress, SOJUUnlockablesOndemandHomeFilterTargeting;

@protocol SOJUUnlockablesOndemandCreateHomeFilterRequest <SCSojuMessage>
@property(readonly, nonatomic) SOJUUnlockablesOndemandHomeFilterTargeting *targeting;
@property(readonly, nonatomic) NSString *categoryName;
@property(readonly, nonatomic) NSString *categoryId;
@property(readonly, nonatomic) NSString *templateInstanceId;
@property(readonly, nonatomic) NSString *templateId;
@property(readonly, nonatomic) NSString *assetName;
@property(readonly, nonatomic) NSString *assetBase64Str;
@property(readonly, nonatomic) SOJUUnlockablesOndemandHomeFilterAddress *address;
@property(readonly, nonatomic) NSNumber *isEnabled;
@property(readonly, nonatomic) NSString *adAccountId;
@end

