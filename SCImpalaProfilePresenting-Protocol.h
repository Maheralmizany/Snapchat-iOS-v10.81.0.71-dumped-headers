//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerMarshallable-Protocol.h"

@class NSString;

@protocol SCImpalaProfilePresenting <NSObject, SCComposerMarshallable>
- (void)presentPublisherProfileWithProfileId:(NSString *)arg1 showId:(NSString *)arg2;
- (void)presentPublicProfileWithProfileId:(NSString *)arg1;

@optional
- (void)presentUserActionSheetWithUserId:(NSString *)arg1;
- (void)presentUserProfileWithUserId:(NSString *)arg1;
@end

