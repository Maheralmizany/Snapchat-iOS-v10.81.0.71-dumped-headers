//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSError, NSString;

@interface SCMyStoriesSaveUpdate : NSObject <NSCopying>
{
    unsigned long long _subtype;
    _Bool _saveBegan_savingToMemories;
    _Bool _saveBegan_savingToCameraRoll;
    _Bool _saveSucceeded_savedToMemories;
    _Bool _saveSucceeded_savedToCameraRoll;
    NSString *_saveSucceeded_storyDisplayName;
    NSError *_saveFailed_error;
}

+ (id)saveSucceededWithSavedToMemories:(_Bool)arg1 savedToCameraRoll:(_Bool)arg2 storyDisplayName:(id)arg3;
+ (id)saveFailedWithError:(id)arg1;
+ (id)saveBeganWithSavingToMemories:(_Bool)arg1 savingToCameraRoll:(_Bool)arg2;
- (void).cxx_destruct;
- (void)matchSaveBegan:(CDUnknownBlockType)arg1 saveSucceeded:(CDUnknownBlockType)arg2 saveFailed:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

