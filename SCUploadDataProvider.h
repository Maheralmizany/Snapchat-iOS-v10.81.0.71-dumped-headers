//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNNetworkTypesUploadDataProvider-Protocol.h"

@class NSString;
@protocol SCNNetworkTypesUploadInMemoryDataProvider, SCNNetworkTypesUploadStreamDataProvider;

@interface SCUploadDataProvider : NSObject <SCNNetworkTypesUploadDataProvider>
{
    long long _type;
    NSString *_filePath;
    id <SCNNetworkTypesUploadInMemoryDataProvider> _memoryDataProvider;
    id <SCNNetworkTypesUploadStreamDataProvider> _streamDataProvider;
    _Bool _validDataProvider;
}

- (void).cxx_destruct;
- (_Bool)isValid;
- (id)getUploadStreamDataProvider;
- (id)getUploadInMemoryDataProvider;
- (id)getUploadFilePath;
- (long long)getType;
- (id)initWithFilePath:(id)arg1 memoryDataProvider:(id)arg2 streamDataProvdier:(id)arg3;

@end
