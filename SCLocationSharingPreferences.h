//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSDate;

@interface SCLocationSharingPreferences : NSObject <NSCopying, NSCoding>
{
    _Bool _ghostMode;
    long long _sharingAudience;
    NSDate *_ghostModeExpirationDate;
    NSArray *_whitelistSharingModeUserIds;
    NSArray *_blacklistSharingModeUserIds;
    long long _version;
}

@property(nonatomic) long long version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSArray *blacklistSharingModeUserIds; // @synthesize blacklistSharingModeUserIds=_blacklistSharingModeUserIds;
@property(readonly, copy, nonatomic) NSArray *whitelistSharingModeUserIds; // @synthesize whitelistSharingModeUserIds=_whitelistSharingModeUserIds;
@property(readonly, copy, nonatomic) NSDate *ghostModeExpirationDate; // @synthesize ghostModeExpirationDate=_ghostModeExpirationDate;
@property(readonly, nonatomic) _Bool ghostMode; // @synthesize ghostMode=_ghostMode;
@property(readonly, nonatomic) long long sharingAudience; // @synthesize sharingAudience=_sharingAudience;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSharingAudience:(long long)arg1 ghostMode:(_Bool)arg2 ghostModeExpirationDate:(id)arg3 whitelistSharingModeUserIds:(id)arg4 blacklistSharingModeUserIds:(id)arg5;
- (id)initWithCoder:(id)arg1;

@end

