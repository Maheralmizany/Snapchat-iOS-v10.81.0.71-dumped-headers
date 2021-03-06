//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, SCQueuePerformer;

@interface SCLensMockDataCache : NSObject
{
    NSFileManager *_fileManager;
    SCQueuePerformer *_performer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_mockDataPathForURLString:(id)arg1;
- (id)_dataForPath:(id)arg1;
- (void)_saveDataToDisk:(id)arg1 toPath:(id)arg2;
- (void)dataForURLString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setData:(id)arg1 forURLString:(id)arg2;
- (id)init;

@end

