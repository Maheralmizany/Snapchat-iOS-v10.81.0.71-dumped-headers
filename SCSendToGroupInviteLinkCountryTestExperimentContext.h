//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSendToGroupInviteLinkCountryTestExperimentContext : SCExperimentContext
{
    _Bool _createLinkEnabled;
    _Bool _openLinkEnabled;
    _Bool _addToGroupCTAEnabled;
    _Bool _groupChatEntryPointsEnabled;
    _Bool _badgeEnabled;
}

@property(readonly, nonatomic) _Bool badgeEnabled; // @synthesize badgeEnabled=_badgeEnabled;
@property(readonly, nonatomic) _Bool groupChatEntryPointsEnabled; // @synthesize groupChatEntryPointsEnabled=_groupChatEntryPointsEnabled;
@property(readonly, nonatomic) _Bool addToGroupCTAEnabled; // @synthesize addToGroupCTAEnabled=_addToGroupCTAEnabled;
@property(readonly, nonatomic) _Bool openLinkEnabled; // @synthesize openLinkEnabled=_openLinkEnabled;
@property(readonly, nonatomic) _Bool createLinkEnabled; // @synthesize createLinkEnabled=_createLinkEnabled;
- (void)setupParameters;
- (id)experimentName;

@end

