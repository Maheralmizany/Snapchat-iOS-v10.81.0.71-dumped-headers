//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface SPScenariosPriorityModel : NSObject
{
    NSNumber *_appearanceTime;
    NSNumber *_concealmentTime;
    NSArray *_genders;
    NSArray *_daysOfUsage;
    NSArray *_orderScenariosIds;
}

@property(retain, nonatomic) NSArray *orderScenariosIds; // @synthesize orderScenariosIds=_orderScenariosIds;
@property(retain, nonatomic) NSArray *daysOfUsage; // @synthesize daysOfUsage=_daysOfUsage;
@property(retain, nonatomic) NSArray *genders; // @synthesize genders=_genders;
@property(retain, nonatomic) NSNumber *concealmentTime; // @synthesize concealmentTime=_concealmentTime;
@property(retain, nonatomic) NSNumber *appearanceTime; // @synthesize appearanceTime=_appearanceTime;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
