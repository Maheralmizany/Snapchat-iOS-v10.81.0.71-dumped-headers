//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStreamingFriendClustersProviding-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet;
@protocol SCStreamingFriendClustersListening;

@interface SCStreamingFriendClustersProvider : NSObject <SCStreamingFriendClustersProviding>
{
    NSMutableDictionary *_friendClustersDictionary;
    NSMutableDictionary *_personLocationClustersDictionary;
    NSMutableDictionary *_personLocationClustersByUserId;
    NSMutableDictionary *_personLocationsByUserId;
    NSMutableSet *_queuedTombstonedMessages;
    id <SCStreamingFriendClustersListening> _delegate;
}

@property(readonly, nonatomic) NSDictionary *personLocationsByUserId; // @synthesize personLocationsByUserId=_personLocationsByUserId;
@property(readonly, nonatomic) NSDictionary *personLocationClustersDictionary; // @synthesize personLocationClustersDictionary=_personLocationClustersDictionary;
@property(readonly, nonatomic) NSDictionary *personLocationClustersByUserId; // @synthesize personLocationClustersByUserId=_personLocationClustersByUserId;
@property(nonatomic) __weak id <SCStreamingFriendClustersListening> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addOrUpdateFriendCluster:(id)arg1;
- (void)_deleteFriendCluster:(id)arg1;
- (id)personLocationClustersSet;
- (void)didReceiveUpdatedFriendCluster:(id)arg1;
- (id)init;

@end

