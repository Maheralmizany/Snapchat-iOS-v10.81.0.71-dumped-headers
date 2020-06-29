//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCFideliusEncryptedDatabase, SCFideliusFriendDeviceInfoCache, SCFideliusFriendDeviceInfoTable, SCFideliusMessageEncryptionKeyTable, SCFideliusSEKDataCache, SCFideliusSEKDataTable, SCFideliusUserIdentityCache, SCFideliusUserIdentityTable;
@protocol SCPerforming;

@interface SCFideliusUserDatabaseManager : NSObject
{
    id <SCPerforming> _performer;
    NSString *_name;
    NSString *_hashedBeta;
    SCFideliusEncryptedDatabase *_fidDb;
    SCFideliusFriendDeviceInfoTable *_friendDeviceTable;
    SCFideliusSEKDataTable *_sekTable;
    SCFideliusUserIdentityTable *_userIdentityTable;
    SCFideliusMessageEncryptionKeyTable *_messageKeyTable;
    SCFideliusFriendDeviceInfoCache *_friendDeviceCache;
    SCFideliusSEKDataCache *_sekCache;
    SCFideliusUserIdentityCache *_userIdentityCache;
    _Bool _shouldFetchKeys;
}

+ (id)userDatabaseUrlWithName:(id)arg1 version:(unsigned long long)arg2 fileManager:(id)arg3;
+ (void)deleteDatabaseWithName:(id)arg1 version:(unsigned long long)arg2 source:(id)arg3;
+ (_Bool)databaseFileExists:(id)arg1;
- (void).cxx_destruct;
- (_Bool)shouldFetchKeys;
- (void)logDBLoadResult:(_Bool)arg1 isFileExist:(_Bool)arg2 isIdentityMissing:(_Bool)arg3 message:(id)arg4 eventName:(id)arg5;
- (void)logDBSize:(id)arg1;
- (_Bool)createWithUrl:(id)arg1 iwek:(id)arg2 identity:(id)arg3 fileManager:(id)arg4;
- (_Bool)loadWithUrl:(id)arg1 iwek:(id)arg2 identity:(id)arg3 fileManager:(id)arg4 error:(id *)arg5 eventName:(id)arg6;
- (_Bool)createUserTables;
- (void)perform:(CDUnknownBlockType)arg1;
- (id)messageKeyTable;
- (id)sekDataTable;
- (id)userIdentityCache;
- (id)sekDataCache;
- (id)friendDeviceInfoCache;
- (id)hashedBeta;
- (id)databaseName;
- (_Bool)close;
- (id)initWithName:(id)arg1 iwek:(id)arg2 hashedBeta:(id)arg3 identity:(id)arg4 useFakePerformer:(_Bool)arg5 version:(unsigned long long)arg6 error:(id *)arg7;
- (id)initWithName:(id)arg1 iwek:(id)arg2 hashedBeta:(id)arg3 identity:(id)arg4 useFakePerformer:(_Bool)arg5 error:(id *)arg6;

@end
