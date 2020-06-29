//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGLVectorStyleLayer.h"

@class MGLStyleValue;

@interface MGLFillExtrusionStyleLayer : MGLVectorStyleLayer
{
}

@property(retain, nonatomic) MGLStyleValue *fillExtrusionTranslateAnchor;
@property(retain, nonatomic) MGLStyleValue *fillExtrusionTranslationAnchor;
@property(retain, nonatomic) MGLStyleValue *fillExtrusionTranslate;
@property(nonatomic) struct MGLTransition fillExtrusionTranslationTransition;
@property(retain, nonatomic) MGLStyleValue *fillExtrusionTranslation;
@property(nonatomic) struct MGLTransition fillExtrusionPatternTransition;
@property(retain, nonatomic) MGLStyleValue *fillExtrusionPattern;
@property(nonatomic) struct MGLTransition fillExtrusionOpacityTransition;
@property(retain, nonatomic) MGLStyleValue *fillExtrusionOpacity;
@property(nonatomic) struct MGLTransition fillExtrusionHeightTransition;
@property(retain, nonatomic) MGLStyleValue *fillExtrusionHeight;
@property(nonatomic) struct MGLTransition fillExtrusionColorTransition;
@property(retain, nonatomic) MGLStyleValue *fillExtrusionColor;
@property(nonatomic) struct MGLTransition fillExtrusionBaseTransition;
@property(retain, nonatomic) MGLStyleValue *fillExtrusionBase;
- (id)predicate;
- (void)setPredicate:(id)arg1;
- (void)setSourceLayerIdentifier:(id)arg1;
- (id)sourceLayerIdentifier;
- (id)sourceIdentifier;
@property(readonly, nonatomic) struct FillExtrusionLayer *rawLayer;
- (id)initWithIdentifier:(id)arg1 source:(id)arg2;

@end

