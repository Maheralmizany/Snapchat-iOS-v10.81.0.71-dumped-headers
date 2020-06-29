//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy, SCQueuePerformer, SCSessionRequestManager;

@interface SCStickerPackFetcher : NSObject
{
    SCSessionRequestManager *_requestManager;
    SCLazy *_bloopsAPI;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (id)_stickerPacksFromResponseDictionary:(id)arg1;
- (id)_stickerPacksFromLocalDisk;
- (void)fetchStickerPackageMetadataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithRequestManager:(id)arg1 bloopsAPI:(id)arg2 userPreferences:(id)arg3 performer:(id)arg4;

@end

