//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEmpty, NSString, SCBoltContentDescriptor;

@interface SCMossContentDescriptorOverride : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCBoltContentDescriptor *contentDescriptor; // @dynamic contentDescriptor;
@property(readonly, nonatomic) int fileExtensionOneOfCase; // @dynamic fileExtensionOneOfCase;
@property(readonly, nonatomic) int fileSuffixOneOfCase; // @dynamic fileSuffixOneOfCase;
@property(nonatomic) _Bool hasContentDescriptor; // @dynamic hasContentDescriptor;
@property(copy, nonatomic) NSString *useCustomExtension; // @dynamic useCustomExtension;
@property(copy, nonatomic) NSString *useCustomSuffix; // @dynamic useCustomSuffix;
@property(nonatomic) int useStandardExtension; // @dynamic useStandardExtension;
@property(retain, nonatomic) GPBEmpty *useVariantName; // @dynamic useVariantName;

@end
