//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCGrapheneServices, SCUserSessionScope;

@interface SCGrapheneUserSessionEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCGrapheneServices *_grapheneServices;
}

@property(nonatomic) __weak SCGrapheneServices *grapheneServices; // @synthesize grapheneServices=_grapheneServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)end;
- (void)begin;

@end

