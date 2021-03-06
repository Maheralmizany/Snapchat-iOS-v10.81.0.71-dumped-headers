//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUIdentityFindFriendsResponse-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUIdentityFindFriendsResponse : SCSojuMessage <SOJUIdentityFindFriendsResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithResults:(id)arg1 lastAddressBookUpdatedDate:(id)arg2 isTrimmed:(id)arg3 suggestedFriendResultsV2:(id)arg4 registrationSuggestedFriendOrdering:(id)arg5 officialAccountSuggestionsOrdering:(id)arg6 contentSuggestionPagePosition:(id)arg7 suggestedPublisherResults:(id)arg8;

// Remaining properties
@property(readonly, nonatomic) NSString *contentSuggestionPagePosition; // @dynamic contentSuggestionPagePosition;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *isTrimmed; // @dynamic isTrimmed;
@property(readonly, nonatomic) NSNumber *lastAddressBookUpdatedDate; // @dynamic lastAddressBookUpdatedDate;
@property(readonly, nonatomic) NSArray *officialAccountSuggestionsOrdering; // @dynamic officialAccountSuggestionsOrdering;
@property(readonly, nonatomic) NSArray *registrationSuggestedFriendOrdering; // @dynamic registrationSuggestedFriendOrdering;
@property(readonly, nonatomic) NSArray *results; // @dynamic results;
@property(readonly, nonatomic) NSArray *suggestedFriendResultsV2; // @dynamic suggestedFriendResultsV2;
@property(readonly, nonatomic) NSArray *suggestedPublisherResults; // @dynamic suggestedPublisherResults;
@property(readonly) Class superclass;

@end

