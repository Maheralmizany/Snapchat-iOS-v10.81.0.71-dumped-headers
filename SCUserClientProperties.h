//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate;

@interface SCUserClientProperties : NSObject <NSCoding, NSCopying>
{
    _Bool _seenSendToQuickAddAlert;
    _Bool _seenSendToSMSSnapAlert;
    _Bool _seenAutoFriendInviteAlert;
    _Bool _seenCameraModuleLens;
    _Bool _seenCameraModuleScan;
    _Bool _seenCameraModuleSearch;
    _Bool _shouldShowTravelModeAtTopInSettings;
    _Bool _selectedClipboardOption;
    _Bool _allowedClipboardAccess;
    _Bool _addedMeCountTooltipSeenProfileEntered;
    NSDate *_addedMeCountTooltipLastSeenTimestamp;
    unsigned long long _addedMeCountTooltipSeenCount;
    _Bool _isCheetahNewUser;
    NSDate *_snapKitPrivacyPolicyLastSeenTimestamp;
}

- (void).cxx_destruct;
- (void)updateSnapKitPrivacyPolicyLastSeenDate;
- (id)getSnapKitPrivacyPolicyLastSeenDate;
- (void)updateAddedMeTooltipLastSeenTimestampAndCount;
- (id)getAddedMeCountTooltipLastSeenTimestamp;
- (unsigned long long)getAddedMeCountTooltipSeenCount;
- (void)_updateServerForProperty:(unsigned long long)arg1 value:(_Bool)arg2 userSession:(id)arg3;
- (id)_getPropertyString:(unsigned long long)arg1;
- (void)updateClientPropertiesWithDict:(id)arg1;
- (_Bool)getUserClientProperty:(unsigned long long)arg1;
- (void)setUserClientProperty:(unsigned long long)arg1 userSession:(id)arg2 value:(_Bool)arg3;
- (void)setUserClientProperty:(unsigned long long)arg1 value:(_Bool)arg2;
- (void)setUserClientProperty:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

