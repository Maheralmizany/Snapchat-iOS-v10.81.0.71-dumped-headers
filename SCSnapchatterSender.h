//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchatterSending-Protocol.h"

@class SCLazy;

@interface SCSnapchatterSender : NSObject <SCSnapchatterSending>
{
    SCLazy *_textMessageSender;
}

- (void).cxx_destruct;
- (void)sendSnapchatterWithUserId:(id)arg1 conversationIds:(id)arg2 additionalText:(id)arg3 platformAnalytics:(id)arg4 additionalTextPlatformAnalytics:(id)arg5;
- (id)initWithTextMessageSender:(id)arg1;

@end
