//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCLocalizedStringEvent : NSObject <NSCopying>
{
    _Bool _is_success;
    NSString *_locale;
}

@property(readonly, nonatomic) _Bool is_success; // @synthesize is_success=_is_success;
@property(readonly, copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocale:(id)arg1 is_success:(_Bool)arg2;

@end

