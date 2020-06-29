//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (MGLAdditions)
+ (id)URLFromComposerAttributeValue:(id)arg1;
+ (id)URLByPercentEscapingString:(id)arg1;
+ (id)stringFromQueryParameters:(id)arg1;
+ (id)sc_uniqueMP4FileURLInTemporaryDirectory;
+ (id)sc_uniqueJPGFileURLInTemporaryDirectory;
+ (id)sc_fileURLInTemporaryDirectoryWithFilename:(id)arg1 extension:(id)arg2;
+ (id)sc_fileURLInTemporaryDirectoryWithFilename:(id)arg1;
+ (id)sc_fromStoryId:(id)arg1 inviteId:(id)arg2 storyName:(id)arg3;
+ (id)sc_fromStoryInviteAction:(id)arg1;
- (id)mgl_URLByStandardizingScheme;
- (_Bool)isHighlightReel;
- (_Bool)isWeblink;
- (_Bool)isGCSSignedURL;
- (_Bool)isAwsSignedURL;
- (id)queryValueForQueryName:(id)arg1;
- (id)URLByUpdatingQueryName:(id)arg1 queryValue:(id)arg2;
- (id)urlByRemovingParams;
- (id)URLByUpdatingWithParameters:(id)arg1;
- (id)queryParametersDecoded:(_Bool)arg1 lowercased:(_Bool)arg2;
- (id)absoluteStringWithoutFragment;
- (id)suffixWithoutDomain;
- (void)FC_encodeWithCoder:(id)arg1;
- (_Bool)isSkipBackupAttributeAddedToURL;
- (_Bool)addSkipBackupAttributeToURL;
- (void)reloadAssetKeys;
@end

