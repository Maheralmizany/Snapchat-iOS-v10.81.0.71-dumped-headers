//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCSelectionItem;

@interface SCSelectionItemAttribution : NSObject <NSCopying>
{
    SCSelectionItem *_item;
    NSString *_source;
    double _selectedTimestamp;
}

@property(readonly, nonatomic) double selectedTimestamp; // @synthesize selectedTimestamp=_selectedTimestamp;
@property(readonly, copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) SCSelectionItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItem:(id)arg1 source:(id)arg2 selectedTimestamp:(double)arg3;

@end
