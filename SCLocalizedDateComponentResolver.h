//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDateComponentResolver-Protocol.h"

@class NSDateFormatter, NSString;

@interface SCLocalizedDateComponentResolver : NSObject <SCDateComponentResolver>
{
    NSDateFormatter *_dateFormatter;
    unsigned long long _dayComponent;
    unsigned long long _monthComponent;
    unsigned long long _yearComponent;
}

- (void).cxx_destruct;
- (unsigned long long)yearComponent;
- (unsigned long long)monthComponent;
- (unsigned long long)dayComponent;
- (void)_initComponents;
- (id)initWithDateFormatter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
