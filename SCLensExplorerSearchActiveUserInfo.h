//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSNumber, NSString;

@interface SCLensExplorerSearchActiveUserInfo : SCComposerMarshallableObject
{
    NSNumber *_age;
    NSString *_countryCode;
}

@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSNumber *age; // @synthesize age=_age;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithAge:(id)arg1 countryCode:(id)arg2;

@end

