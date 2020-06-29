//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PCCredentials, ProtectedCoreMLUnarchiver;

@interface ProtectedCoreML : NSObject
{
    id <ProtectedCoreMLUnarchiver> _unarchiver;
    id <PCCredentials> _credentials;
}

@property(retain, nonatomic) id <PCCredentials> credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) id <ProtectedCoreMLUnarchiver> unarchiver; // @synthesize unarchiver=_unarchiver;
- (void).cxx_destruct;
- (id)_decryptData:(id)arg1 key:(id)arg2 iv:(id)arg3;
- (id)_stringToHEX:(id)arg1;
- (id)generatedCoreMLModelOfClass:(Class)arg1 configuration:(id)arg2 filePath:(id)arg3 aesKey:(id)arg4 aesIv:(id)arg5 workingDirectory:(id)arg6 error:(id *)arg7;
- (id)generateWorkingDirectoryWithError:(id *)arg1;
- (id)generatedCoreMLModelOfClass:(Class)arg1 configuration:(id)arg2 filePath:(id)arg3 error:(id *)arg4;
- (id)generatedCoreMLModelOfClass:(Class)arg1 filePath:(id)arg2 error:(id *)arg3;
- (id)initWithUnarchiver:(id)arg1 credentials:(id)arg2;

@end

