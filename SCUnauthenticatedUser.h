//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCUnauthenticatedUser : NSObject
{
    NSString *_firstName;
    NSString *_lastName;
    NSDate *_birthday;
    NSString *_username;
    NSString *_password;
    unsigned long long _registerAttemptCount;
}

@property(nonatomic) unsigned long long registerAttemptCount; // @synthesize registerAttemptCount=_registerAttemptCount;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;

@end

