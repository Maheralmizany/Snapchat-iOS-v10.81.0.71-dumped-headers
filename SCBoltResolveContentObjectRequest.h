//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, SCBoltContentObject;

@interface SCBoltResolveContentObjectRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCBoltContentObject *contentObject; // @dynamic contentObject;
@property(readonly, nonatomic) int referenceOneOfCase; // @dynamic referenceOneOfCase;
@property(copy, nonatomic) NSData *v2ContentObject; // @dynamic v2ContentObject;
@property(copy, nonatomic) NSString *v2ContentURL; // @dynamic v2ContentURL;

@end
