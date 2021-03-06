//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCMediaMetadata, SDMSnapDoc;
@protocol SCChatMediaContentProvider;

@interface SCExternalMediaDataModel : NSObject <NSCopying>
{
    id <SCChatMediaContentProvider> _media;
    SCMediaMetadata *_mediaMetadata;
    NSString *_snapDocKey;
    SDMSnapDoc *_snapDoc;
}

@property(readonly, copy, nonatomic) SDMSnapDoc *snapDoc; // @synthesize snapDoc=_snapDoc;
@property(readonly, copy, nonatomic) NSString *snapDocKey; // @synthesize snapDocKey=_snapDocKey;
@property(readonly, copy, nonatomic) SCMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(readonly, nonatomic) id <SCChatMediaContentProvider> media; // @synthesize media=_media;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMedia:(id)arg1 mediaMetadata:(id)arg2 snapDocKey:(id)arg3 snapDoc:(id)arg4;

@end

