//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDate, NSString;

@interface SCShazamSongDataModel : NSObject <NSCopying>
{
    NSString *_songTitle;
    NSArray *_artistNames;
    NSString *_artistImageURL;
    NSString *_highDefArtistImageURL;
    NSString *_landscapeArtistImageURL;
    NSString *_songURL;
    NSDate *_recordedDate;
    NSString *_genre;
    NSString *_appleMusicURL;
    NSString *_googlePlayMusicURL;
    NSString *_spotifyURL;
}

@property(readonly, copy, nonatomic) NSString *spotifyURL; // @synthesize spotifyURL=_spotifyURL;
@property(readonly, copy, nonatomic) NSString *googlePlayMusicURL; // @synthesize googlePlayMusicURL=_googlePlayMusicURL;
@property(readonly, copy, nonatomic) NSString *appleMusicURL; // @synthesize appleMusicURL=_appleMusicURL;
@property(readonly, copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(readonly, copy, nonatomic) NSDate *recordedDate; // @synthesize recordedDate=_recordedDate;
@property(readonly, copy, nonatomic) NSString *songURL; // @synthesize songURL=_songURL;
@property(readonly, copy, nonatomic) NSString *landscapeArtistImageURL; // @synthesize landscapeArtistImageURL=_landscapeArtistImageURL;
@property(readonly, copy, nonatomic) NSString *highDefArtistImageURL; // @synthesize highDefArtistImageURL=_highDefArtistImageURL;
@property(readonly, copy, nonatomic) NSString *artistImageURL; // @synthesize artistImageURL=_artistImageURL;
@property(readonly, copy, nonatomic) NSArray *artistNames; // @synthesize artistNames=_artistNames;
@property(readonly, copy, nonatomic) NSString *songTitle; // @synthesize songTitle=_songTitle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSongTitle:(id)arg1 artistNames:(id)arg2 artistImageURL:(id)arg3 highDefArtistImageURL:(id)arg4 landscapeArtistImageURL:(id)arg5 songURL:(id)arg6 recordedDate:(id)arg7 genre:(id)arg8 appleMusicURL:(id)arg9 googlePlayMusicURL:(id)arg10 spotifyURL:(id)arg11;

@end
