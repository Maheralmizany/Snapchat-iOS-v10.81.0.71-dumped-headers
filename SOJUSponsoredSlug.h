//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUSponsoredSlug-Protocol.h"

@class NSString, SOJUSponsoredSlugPosAndText, SOJUSponsoredSlugStyle;

@interface SOJUSponsoredSlug : SCSojuMessage <SOJUSponsoredSlug>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithStyle:(id)arg1 defaultValues:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) SOJUSponsoredSlugPosAndText *defaultValues; // @dynamic defaultValues;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SOJUSponsoredSlugStyle *style; // @dynamic style;
@property(readonly) Class superclass;

@end

