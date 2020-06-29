//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBFieldOptions, NSString;

@interface GPBFieldDescriptorProto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *defaultValue; // @dynamic defaultValue;
@property(copy, nonatomic) NSString *extendee; // @dynamic extendee;
@property(nonatomic) _Bool hasDefaultValue; // @dynamic hasDefaultValue;
@property(nonatomic) _Bool hasExtendee; // @dynamic hasExtendee;
@property(nonatomic) _Bool hasJsonName; // @dynamic hasJsonName;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasNumber; // @dynamic hasNumber;
@property(nonatomic) _Bool hasOneofIndex; // @dynamic hasOneofIndex;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasTypeName; // @dynamic hasTypeName;
@property(copy, nonatomic) NSString *jsonName; // @dynamic jsonName;
@property(nonatomic) int label; // @dynamic label;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int number; // @dynamic number;
@property(nonatomic) int oneofIndex; // @dynamic oneofIndex;
@property(retain, nonatomic) GPBFieldOptions *options; // @dynamic options;
@property(nonatomic) int type; // @dynamic type;
@property(copy, nonatomic) NSString *typeName; // @dynamic typeName;

@end

