//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SOJUIdentityVerifyPhoneNumberResponse;

@interface SCVerifyPhoneNumberResponse : NSObject
{
    _Bool _isSuccess;
    NSString *_errorMessage;
    NSString *_phoneNumber;
    SOJUIdentityVerifyPhoneNumberResponse *_verifyResponse;
}

@property(retain, nonatomic) SOJUIdentityVerifyPhoneNumberResponse *verifyResponse; // @synthesize verifyResponse=_verifyResponse;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
- (void).cxx_destruct;

@end

