//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCContextDataProviding, SCContextV2Logger;

@interface SCContextV3CtaParams : NSObject
{
    id <SCContextDataProviding> _contextData;
    id <SCContextV2Logger> _logger;
}

@property(readonly, nonatomic) id <SCContextV2Logger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SCContextDataProviding> contextData; // @synthesize contextData=_contextData;
- (void).cxx_destruct;
- (id)initWithContextData:(id)arg1 logger:(id)arg2;

@end

