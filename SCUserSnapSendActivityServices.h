//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCUserFirstDaySnapService, SCUserLastSnapDateService;

@interface SCUserSnapSendActivityServices : NSObject
{
    id <SCUserFirstDaySnapService> _firstDaySnapService;
    id <SCUserLastSnapDateService> _lastSnapDateService;
}

@property(readonly, nonatomic) id <SCUserLastSnapDateService> lastSnapDateService; // @synthesize lastSnapDateService=_lastSnapDateService;
@property(readonly, nonatomic) id <SCUserFirstDaySnapService> firstDaySnapService; // @synthesize firstDaySnapService=_firstDaySnapService;
- (void).cxx_destruct;
- (id)initWithFirstDaySnapService:(id)arg1 lastSnapDateService:(id)arg2;

@end

