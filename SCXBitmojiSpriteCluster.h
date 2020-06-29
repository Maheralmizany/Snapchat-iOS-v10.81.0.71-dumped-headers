//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSOrderedSet, NSTimer, SCXBitmojiLabelSprite, SCXCalloutSprite, SCXFloorSprite, SCXFriendStorySprite, SCXPropSprite, SCXSpriteWidthInterpolatorProvider;
@protocol SCMapViewport;

@interface SCXBitmojiSpriteCluster : NSObject
{
    SCXSpriteWidthInterpolatorProvider *_widthInterpolatorProvider;
    NSArray *_clusterZIndex;
    NSArray *_bitmojiSpritesWithSomethingToSay;
    NSMutableArray *_speakingBitmojiSprites;
    _Bool _enlarged;
    _Bool _depressed;
    _Bool _crowd;
    _Bool _needsBitmojiLayout;
    _Bool _needsFloorLayout;
    _Bool _needsPropLayout;
    _Bool _needsCalloutLayout;
    _Bool _needsBitmojiLabelLayout;
    _Bool _needsFriendStoryLayout;
    _Bool _cyclingSpeechBubbles;
    NSOrderedSet *_bitmojiSprites;
    SCXFloorSprite *_floorSprite;
    SCXPropSprite *_propSprite;
    SCXCalloutSprite *_calloutSprite;
    SCXBitmojiLabelSprite *_bitmojiLabelSprite;
    SCXFriendStorySprite *_friendStorySprite;
    NSTimer *_speechBubbleCycleTimer;
    id <SCMapViewport> _mapViewport;
    struct CLLocationCoordinate2D _centerCoordinate;
}

@property(readonly, nonatomic) __weak id <SCMapViewport> mapViewport; // @synthesize mapViewport=_mapViewport;
@property(retain, nonatomic) NSTimer *speechBubbleCycleTimer; // @synthesize speechBubbleCycleTimer=_speechBubbleCycleTimer;
@property(nonatomic, getter=isCyclingSpeechBubbles) _Bool cyclingSpeechBubbles; // @synthesize cyclingSpeechBubbles=_cyclingSpeechBubbles;
@property(nonatomic) _Bool needsFriendStoryLayout; // @synthesize needsFriendStoryLayout=_needsFriendStoryLayout;
@property(nonatomic) _Bool needsBitmojiLabelLayout; // @synthesize needsBitmojiLabelLayout=_needsBitmojiLabelLayout;
@property(nonatomic) _Bool needsCalloutLayout; // @synthesize needsCalloutLayout=_needsCalloutLayout;
@property(nonatomic) _Bool needsPropLayout; // @synthesize needsPropLayout=_needsPropLayout;
@property(nonatomic) _Bool needsFloorLayout; // @synthesize needsFloorLayout=_needsFloorLayout;
@property(nonatomic) _Bool needsBitmojiLayout; // @synthesize needsBitmojiLayout=_needsBitmojiLayout;
@property(nonatomic, getter=isCrowd) _Bool crowd; // @synthesize crowd=_crowd;
@property(nonatomic, getter=isDepressed) _Bool depressed; // @synthesize depressed=_depressed;
@property(nonatomic, getter=isEnlarged) _Bool enlarged; // @synthesize enlarged=_enlarged;
@property(retain, nonatomic) SCXSpriteWidthInterpolatorProvider *widthInterpolatorProvider; // @synthesize widthInterpolatorProvider=_widthInterpolatorProvider;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
@property(retain, nonatomic) SCXFriendStorySprite *friendStorySprite; // @synthesize friendStorySprite=_friendStorySprite;
@property(retain, nonatomic) SCXBitmojiLabelSprite *bitmojiLabelSprite; // @synthesize bitmojiLabelSprite=_bitmojiLabelSprite;
@property(retain, nonatomic) SCXCalloutSprite *calloutSprite; // @synthesize calloutSprite=_calloutSprite;
@property(retain, nonatomic) SCXPropSprite *propSprite; // @synthesize propSprite=_propSprite;
@property(retain, nonatomic) SCXFloorSprite *floorSprite; // @synthesize floorSprite=_floorSprite;
@property(copy, nonatomic) NSOrderedSet *bitmojiSprites; // @synthesize bitmojiSprites=_bitmojiSprites;
- (void).cxx_destruct;
- (struct CGRect)boundingRectForBitmojiSpriteClusterInMapViewport:(id)arg1 view:(id)arg2;
- (void)_setNeedsFullLayout;
- (void)_setHeightScaleIfNecessary:(float)arg1 sprite:(id)arg2 duration:(double)arg3;
- (void)_setRotationIfNecessary:(float)arg1 sprite:(id)arg2 duration:(double)arg3;
- (void)_setOpacityIfNecessary:(float)arg1 sprite:(id)arg2 duration:(double)arg3;
- (void)_setWidthInterpolatorIfNecessary:(CDUnknownBlockType)arg1 sprite:(id)arg2 duration:(double)arg3 mapViewport:(id)arg4;
- (void)_setLocationInterpolatorIfNecessary:(CDUnknownBlockType)arg1 sprite:(id)arg2 duration:(double)arg3 mapViewport:(id)arg4;
- (void)_layoutFriendStoryWithDuration:(double)arg1;
- (void)_layoutBitmojiLabelWithDuration:(double)arg1;
- (void)_layoutCalloutWithDuration:(double)arg1;
- (void)_layoutPropWithDuration:(double)arg1;
- (void)_layoutClusterFloorWithDuration:(double)arg1;
- (void)_layoutCrowdFloorWithDuration:(double)arg1;
- (void)_layoutFloorWithDuration:(double)arg1;
- (void)_layoutClusterBitmojisWithDuration:(double)arg1;
- (void)_layoutCrowdBitmojisWithDuration:(double)arg1;
- (void)_layoutBitmojisWithDuration:(double)arg1;
- (void)layoutIfNeededWithDuration:(double)arg1;
- (id)initWithMapViewport:(id)arg1 widthInterpolatorProvider:(id)arg2;
- (void)_expireSpeechBubbleForSpeaker:(id)arg1;
- (void)_liftSpeechBubbleForSpeaker:(id)arg1 extraDistance:(double)arg2;
- (void)_showSpeechBubbleForSpeaker:(id)arg1;
- (void)_showNextSpeechBubbleWithPreviousSpeakers:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_showFirstSpeechBubbleWithSpeaker:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_collapseAllSpeechBubbles;
- (void)stopCyclingSpeechBubbles;
- (void)startCyclingSpeechBubblesBeginningWithSpeaker:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)configureWithModel:(id)arg1;

@end

