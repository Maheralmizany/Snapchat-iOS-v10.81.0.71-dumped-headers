//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol SCSpectaclesMessageBufferDelegate;

@interface SCSpectaclesMessageBuffer : NSObject
{
    NSMutableData *_requestBuffer;
    unsigned long long _lengthBits;
    id <SCSpectaclesMessageBufferDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSpectaclesMessageBufferDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)_tlvType;
- (unsigned long long)_tlvLength;
- (void)parseBuffer;
- (void)processData:(id)arg1;
- (id)dataWithTlvHeaderPrepended:(id)arg1 messageType:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1;

@end

