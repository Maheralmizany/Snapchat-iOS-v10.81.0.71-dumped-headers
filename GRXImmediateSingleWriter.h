//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GRXImmediateWriter.h"

@interface GRXImmediateSingleWriter : GRXImmediateWriter
{
    id _value;
    long long _state;
}

+ (id)writerWithValue:(id)arg1;
- (long long)state;
- (void).cxx_destruct;
- (id)map:(CDUnknownBlockType)arg1;
- (void)setState:(long long)arg1;
- (void)startWithWriteable:(id)arg1;
- (id)initWithValue:(id)arg1;

@end

