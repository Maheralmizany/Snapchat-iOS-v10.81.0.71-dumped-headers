//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCLensMetadataStoreProtocol, SCLensUnlockerProtocol;

@interface SCUcoLensMetadataStoreTuple : NSObject
{
    id <SCLensMetadataStoreProtocol> _ucoLensMetadataStore;
    id <SCLensUnlockerProtocol> _lensUnlocker;
}

@property(readonly, nonatomic) id <SCLensUnlockerProtocol> lensUnlocker; // @synthesize lensUnlocker=_lensUnlocker;
@property(readonly, nonatomic) id <SCLensMetadataStoreProtocol> ucoLensMetadataStore; // @synthesize ucoLensMetadataStore=_ucoLensMetadataStore;
- (void).cxx_destruct;
- (id)initWithUcoLensMetadataStore:(id)arg1 lensUnlocker:(id)arg2;

@end
