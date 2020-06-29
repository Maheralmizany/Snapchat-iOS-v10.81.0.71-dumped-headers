//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSArray, NSString, SCStoriesCustomStoryCreationInfo, SCStoriesCustomStorySortingHints;

@interface SCStoriesCustomStoryMetadataChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    _Bool _currentUserCanPost;
    _Bool _isInactive;
    _Bool _currentUserCanAutosave;
    _Bool _currentUserAutosaveEnabled;
    NSString *_publicationId;
    long long _type;
    NSString *_mischiefId;
    NSString *_displayName;
    NSString *_subText;
    double _metadataTimestamp;
    SCStoriesCustomStoryCreationInfo *_creationInfo;
    NSArray *_participants;
    NSArray *_posterIdsPermitted;
    NSArray *_viewerIdsPermitted;
    SCStoriesCustomStorySortingHints *_sortingHints;
    long long _subtype;
    unsigned long long _version;
}

+ (id)deletionRequestForStoriesCustomStoryMetadata:(id)arg1;
+ (id)changeRequestForStoriesCustomStoryMetadata:(id)arg1;
+ (id)creationRequestWithStoriesCustomStoryMetadata:(id)arg1;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) long long subtype; // @synthesize subtype=_subtype;
@property(nonatomic) _Bool currentUserAutosaveEnabled; // @synthesize currentUserAutosaveEnabled=_currentUserAutosaveEnabled;
@property(nonatomic) _Bool currentUserCanAutosave; // @synthesize currentUserCanAutosave=_currentUserCanAutosave;
@property(copy, nonatomic) SCStoriesCustomStorySortingHints *sortingHints; // @synthesize sortingHints=_sortingHints;
@property(nonatomic) _Bool isInactive; // @synthesize isInactive=_isInactive;
@property(copy, nonatomic) NSArray *viewerIdsPermitted; // @synthesize viewerIdsPermitted=_viewerIdsPermitted;
@property(copy, nonatomic) NSArray *posterIdsPermitted; // @synthesize posterIdsPermitted=_posterIdsPermitted;
@property(copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(nonatomic) _Bool currentUserCanPost; // @synthesize currentUserCanPost=_currentUserCanPost;
@property(copy, nonatomic) SCStoriesCustomStoryCreationInfo *creationInfo; // @synthesize creationInfo=_creationInfo;
@property(nonatomic) double metadataTimestamp; // @synthesize metadataTimestamp=_metadataTimestamp;
@property(copy, nonatomic) NSString *subText; // @synthesize subText=_subText;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *mischiefId; // @synthesize mischiefId=_mischiefId;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *publicationId; // @synthesize publicationId=_publicationId;
- (void).cxx_destruct;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;
- (id)_storiesCustomStoryMetadata;
- (id)initWithRowid:(long long)arg1 publicationId:(id)arg2 type:(long long)arg3 mischiefId:(id)arg4 displayName:(id)arg5 subText:(id)arg6 metadataTimestamp:(double)arg7 creationInfo:(id)arg8 currentUserCanPost:(_Bool)arg9 participants:(id)arg10 posterIdsPermitted:(id)arg11 viewerIdsPermitted:(id)arg12 isInactive:(_Bool)arg13 sortingHints:(id)arg14 currentUserCanAutosave:(_Bool)arg15 currentUserAutosaveEnabled:(_Bool)arg16 subtype:(long long)arg17 version:(unsigned long long)arg18;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (const char *)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
