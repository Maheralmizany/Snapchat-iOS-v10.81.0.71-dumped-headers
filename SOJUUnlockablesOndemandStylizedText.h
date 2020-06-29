//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesOndemandStylizedText-Protocol.h"

@class NSString, SOJUUnlockablesOndemandTextShadowParametersList;

@interface SOJUUnlockablesOndemandStylizedText : SCSojuMessage <SOJUUnlockablesOndemandStylizedText>
{
}

+ (void)registerMessageFields:(id)arg1;
+ (id)textShadowParametersListFromNSShadows:(id)arg1;
- (id)initWithIdValue:(id)arg1 color:(id)arg2 fontUrl:(id)arg3 displayText:(id)arg4 textShadowParametersList:(id)arg5 fontName:(id)arg6;
- (id)componentsSeparatedByUppercaseCharacters:(id)arg1;
- (id)_renderViewToImage:(id)arg1;
- (id)shadowFromShadowParameters:(id)arg1;
- (id)shadows;
- (void)previewimage:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *color; // @dynamic color;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *displayText; // @dynamic displayText;
@property(readonly, nonatomic) NSString *fontName; // @dynamic fontName;
@property(readonly, nonatomic) NSString *fontUrl; // @dynamic fontUrl;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SOJUUnlockablesOndemandTextShadowParametersList *textShadowParametersList; // @dynamic textShadowParametersList;

@end

