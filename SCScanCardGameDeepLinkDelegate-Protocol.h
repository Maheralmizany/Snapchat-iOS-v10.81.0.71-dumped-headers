//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCDeepLinkURL, SCScanCardTableViewCell;
@protocol SCScanCardGameDeepLinkProtocol;

@protocol SCScanCardGameDeepLinkDelegate <NSObject>
- (void)gameDeepLinkCard:(SCScanCardTableViewCell<SCScanCardGameDeepLinkProtocol> *)arg1 presentGameWithDeepLinkURL:(SCDeepLinkURL *)arg2;
@end

