//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnDemandGeofilterCreativeStudioToolbarButtonItem.h"

#import "SCPalettedColorPickerViewDelegate-Protocol.h"

@class NSString, SCPalettedColorPickerView;
@protocol SCOnDemandGeofilterCreativeStudioCaptionToolbarButtonItemDelegate;

@interface SCOnDemandGeofilterCreativeStudioCaptionToolbarButtonItem : SCOnDemandGeofilterCreativeStudioToolbarButtonItem <SCPalettedColorPickerViewDelegate>
{
    id <SCOnDemandGeofilterCreativeStudioCaptionToolbarButtonItemDelegate> _delegate;
    SCPalettedColorPickerView *_colorPicker;
}

@property(readonly, nonatomic) SCPalettedColorPickerView *colorPicker; // @synthesize colorPicker=_colorPicker;
@property(nonatomic) __weak id <SCOnDemandGeofilterCreativeStudioCaptionToolbarButtonItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)palettedColorPickerView:(id)arg1 didTogglePaletteToType:(unsigned long long)arg2 selectedColor:(id)arg3;
- (void)palettedColorPickerView:(id)arg1 didChangeColor:(id)arg2;
- (void)hideColorPicker;
- (void)showColorPicker;
- (void)setSelected:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

