//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSArray, NSNumber;

@interface SCVenuesViewModel : SCComposerMarshallableObject
{
    NSArray *_places;
    NSArray *_localities;
    NSNumber *_isLoading;
    NSNumber *_isErrored;
}

@property(retain, nonatomic) NSNumber *isErrored; // @synthesize isErrored=_isErrored;
@property(retain, nonatomic) NSNumber *isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) NSArray *localities; // @synthesize localities=_localities;
@property(copy, nonatomic) NSArray *places; // @synthesize places=_places;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithPlaces:(id)arg1 localities:(id)arg2;
- (id)initWithPlaces:(id)arg1 localities:(id)arg2 isLoading:(id)arg3;
- (id)initWithPlaces:(id)arg1 localities:(id)arg2 isLoading:(id)arg3 isErrored:(id)arg4;

@end

