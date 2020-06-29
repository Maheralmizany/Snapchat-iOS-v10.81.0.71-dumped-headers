//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SCReplyParameters : NSObject
{
    _Bool _isMischief;
    _Bool _addToMyStory;
    _Bool _isMobStory;
    _Bool _isDoubleTap;
    _Bool _isBirthday;
    _Bool _isFromContextMenu;
    _Bool _addToOurStory;
    _Bool _isBottomSnapCamera;
    _Bool _shouldHideRecipientNameView;
    _Bool _isPreviewSavingDisabled;
    NSString *_replyUsername;
    NSString *_replyDisplayName;
    long long _replyType;
    unsigned long long _replyStateType;
    NSString *_context;
    long long _pageSource;
    NSString *_placeID;
    NSString *_placeName;
    NSNumber *_cellViewPosition;
    NSString *_businessProfileId;
    long long _roleType;
    NSString *_snapRequestInviteId;
    NSString *_snapRequestStoryId;
    NSString *_snapRequestStoryName;
    NSDictionary *_snapRequestReshareInfoDict;
    NSArray *_snapRequestNotifiedUsernames;
    NSString *_appStoryAppId;
    NSString *_quotedUserId;
}

+ (id)snappableParametersWithOperaParameters:(id)arg1;
+ (id)_replyParametersWithContextSessionParameters:(id)arg1 shouldHideRecipientNameView:(_Bool)arg2;
+ (id)_replyParametersWithUsername:(id)arg1 groupConversationId:(id)arg2 isGroup:(_Bool)arg3 displayName:(id)arg4 launchSource:(int)arg5;
+ (id)socailUnlockParametersWithContextSessionParameters:(id)arg1;
+ (id)snappableParametersWithContextSessionParameters:(id)arg1;
@property(copy, nonatomic) NSString *quotedUserId; // @synthesize quotedUserId=_quotedUserId;
@property(copy, nonatomic) NSString *appStoryAppId; // @synthesize appStoryAppId=_appStoryAppId;
@property(copy, nonatomic) NSArray *snapRequestNotifiedUsernames; // @synthesize snapRequestNotifiedUsernames=_snapRequestNotifiedUsernames;
@property(copy, nonatomic) NSDictionary *snapRequestReshareInfoDict; // @synthesize snapRequestReshareInfoDict=_snapRequestReshareInfoDict;
@property(copy, nonatomic) NSString *snapRequestStoryName; // @synthesize snapRequestStoryName=_snapRequestStoryName;
@property(copy, nonatomic) NSString *snapRequestStoryId; // @synthesize snapRequestStoryId=_snapRequestStoryId;
@property(copy, nonatomic) NSString *snapRequestInviteId; // @synthesize snapRequestInviteId=_snapRequestInviteId;
@property(nonatomic) _Bool isPreviewSavingDisabled; // @synthesize isPreviewSavingDisabled=_isPreviewSavingDisabled;
@property(nonatomic) _Bool shouldHideRecipientNameView; // @synthesize shouldHideRecipientNameView=_shouldHideRecipientNameView;
@property(nonatomic) long long roleType; // @synthesize roleType=_roleType;
@property(copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
@property(nonatomic) _Bool isBottomSnapCamera; // @synthesize isBottomSnapCamera=_isBottomSnapCamera;
@property(copy, nonatomic) NSNumber *cellViewPosition; // @synthesize cellViewPosition=_cellViewPosition;
@property(copy, nonatomic) NSString *placeName; // @synthesize placeName=_placeName;
@property(copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(nonatomic) _Bool addToOurStory; // @synthesize addToOurStory=_addToOurStory;
@property(nonatomic) long long pageSource; // @synthesize pageSource=_pageSource;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(nonatomic) _Bool isFromContextMenu; // @synthesize isFromContextMenu=_isFromContextMenu;
@property(nonatomic) _Bool isBirthday; // @synthesize isBirthday=_isBirthday;
@property(nonatomic) _Bool isDoubleTap; // @synthesize isDoubleTap=_isDoubleTap;
@property(nonatomic) unsigned long long replyStateType; // @synthesize replyStateType=_replyStateType;
@property(nonatomic) long long replyType; // @synthesize replyType=_replyType;
@property(nonatomic) _Bool isMobStory; // @synthesize isMobStory=_isMobStory;
@property(nonatomic) _Bool addToMyStory; // @synthesize addToMyStory=_addToMyStory;
@property(nonatomic) _Bool isMischief; // @synthesize isMischief=_isMischief;
@property(copy, nonatomic) NSString *replyDisplayName; // @synthesize replyDisplayName=_replyDisplayName;
@property(copy, nonatomic) NSString *replyUsername; // @synthesize replyUsername=_replyUsername;
- (void).cxx_destruct;
- (_Bool)isMischiefSnap;

@end
