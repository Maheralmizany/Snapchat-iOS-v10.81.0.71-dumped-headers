//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCLensExplorerLensCellViewModelDataProviderConfiguration : NSObject <NSCopying, NSCoding>
{
    _Bool _creatorPageEnabled;
    _Bool _infoCardEnabled;
    unsigned long long _minVisibleItemsCount;
    unsigned long long _minColumnsCount;
    unsigned long long _sectionIndex;
    unsigned long long _defaultCellType;
    NSString *_sectionId;
}

@property(readonly, copy, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
@property(readonly, nonatomic) unsigned long long defaultCellType; // @synthesize defaultCellType=_defaultCellType;
@property(readonly, nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(readonly, nonatomic) _Bool infoCardEnabled; // @synthesize infoCardEnabled=_infoCardEnabled;
@property(readonly, nonatomic) _Bool creatorPageEnabled; // @synthesize creatorPageEnabled=_creatorPageEnabled;
@property(readonly, nonatomic) unsigned long long minColumnsCount; // @synthesize minColumnsCount=_minColumnsCount;
@property(readonly, nonatomic) unsigned long long minVisibleItemsCount; // @synthesize minVisibleItemsCount=_minVisibleItemsCount;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMinVisibleItemsCount:(unsigned long long)arg1 minColumnsCount:(unsigned long long)arg2 creatorPageEnabled:(_Bool)arg3 infoCardEnabled:(_Bool)arg4 sectionIndex:(unsigned long long)arg5 defaultCellType:(unsigned long long)arg6 sectionId:(id)arg7;
- (id)initWithCoder:(id)arg1;

@end

