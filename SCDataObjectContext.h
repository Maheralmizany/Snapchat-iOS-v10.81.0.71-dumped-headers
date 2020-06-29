//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCDataObjectContext : NSObject
{
}

+ (id)scanCurrentUserHashDirForContextName:(id)arg1;
+ (void)clearDiskFileForContextName:(id)arg1 exceptUserHashSet:(id)arg2;
+ (void)markDiskFileForContextName:(id)arg1 userId:(id)arg2;
+ (_Bool)diskFileExistsForContextName:(id)arg1 userId:(id)arg2;
+ (_Bool)sharedDiskFileExistsForContextName:(id)arg1;
+ (id)diskFileURLForContextName:(id)arg1 userId:(id)arg2;
+ (id)sharedDiskFileURLForContextName:(id)arg1;
+ (id)sharedContextFor:(id)arg1;
- (unsigned long long)totalCoreDataErrorCount;
- (id)diskUsageReport;
- (void)unobserve:(id)arg1 objectClass:(Class)arg2 objectID:(id)arg3;
- (id)observe:(Class)arg1 object:(id)arg2 queue:(id)arg3 changeHandler:(CDUnknownBlockType)arg4;
- (void)dispatchOnceWithToken:(long long *)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)isInsidePerformChanges;
- (void)performChanges:(CDUnknownBlockType)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)destroyPersistentStore:(CDUnknownBlockType)arg1 reinstall:(_Bool)arg2;
- (void)installPersistentStore;
@property(readonly, copy, nonatomic) NSString *contextName;
- (id)initWithContextName:(id)arg1 userId:(id)arg2 logger:(id)arg3;

@end

