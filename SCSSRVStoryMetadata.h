//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCSSRVMedia;

@interface SCSSRVStoryMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *canonicalURLSuffix; // @dynamic canonicalURLSuffix;
@property(copy, nonatomic) NSString *emoji; // @dynamic emoji;
@property(nonatomic) _Bool hasImageThumbnail; // @dynamic hasImageThumbnail;
@property(nonatomic) _Bool hasVideoThumbnail; // @dynamic hasVideoThumbnail;
@property(retain, nonatomic) SCSSRVMedia *imageThumbnail; // @dynamic imageThumbnail;
@property(nonatomic) int storyType; // @dynamic storyType;
@property(copy, nonatomic) NSString *subTitles; // @dynamic subTitles;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) SCSSRVMedia *videoThumbnail; // @dynamic videoThumbnail;

@end

