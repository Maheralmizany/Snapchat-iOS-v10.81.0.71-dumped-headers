//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSArray, NSString;

@interface NSError (SPDebug)
+ (id)errorWithCode:(long long)arg1 allowedFutureDate:(id)arg2;
+ (id)parametersForError:(id)arg1;
+ (id)errorWithDomain:(id)arg1 description:(id)arg2 code:(unsigned long long)arg3;
+ (id)storageError:(unsigned long long)arg1;
+ (id)_descriptionForCode:(unsigned long long)arg1;
+ (_Bool)clearError:(id *)arg1;
+ (_Bool)fillError:(id *)arg1 withDomain:(id)arg2 code:(long long)arg3 description:(id)arg4;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)grpc_errorFromStatusCode:(int)arg1 details:(const char *)arg2 errorString:(const char *)arg3;
+ (id)cacheError:(unsigned long long)arg1;
+ (id)descriptionForCode:(unsigned long long)arg1;
+ (id)sc_lensSignatureValidationResourceTypeMismatchErrorWithResource:(id)arg1 destinationType:(long long)arg2;
+ (id)sc_lensSignatureValidationUnknownResourceTypeErrorWithResource:(id)arg1 destinationType:(long long)arg2 contentPath:(id)arg3;
+ (id)sc_lensSignatureValidationFailedErrorWithContentId:(id)arg1 targetHash:(id)arg2 contentHash:(id)arg3 contentSignature:(id)arg4;
+ (id)sc_lensSignatureValidationHashCheckingFailedErrorWithOptionalContentPath:(id)arg1 targetHash:(id)arg2 contentHash:(id)arg3;
+ (id)sc_lensSignatureValidationFailedErrorWithOptionalContentPath:(id)arg1;
+ (id)unlockingFailed;
+ (id)errorWithServletStatusCode:(long long)arg1 snapResults:(id)arg2 entryResults:(id)arg3 addMediaResults:(id)arg4 updateMediaResults:(id)arg5 backoffTime:(double)arg6 debugInfo:(id)arg7 logMessage:(id)arg8;
+ (id)errorWithGCSStatusCode:(long long)arg1 error:(id)arg2;
+ (id)errorWithLocalInconsistencyError:(id)arg1;
+ (id)errorWithNetworkError:(id)arg1;
- (id)f2f_description:(_Bool)arg1;
- (id)sp_fullDescription;
- (id)sp_userDescription;
- (id)sp_userFriendlyErrorWithDescription:(id)arg1;
- (id)allowedFutureDate;
- (_Bool)isSQLiteAuthUser;
- (_Bool)isSQLiteWarningAutoindex;
- (_Bool)isSQLiteNoticeRecoverRollback;
- (_Bool)isSQLiteNoticeRecoverWal;
- (_Bool)isSQLiteConstraintRowid;
- (_Bool)isSQLiteConstraintVtab;
- (_Bool)isSQLiteConstraintUnique;
- (_Bool)isSQLiteConstraintTrigger;
- (_Bool)isSQLiteConstraintPrimaryKey;
- (_Bool)isSQLiteConstraintNotNull;
- (_Bool)isSQLiteConstraintFunction;
- (_Bool)isSQLiteConstraintForeignKey;
- (_Bool)isSQLiteConstraintCommitHook;
- (_Bool)isSQLiteConstraintCheck;
- (_Bool)isSQLiteAbortRollback;
- (_Bool)isSQLiteReadonlyDBMoved;
- (_Bool)isSQLiteReadonlyRollback;
- (_Bool)isSQLiteReadonlyCantLock;
- (_Bool)isSQLiteReadonlyRecovery;
- (_Bool)isSQLiteCorruptVtab;
- (_Bool)isSQLiteCantOpenConvPath;
- (_Bool)isSQLiteCantOpenFullPath;
- (_Bool)isSQLiteCantOpenIsDir;
- (_Bool)isSQLiteCantOpenNoTempDir;
- (_Bool)isSQLiteBusySnapshot;
- (_Bool)isSQLiteBusyRecovery;
- (_Bool)isSQLiteLockedSharedCache;
- (_Bool)isSQLiteIOErrAuth;
- (_Bool)isSQLiteIOErrVnode;
- (_Bool)isSQLiteIOErrConvPath;
- (_Bool)isSQLiteIOErrGetTempPath;
- (_Bool)isSQLiteIOErrMmap;
- (_Bool)isSQLiteIOErrDeleteNoEnt;
- (_Bool)isSQLiteIOErrSeek;
- (_Bool)isSQLiteIOErrShmMap;
- (_Bool)isSQLiteIOErrShmLock;
- (_Bool)isSQLiteIOErrShmSize;
- (_Bool)isSQLiteIOErrShmOpen;
- (_Bool)isSQLiteIOErrDirClose;
- (_Bool)isSQLiteIOErrClose;
- (_Bool)isSQLiteIOErrLock;
- (_Bool)isSQLiteIOErrCheckReservedLock;
- (_Bool)isSQLiteIOErrAccess;
- (_Bool)isSQLiteIOErrNomem;
- (_Bool)isSQLiteIOErrBlocked;
- (_Bool)isSQLiteIOErrDelete;
- (_Bool)isSQLiteIOErrRdlock;
- (_Bool)isSQLiteIOErrUnlock;
- (_Bool)isSQLiteIOErrFStat;
- (_Bool)isSQLiteIOErrTruncate;
- (_Bool)isSQLiteIOErrDirFSync;
- (_Bool)isSQLiteIOErrFSync;
- (_Bool)isSQLiteIOErrWrite;
- (_Bool)isSQLiteIOErrShortRead;
- (_Bool)isSQLiteIOErrRead;
- (_Bool)isSQLiteWarning;
- (_Bool)isSQLiteNotice;
- (_Bool)isSQLiteNotADB;
- (_Bool)iSQLiteRange;
- (_Bool)isSQLiteAuth;
- (_Bool)isSQLiteNoLFS;
- (_Bool)isSQLiteMisuse;
- (_Bool)isSQLiteMismatch;
- (_Bool)isSQLiteConstraint;
- (_Bool)isSQLiteTooBig;
- (_Bool)isSQLiteSchema;
- (_Bool)isSQLiteEmpty;
- (_Bool)isSQLiteProtocol;
- (_Bool)isSQLiteCantOpen;
- (_Bool)isSQLiteFull;
- (_Bool)isSQLiteNotFound;
- (_Bool)isSQLiteCorrupt;
- (_Bool)isSQLiteIOErr;
- (_Bool)isSQLiteInterrupt;
- (_Bool)isSQLiteReadonly;
- (_Bool)isSQLiteNomem;
- (_Bool)isSQLiteLocked;
- (_Bool)isSQLiteBusy;
- (_Bool)isSQLiteAbort;
- (_Bool)isSQLitePerm;
- (_Bool)isSQLiteInternal;
- (_Bool)isSQLiteGeneric;
@property(readonly, nonatomic) NSString *bloopsDescription;
@property(readonly, copy, nonatomic) NSError *networkError;
@property(readonly, nonatomic) _Bool GCSTimeoutError;
@property(readonly, nonatomic) long long GCSStatusCode;
@property(readonly, nonatomic) NSArray *servletUpdateMediaResults;
@property(readonly, nonatomic) NSArray *servletMediaResults;
@property(readonly, nonatomic) NSArray *servletSnapResults;
@property(readonly, nonatomic) NSArray *servletEntryResults;
@property(readonly, copy, nonatomic) NSString *logMessage;
@property(readonly, nonatomic) long long servletStatusCode;
@property(readonly, nonatomic) double backoffTime;
@end

