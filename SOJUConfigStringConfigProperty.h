//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUConfigStringConfigProperty-Protocol.h"

@class NSNumber, NSString;

@interface SOJUConfigStringConfigProperty : SCSojuMessage <SOJUConfigStringConfigProperty>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithName:(id)arg1 reloadAppOnChange:(id)arg2 value:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) NSNumber *reloadAppOnChange; // @dynamic reloadAppOnChange;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *value; // @dynamic value;

@end

