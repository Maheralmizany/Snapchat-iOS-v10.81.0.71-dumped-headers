//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GRXWriter : NSObject
{
    long long _state;
}

+ (id)emptyWriter;
+ (id)writerWithError:(id)arg1;
+ (id)writerWithValue:(id)arg1;
+ (id)writerWithContainer:(id)arg1;
+ (id)writerWithValueSupplier:(CDUnknownBlockType)arg1;
+ (id)writerWithEnumerator:(id)arg1;
@property long long state; // @synthesize state=_state;
- (void)finishWithError:(id)arg1;
- (void)startWithWriteable:(id)arg1;
- (id)map:(CDUnknownBlockType)arg1;

@end
