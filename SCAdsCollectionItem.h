//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCAdsCollectionItemAttachment, SCAdsMediaRenderInfo;

@interface SCAdsCollectionItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasItemAttachment; // @dynamic hasItemAttachment;
@property(nonatomic) _Bool hasItemIcon; // @dynamic hasItemIcon;
@property(retain, nonatomic) SCAdsCollectionItemAttachment *itemAttachment; // @dynamic itemAttachment;
@property(retain, nonatomic) SCAdsMediaRenderInfo *itemIcon; // @dynamic itemIcon;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

