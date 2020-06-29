//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface GADWebViewConfiguration : NSObject <NSCopying>
{
    _Bool _mediaPlaybackRequiresUserAction;
    _Bool _GMSGScriptHandlerEnabled;
    _Bool _collectDynamicContentSize;
    _Bool _overrideWebViewPermissionAPIEnabled;
    _Bool _scrollEnabled;
    _Bool _resizeScriptEnabled;
    _Bool _loadOnIframeScriptEnabled;
    _Bool _networkNotificationsEnabled;
    _Bool _scalesPageToFit;
    _Bool _augmentedRealityEnabled;
    unsigned long long _dataDetectorType;
    NSString *_MRAIDURLString;
}

@property(nonatomic) _Bool augmentedRealityEnabled; // @synthesize augmentedRealityEnabled=_augmentedRealityEnabled;
@property(nonatomic) _Bool scalesPageToFit; // @synthesize scalesPageToFit=_scalesPageToFit;
@property(nonatomic) _Bool networkNotificationsEnabled; // @synthesize networkNotificationsEnabled=_networkNotificationsEnabled;
@property(readonly, nonatomic) _Bool loadOnIframeScriptEnabled; // @synthesize loadOnIframeScriptEnabled=_loadOnIframeScriptEnabled;
@property(readonly, nonatomic) _Bool resizeScriptEnabled; // @synthesize resizeScriptEnabled=_resizeScriptEnabled;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) _Bool overrideWebViewPermissionAPIEnabled; // @synthesize overrideWebViewPermissionAPIEnabled=_overrideWebViewPermissionAPIEnabled;
@property(nonatomic) _Bool collectDynamicContentSize; // @synthesize collectDynamicContentSize=_collectDynamicContentSize;
@property(copy, nonatomic) NSString *MRAIDURLString; // @synthesize MRAIDURLString=_MRAIDURLString;
@property(readonly, nonatomic) _Bool GMSGScriptHandlerEnabled; // @synthesize GMSGScriptHandlerEnabled=_GMSGScriptHandlerEnabled;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction; // @synthesize mediaPlaybackRequiresUserAction=_mediaPlaybackRequiresUserAction;
@property(nonatomic) unsigned long long dataDetectorType; // @synthesize dataDetectorType=_dataDetectorType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

@end

