//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCSecurityServices : NSObject
{
    SCLazy *_fideliusFriendMetadataCoordinator;
    SCLazy *_fideliusFriendMetadataObservableRepository;
}

@property(readonly, nonatomic) SCLazy *fideliusFriendMetadataObservableRepository; // @synthesize fideliusFriendMetadataObservableRepository=_fideliusFriendMetadataObservableRepository;
@property(readonly, nonatomic) SCLazy *fideliusFriendMetadataCoordinator; // @synthesize fideliusFriendMetadataCoordinator=_fideliusFriendMetadataCoordinator;
- (void).cxx_destruct;
- (id)initWithFideliusFriendMetadataCoordinator:(id)arg1 fideliusFriendMetadataObservableRepository:(id)arg2;

@end

