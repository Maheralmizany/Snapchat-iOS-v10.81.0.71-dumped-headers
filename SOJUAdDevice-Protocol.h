//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUAdDevice <SCSojuMessage>
@property(readonly, nonatomic) NSString *buildNumber;
@property(readonly, nonatomic) NSString *deviceLanguage;
@property(readonly, nonatomic) NSNumber *osVersionNumeric;
@property(readonly, nonatomic) NSString *deviceModel;
@property(readonly, nonatomic) NSString *platformType;
@property(readonly, nonatomic) NSString *idfa;
@end
