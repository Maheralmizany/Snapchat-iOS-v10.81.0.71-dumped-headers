//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCNetworkImage;

@interface SCCompositeNetworkImageLayerModel : NSObject <NSCopying, NSCoding>
{
    SCNetworkImage *_networkImage;
    NSString *_identifier;
    double _rotationAngle;
    struct CGRect _frame;
}

@property(readonly, nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) SCNetworkImage *networkImage; // @synthesize networkImage=_networkImage;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNetworkImage:(id)arg1 identifier:(id)arg2 frame:(struct CGRect)arg3 rotationAngle:(double)arg4;
- (id)initWithCoder:(id)arg1;

@end

