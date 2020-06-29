//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCRegistrationUsernameSuggester : NSObject <NSCopying>
{
    unsigned long long _currentSuggestionIndex;
    NSArray *_suggestions;
}

@property(readonly, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
- (void).cxx_destruct;
- (_Bool)hasAlternateSuggestionToCurrentUsername:(id)arg1;
- (id)nextSuggestion;
- (void)resetCurrentSuggestionIndex;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSuggestions:(id)arg1;

@end
