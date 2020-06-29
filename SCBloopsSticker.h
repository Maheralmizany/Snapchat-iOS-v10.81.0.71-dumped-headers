//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStickerProtocol-Protocol.h"

@class NSString, SPScenario;

@interface SCBloopsSticker : NSObject <SCStickerProtocol>
{
    SPScenario *_scenario;
    NSString *_apiVersion;
    NSString *_stickerId;
    NSString *_packId;
}

@property(retain, nonatomic) NSString *packId; // @synthesize packId=_packId;
@property(retain, nonatomic) NSString *stickerId; // @synthesize stickerId=_stickerId;
@property(readonly, nonatomic) SPScenario *scenario; // @synthesize scenario=_scenario;
@property(readonly, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stickerStateWithRelativeSize:(struct CGSize)arg1 center:(struct CGPoint)arg2 rotation:(double)arg3 scale:(double)arg4 tappableElementBounds:(id)arg5 isTracking:(_Bool)arg6 trackingTrajectory:(id)arg7 isFlipped:(_Bool)arg8;
- (id)thumbnailImageWithUserSession:(id)arg1 contexts:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)imageWithUserSession:(id)arg1 contexts:(id)arg2 isDecoded:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)shortLoggingName;
- (id)loggingParameters;
- (unsigned long long)type;
- (id)toSOJUSticker;
- (id)initWithStickerId:(id)arg1 packId:(id)arg2 scenario:(id)arg3 apiVersion:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

