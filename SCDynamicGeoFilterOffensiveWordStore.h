//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDownloadableContent.h"

#import "SCServerConfigListener-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol SCDownloadableContentManaging;

@interface SCDynamicGeoFilterOffensiveWordStore : SCDownloadableContent <SCServerConfigListener>
{
    _Bool _offensiveWordDetectionEnabled;
    NSString *_offensiveWordsFileVerion;
    NSDictionary *_offensiveWordDict;
    NSDictionary *_altCharDict;
    NSArray *_accentLanguages;
    id <SCDownloadableContentManaging> _downloadManager;
}

+ (id)sharedInstance;
+ (id)sharedInstanceWithDownloadManager:(id)arg1;
@property(retain, nonatomic) id <SCDownloadableContentManaging> downloadManager; // @synthesize downloadManager=_downloadManager;
@property(nonatomic) _Bool offensiveWordDetectionEnabled; // @synthesize offensiveWordDetectionEnabled=_offensiveWordDetectionEnabled;
@property(retain) NSArray *accentLanguages; // @synthesize accentLanguages=_accentLanguages;
@property(retain, nonatomic) NSDictionary *altCharDict; // @synthesize altCharDict=_altCharDict;
@property(retain, nonatomic) NSDictionary *offensiveWordDict; // @synthesize offensiveWordDict=_offensiveWordDict;
@property(retain, nonatomic) NSString *offensiveWordsFileVerion; // @synthesize offensiveWordsFileVerion=_offensiveWordsFileVerion;
- (void).cxx_destruct;
- (void)serverConfigDidChange:(id)arg1;
- (id)initWithDownloadManager:(id)arg1;
- (void)proceedAccordingToRegistryConfig;
- (void)loadOffensiveWordsFromFile;
- (id)getDictFromJSONFilePath:(id)arg1;
- (id)eventUniqueId;
- (id)resourceName;
- (id)fileNames;
- (id)altCharsJSONFilePath;
- (id)offensiveWordsJSONFilePath;
- (id)offensiveWordsFolderName;
- (id)directoryName;
- (_Bool)offensiveWordInText:(id)arg1;
- (_Bool)isOffensiveExactWordInNormalizedText:(id)arg1 languageCode:(id)arg2;
- (_Bool)isOffensiveSubstringInNormalizedText:(id)arg1 languageCode:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

