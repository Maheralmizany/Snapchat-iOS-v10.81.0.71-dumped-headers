//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesOndemandTemplateCategory-Protocol.h"

@class NSNumber, NSString, SOJUUnlockablesOndemandTemplateList;

@interface SOJUUnlockablesOndemandTemplateCategory : SCSojuMessage <SOJUUnlockablesOndemandTemplateCategory>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIdValue:(id)arg1 name:(id)arg2 imageUrl:(id)arg3 templates:(id)arg4 productType:(id)arg5 isClassicLens:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) NSString *imageUrl; // @dynamic imageUrl;
@property(readonly, nonatomic) NSNumber *isClassicLens; // @dynamic isClassicLens;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) NSString *productType; // @dynamic productType;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SOJUUnlockablesOndemandTemplateList *templates; // @dynamic templates;

@end

