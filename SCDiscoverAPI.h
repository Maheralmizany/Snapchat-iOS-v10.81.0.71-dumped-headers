//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCDiscoverAPI : NSObject
{
}

+ (id)tweakEndpoint:(id)arg1;
+ (void)fetchEdition:(id)arg1 publisher:(id)arg2 endpoint:(id)arg3 context:(unsigned long long)arg4 requestManager:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (void)fetchCatalogForEditionId:(id)arg1 videoId:(id)arg2 videoCatalogEndpoint:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;

@end

