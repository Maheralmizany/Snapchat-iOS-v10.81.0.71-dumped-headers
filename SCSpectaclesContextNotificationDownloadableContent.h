//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDownloadableContent.h"

@class NSString;

@interface SCSpectaclesContextNotificationDownloadableContent : SCDownloadableContent
{
    unsigned long long _scale;
    NSString *_folderName;
}

+ (id)shared;
@property(copy, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
@property(nonatomic) unsigned long long scale; // @synthesize scale=_scale;
- (void).cxx_destruct;
- (id)imageNamed:(id)arg1;
- (id)pathForImageNamed:(id)arg1;
- (id)eventUniqueId;
- (id)resourceName;
- (id)fileNames;
- (id)directoryName;
- (id)init;

@end

