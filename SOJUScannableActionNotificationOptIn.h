//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUScannableActionNotificationOptIn-Protocol.h"

@class NSString;

@interface SOJUScannableActionNotificationOptIn : SCSojuMessage <SOJUScannableActionNotificationOptIn>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithNamespace:(id)arg1 imageUrl:(id)arg2 confirmButtonText:(id)arg3 cancelButtonText:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) NSString *cancelButtonText; // @dynamic cancelButtonText;
@property(readonly, nonatomic) NSString *confirmButtonText; // @dynamic confirmButtonText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *imageUrl; // @dynamic imageUrl;
@property(readonly, nonatomic) NSString *namespace; // @dynamic namespace;
@property(readonly) Class superclass;

@end

