//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapChromeLegacyButtonsProvider-Protocol.h"

@class NSString;

@interface SCMapChromeStandardFooterButtonsProvider : NSObject <SCMapChromeLegacyButtonsProvider>
{
    unsigned long long _leftButtonType;
}

- (unsigned long long)buttonTypeForPosition:(unsigned long long)arg1;
- (id)buttonForPosition:(unsigned long long)arg1;
- (id)initWithLeftButtonType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
