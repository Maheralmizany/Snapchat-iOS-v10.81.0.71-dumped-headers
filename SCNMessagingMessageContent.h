//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface SCNMessagingMessageContent : NSObject
{
    NSData *_content;
    long long _contentType;
    NSArray *_remoteMediaInfo;
    NSArray *_remoteMediaReferences;
    NSArray *_localMediaReferences;
}

+ (id)MessageContentWithContent:(id)arg1 contentType:(long long)arg2 remoteMediaInfo:(id)arg3 remoteMediaReferences:(id)arg4 localMediaReferences:(id)arg5;
@property(readonly, nonatomic) NSArray *localMediaReferences; // @synthesize localMediaReferences=_localMediaReferences;
@property(readonly, nonatomic) NSArray *remoteMediaReferences; // @synthesize remoteMediaReferences=_remoteMediaReferences;
@property(readonly, nonatomic) NSArray *remoteMediaInfo; // @synthesize remoteMediaInfo=_remoteMediaInfo;
@property(readonly, nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) NSData *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)description;
- (id)initWithContent:(id)arg1 contentType:(long long)arg2 remoteMediaInfo:(id)arg3 remoteMediaReferences:(id)arg4 localMediaReferences:(id)arg5;

@end

