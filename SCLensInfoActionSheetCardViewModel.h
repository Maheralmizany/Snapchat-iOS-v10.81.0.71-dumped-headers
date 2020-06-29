//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIImage;

@interface SCLensInfoActionSheetCardViewModel : NSObject <NSCopying>
{
    _Bool _shouldShowStarImage;
    _Bool _shouldShowArrowImage;
    UIImage *_lensIcon;
    NSString *_lensName;
    NSString *_creatorName;
}

@property(readonly, nonatomic) _Bool shouldShowArrowImage; // @synthesize shouldShowArrowImage=_shouldShowArrowImage;
@property(readonly, nonatomic) _Bool shouldShowStarImage; // @synthesize shouldShowStarImage=_shouldShowStarImage;
@property(readonly, copy, nonatomic) NSString *creatorName; // @synthesize creatorName=_creatorName;
@property(readonly, copy, nonatomic) NSString *lensName; // @synthesize lensName=_lensName;
@property(readonly, copy, nonatomic) UIImage *lensIcon; // @synthesize lensIcon=_lensIcon;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLensIcon:(id)arg1 lensName:(id)arg2 creatorName:(id)arg3 shouldShowStarImage:(_Bool)arg4 shouldShowArrowImage:(_Bool)arg5;

@end
