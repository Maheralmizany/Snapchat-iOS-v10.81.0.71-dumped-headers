//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCUserTooltipStatusServices : NSObject
{
    SCLazy *_userTooltipStatus;
    SCLazy *_userTooltipStatusProvider;
    SCLazy *_userTooltipStatusManager;
}

@property(readonly, nonatomic) SCLazy *userTooltipStatusManager; // @synthesize userTooltipStatusManager=_userTooltipStatusManager;
@property(readonly, nonatomic) SCLazy *userTooltipStatusProvider; // @synthesize userTooltipStatusProvider=_userTooltipStatusProvider;
@property(readonly, nonatomic) SCLazy *userTooltipStatus; // @synthesize userTooltipStatus=_userTooltipStatus;
- (void).cxx_destruct;
- (id)initWithUserTooltipStatus:(id)arg1 userTooltipStatusProvider:(id)arg2 userTooltipStatusManager:(id)arg3;

@end

