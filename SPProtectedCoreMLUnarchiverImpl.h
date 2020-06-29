//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ProtectedCoreMLUnarchiver-Protocol.h"

@class NSString;

@interface SPProtectedCoreMLUnarchiverImpl : NSObject <ProtectedCoreMLUnarchiver>
{
}

- (id)dataForObject:(id)arg1 inRange:(struct _NSRange)arg2 orLocation:(unsigned long long)arg3 andLength:(unsigned long long)arg4;
- (void)writeFileDataForObject:(id)arg1 atLocation:(unsigned long long)arg2 withLength:(unsigned long long)arg3 atPath:(id)arg4;
- (unsigned long long)sizeForObject:(id)arg1 atOffset:(unsigned long long)arg2;
- (id)nameForObject:(id)arg1 atOffset:(unsigned long long)arg2;
- (BOOL)typeForObject:(id)arg1 atOffset:(unsigned long long)arg2;
- (_Bool)untarObject:(id)arg1 size:(unsigned long long)arg2 toPath:(id)arg3 error:(id *)arg4;
- (_Bool)unarchiveData:(id)arg1 toDestinationPath:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

