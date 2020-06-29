//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCMemoriesServices : NSObject
{
    SCLazy *_addSnapMutating;
    SCLazy *_autoSaveMutating;
    SCLazy *_deletionMutating;
    SCLazy *_editMutating;
    SCLazy *_multiSnapMutating;
    SCLazy *_storyMutating;
    SCLazy *_sharedStoryMutating;
    SCLazy *_batchCaptureMutating;
}

@property(readonly, nonatomic) SCLazy *batchCaptureMutating; // @synthesize batchCaptureMutating=_batchCaptureMutating;
@property(readonly, nonatomic) SCLazy *sharedStoryMutating; // @synthesize sharedStoryMutating=_sharedStoryMutating;
@property(readonly, nonatomic) SCLazy *storyMutating; // @synthesize storyMutating=_storyMutating;
@property(readonly, nonatomic) SCLazy *multiSnapMutating; // @synthesize multiSnapMutating=_multiSnapMutating;
@property(readonly, nonatomic) SCLazy *editMutating; // @synthesize editMutating=_editMutating;
@property(readonly, nonatomic) SCLazy *deletionMutating; // @synthesize deletionMutating=_deletionMutating;
@property(readonly, nonatomic) SCLazy *autoSaveMutating; // @synthesize autoSaveMutating=_autoSaveMutating;
@property(readonly, nonatomic) SCLazy *addSnapMutating; // @synthesize addSnapMutating=_addSnapMutating;
- (void).cxx_destruct;
- (id)initWithAddSnapMutating:(id)arg1 autoSaveMutating:(id)arg2 deletionMutating:(id)arg3 editMutating:(id)arg4 multiSnapMutating:(id)arg5 storyMutating:(id)arg6 sharedStoryMutating:(id)arg7 batchCaptureMutating:(id)arg8;

@end

