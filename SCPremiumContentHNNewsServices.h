//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCPremiumContentHNNewsEventAnnouncer, SCPremiumContentHNNewsSectionActionHandler;

@interface SCPremiumContentHNNewsServices : NSObject
{
    SCPremiumContentHNNewsSectionActionHandler *_newsSectionActionHandler;
    SCPremiumContentHNNewsEventAnnouncer *_newsSectionEventAnnouncer;
}

@property(readonly, nonatomic) SCPremiumContentHNNewsEventAnnouncer *newsSectionEventAnnouncer; // @synthesize newsSectionEventAnnouncer=_newsSectionEventAnnouncer;
@property(readonly, nonatomic) SCPremiumContentHNNewsSectionActionHandler *newsSectionActionHandler; // @synthesize newsSectionActionHandler=_newsSectionActionHandler;
- (void).cxx_destruct;
- (id)initWithNewsSectionActionHandler:(id)arg1 newsSectionEventAnnouncer:(id)arg2;

@end
