//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUAstSignal-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAstSignal : SCSojuMessage <SOJUAstSignal>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithName:(id)arg1 descriptionValue:(id)arg2 type:(id)arg3 version:(id)arg4 value:(id)arg5 identifier:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *descriptionValue; // @dynamic descriptionValue;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *identifier; // @dynamic identifier;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *type; // @dynamic type;
@property(readonly, nonatomic) NSNumber *value; // @dynamic value;
@property(readonly, nonatomic) NSString *version; // @dynamic version;

@end
