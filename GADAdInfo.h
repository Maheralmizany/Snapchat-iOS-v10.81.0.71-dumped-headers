//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADQueryInfo, NSDictionary, NSString;

@interface GADAdInfo : NSObject
{
    GADQueryInfo *_queryInfo;
    NSDictionary *_queryDictionary;
    NSString *_adString;
}

@property(readonly, copy, nonatomic) NSString *adString; // @synthesize adString=_adString;
@property(readonly, copy, nonatomic) NSDictionary *queryDictionary; // @synthesize queryDictionary=_queryDictionary;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQueryInfo:(id)arg1 adString:(id)arg2;

@end

