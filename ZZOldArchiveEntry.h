//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZZArchiveEntry.h"

@class NSData, NSDate;

@interface ZZOldArchiveEntry : ZZArchiveEntry
{
    struct ZZCentralFileHeader *_centralFileHeader;
    struct ZZLocalFileHeader *_localFileHeader;
}

- (id)newWriterCanSkipLocalFile:(_Bool)arg1;
- (struct CGDataProvider *)newDataProviderWithError:(out id *)arg1;
- (id)newDataWithError:(out id *)arg1;
- (id)newStreamWithError:(out id *)arg1;
- (id)streamForData:(id)arg1 error:(out id *)arg2;
- (_Bool)checkCompression:(out id *)arg1;
- (id)fileNameWithEncoding:(unsigned long long)arg1;
- (_Bool)check:(out id *)arg1;
@property(readonly, nonatomic) unsigned long long encoding;
@property(readonly, nonatomic) NSData *rawFileName;
@property(readonly, nonatomic) unsigned short fileMode;
@property(readonly, nonatomic) unsigned long long uncompressedSize;
@property(readonly, nonatomic) unsigned long long compressedSize;
@property(readonly, nonatomic) unsigned long long crc32;
@property(readonly, nonatomic) NSDate *lastModified;
@property(readonly, nonatomic) _Bool compressed;
- (unsigned short)compressionMethod;
- (id)fileData;
- (id)initWithCentralFileHeader:(struct ZZCentralFileHeader *)arg1 localFileHeader:(struct ZZLocalFileHeader *)arg2;

@end

