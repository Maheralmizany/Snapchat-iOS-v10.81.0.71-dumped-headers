//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensUpdateResolver-Protocol.h"

@class NSString;

@interface SCChecksumUpdateResolver : NSObject <SCLensUpdateResolver>
{
}

- (id)_lensIdToLensMapFromLenses:(id)arg1;
- (id)_lensFromLens:(id)arg1 expirationDate:(id)arg2;
- (id)lensIdToChecksumMapFromLenses:(id)arg1;
- (id)lensesByResolvingUpdateForCachedLenses:(id)arg1 receivedLenses:(id)arg2 updateMetadataList:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
