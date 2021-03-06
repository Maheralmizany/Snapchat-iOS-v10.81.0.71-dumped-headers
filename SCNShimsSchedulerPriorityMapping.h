//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNShimsSchedulerPriorityMapping : NSObject
{
    int _interactive;
    int _foreground;
    int _background;
    int _idle;
}

+ (id)SchedulerPriorityMappingWithInteractive:(int)arg1 foreground:(int)arg2 background:(int)arg3 idle:(int)arg4;
@property(readonly, nonatomic) int idle; // @synthesize idle=_idle;
@property(readonly, nonatomic) int background; // @synthesize background=_background;
@property(readonly, nonatomic) int foreground; // @synthesize foreground=_foreground;
@property(readonly, nonatomic) int interactive; // @synthesize interactive=_interactive;
- (id)description;
- (id)initWithInteractive:(int)arg1 foreground:(int)arg2 background:(int)arg3 idle:(int)arg4;

@end

