//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SIGControlStyles-Protocol.h"

@class NSString, UIImage;
@protocol SIGStyles;

@interface SIGControlStylesDefaults : NSObject <SIGControlStyles>
{
    id <SIGStyles> _styles;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *thumbnailXIcon;
@property(readonly, nonatomic) UIImage *backupPendingIcon;
@property(readonly, nonatomic) UIImage *backupErrorIcon;
@property(readonly, nonatomic) UIImage *whiteSpectaclesIcon;
@property(readonly, nonatomic) UIImage *pullToRefreshGhostArms;
@property(readonly, nonatomic) UIImage *pullToRefreshGhostRainbow;
@property(readonly, nonatomic) UIImage *pullToRefreshGhostShocked;
@property(readonly, nonatomic) UIImage *pullToRefreshGhostWink;
@property(readonly, nonatomic) UIImage *pullToRefreshGhostDefault;
@property(readonly, nonatomic) UIImage *subscribedImage;
@property(readonly, nonatomic) UIImage *subscribeImage;
@property(readonly, nonatomic) UIImage *badgeImage;
@property(readonly, nonatomic) UIImage *storyWhiteImage;
@property(readonly, nonatomic) UIImage *groupWhiteImage;
@property(readonly, nonatomic) UIImage *groupWithPlus;
@property(readonly, nonatomic) UIImage *sendToWhiteImage;
@property(readonly, nonatomic) UIImage *sendToImage;
@property(readonly, nonatomic) UIImage *sectionHeaderActionImage;
@property(readonly, nonatomic) UIImage *cellActionMenuImage;
@property(readonly, nonatomic) UIImage *cellActionDiscloseImage;
@property(readonly, nonatomic) UIImage *cellActionRemoveImage;
@property(readonly, nonatomic) UIImage *cellActionSelectOnImage;
@property(readonly, nonatomic) UIImage *cellActionSelectOffImage;
@property(readonly, nonatomic) UIImage *recentsIndexImage;
@property(readonly, nonatomic) UIImage *groupsIndexImage;
@property(readonly, nonatomic) UIImage *quickAddsIndexImage;
@property(readonly, nonatomic) UIImage *starsIndexImage;
@property(readonly, nonatomic) UIImage *favoritesIndexImage;
@property(readonly, nonatomic) UIImage *deleteButtonImage;
@property(readonly, nonatomic) UIImage *plusButtonImage;
@property(readonly, nonatomic) UIImage *moreButtonImage;
@property(readonly, nonatomic) UIImage *editingImage;
@property(readonly, nonatomic) UIImage *backButtonImage;
@property(readonly, nonatomic) UIImage *dismissButtonImage;
@property(readonly, nonatomic) UIImage *searchImage;
@property(readonly, nonatomic) UIImage *clearButtonImage;
- (id)colorForStyle:(unsigned long long)arg1;
- (double)lineHeightForStyle:(unsigned long long)arg1;
- (id)fontForStyle:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

