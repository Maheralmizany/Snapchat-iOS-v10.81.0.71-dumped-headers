//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AiLoggerClient;

@interface AiLogger : NSObject
{
    id <AiLoggerClient> _client;
}

+ (id)getSharedInstance;
+ (void)log:(unsigned long long)arg1 message:(id)arg2;
+ (void)setClient:(id)arg1;
@property(retain) id <AiLoggerClient> client; // @synthesize client=_client;
- (void).cxx_destruct;

@end

