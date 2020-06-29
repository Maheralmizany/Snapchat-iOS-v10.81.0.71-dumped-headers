//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCScopedAccess;
@protocol SCEditGroupAlertViewDelegate;

@interface SCEditGroupAlertView : NSObject
{
    SCScopedAccess *_friendsFeedDataAccess;
    SCScopedAccess *_clearConversationDataAccess;
    id <SCEditGroupAlertViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCEditGroupAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_clearFriendsFeedItem:(id)arg1;
- (id)formattedGroupParticipantNamesForGroup:(id)arg1 actions:(id)arg2;
- (void)presentEditGroupAlertViewForGroup:(id)arg1 showParticipants:(_Bool)arg2;
- (id)init;

@end

