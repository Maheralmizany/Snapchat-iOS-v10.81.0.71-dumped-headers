//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSString;

@protocol SOJUUserOwnedUnlockablesResponse <SCSojuMessage>
@property(readonly, nonatomic) NSArray *userPinnedLensesChecksums;
@property(readonly, nonatomic) NSArray *userUnlockedFiltersChecksums;
@property(readonly, nonatomic) NSArray *userPinnedLenses;
@property(readonly, nonatomic) NSArray *userUnlockedStickerPacks;
@property(readonly, nonatomic) NSString *lensListSignature;
@property(readonly, nonatomic) NSArray *userUnlockedFilters;
@property(readonly, nonatomic) NSArray *personalFilters;
@property(readonly, nonatomic) NSArray *userOwnedUnlockables;
@end

