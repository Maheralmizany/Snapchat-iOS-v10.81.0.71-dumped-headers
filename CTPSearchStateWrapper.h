//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class CTPSearchQuery, NSArray, NSError, NSString;

@interface CTPSearchStateWrapper : NSObject <NSCopying>
{
    unsigned long long _state;
    NSString *_text;
    CTPSearchQuery *_query;
    NSArray *_results;
    NSError *_error;
}

@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, copy, nonatomic) CTPSearchQuery *query; // @synthesize query=_query;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithState:(unsigned long long)arg1 text:(id)arg2 query:(id)arg3 results:(id)arg4 error:(id)arg5;

@end
