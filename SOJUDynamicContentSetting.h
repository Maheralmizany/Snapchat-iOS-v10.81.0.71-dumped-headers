//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUDynamicContentSetting-Protocol.h"

@class NSNumber, NSString;

@interface SOJUDynamicContentSetting : SCSojuMessage <SOJUDynamicContentSetting>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithAutoRefreshDelayInMilli:(id)arg1 autoRefreshMessageXPortrait:(id)arg2 autoRefreshMessageXLandscape:(id)arg3 autoRefreshMessageYPortrait:(id)arg4 autoRefreshMessageYLandscape:(id)arg5 dynamicFilterRefreshHint:(id)arg6 dynamicFilterUpdatingMessage:(id)arg7;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSNumber *autoRefreshDelayInMilli; // @dynamic autoRefreshDelayInMilli;
@property(readonly, nonatomic) NSNumber *autoRefreshMessageXLandscape; // @dynamic autoRefreshMessageXLandscape;
@property(readonly, nonatomic) NSNumber *autoRefreshMessageXPortrait; // @dynamic autoRefreshMessageXPortrait;
@property(readonly, nonatomic) NSNumber *autoRefreshMessageYLandscape; // @dynamic autoRefreshMessageYLandscape;
@property(readonly, nonatomic) NSNumber *autoRefreshMessageYPortrait; // @dynamic autoRefreshMessageYPortrait;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *dynamicFilterRefreshHint; // @dynamic dynamicFilterRefreshHint;
@property(readonly, nonatomic) NSString *dynamicFilterUpdatingMessage; // @dynamic dynamicFilterUpdatingMessage;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

