//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSString, SOJUBloopsBloopsConfig, SOJUBloopsFriendBloopsDataElement;

@protocol SOJUBloopsMyFriendBloopsData <SCSojuMessage>
@property(readonly, nonatomic) NSString *hairStyle;
@property(readonly, nonatomic) SOJUBloopsBloopsConfig *bloopsConfig;
@property(readonly, nonatomic) NSString *gender;
@property(readonly, nonatomic) SOJUBloopsFriendBloopsDataElement *processedImage;
@property(readonly, nonatomic) SOJUBloopsFriendBloopsDataElement *rawImage;
@property(readonly, nonatomic) NSString *sdkVersion;
@property(readonly, nonatomic) NSString *formatVersion;
@property(readonly, nonatomic) NSString *friendBloopsPolicy;
@end
