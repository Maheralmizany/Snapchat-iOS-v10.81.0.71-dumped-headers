//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (MGLAdditions)
+ (id)attributedStringWithHtmlString:(id)arg1 normalTextAttributes:(id)arg2 boldTextAttributes:(id)arg3 italicTextAttributes:(id)arg4;
+ (id)composerTextAttributes;
+ (id)_attributedStringWithComposerJson:(id)arg1 baseNSAttributes:(id)arg2;
+ (id)attributedStringWithComposerJson:(id)arg1 baseLabelAttributes:(id)arg2;
+ (id)attributedStringWithComposerAttributeValues:(id)arg1;
+ (id)sizeCache;
+ (id)sc_attributedStringWithFormat:(id)arg1;
+ (id)_sc_attributedStringWithFormat:(id)arg1 withArgs:(id)arg2;
+ (id)_spacingString;
+ (id)defaultAttributeDictionaryforFont:(id)arg1 color:(id)arg2 alignment:(long long)arg3 isTextChat:(_Bool)arg4;
+ (id)fontByApplyingFormatType:(unsigned long long)arg1 toFont:(id)arg2;
+ (id)attributedStringForText:(id)arg1 font:(id)arg2 color:(id)arg3 textAttributes:(id)arg4 alignment:(long long)arg5 kerning:(double)arg6 isTextChat:(_Bool)arg7;
+ (id)attributedStringForText:(id)arg1 font:(id)arg2 color:(id)arg3 alignment:(long long)arg4 kerning:(double)arg5;
+ (id)attributedStringForText:(id)arg1 font:(id)arg2 color:(id)arg3 textAttributes:(id)arg4 isTextChat:(_Bool)arg5;
+ (id)attributedStringForText:(id)arg1 font:(id)arg2 color:(id)arg3 textAttributes:(id)arg4;
+ (id)attributedStringForText:(id)arg1 font:(id)arg2 color:(id)arg3 kerning:(double)arg4;
+ (id)attributedStringForText:(id)arg1 font:(id)arg2 color:(id)arg3;
- (id)mgl_attributedStringByTrimmingCharactersInSet:(id)arg1;
- (struct _NSRange)mgl_wholeRange;
- (struct CGSize)sizeConstrainedToSize:(struct CGSize)arg1 options:(long long)arg2;
- (id)attributedStringByTrimmingCharactersInSet:(id)arg1;
- (id)attributedStringByTruncatingSubstring:(id)arg1 toWidth:(double)arg2 withEllipsis:(_Bool)arg3;
- (id)sig_attributedStringWithStyle:(unsigned long long)arg1 alignment:(long long)arg2 lineBreakMode:(long long)arg3;
- (_Bool)sc_hasBoldStyling;
- (_Bool)sc_hasItalianStyling;
- (_Bool)sc_hasUnderlineStyling;
- (id)sc_attributedStringByUpdatingUnderline:(id)arg1 replaceStartIndex:(long long)arg2 currentText:(id)arg3;
- (id)sc_attributedStringByChangingBorderColor:(id)arg1 borderWidthPercentage:(double)arg2;
- (id)sc_attributedStringByTogglingBold:(_Bool)arg1;
- (id)sc_attributedStringByUpdatingText:(id)arg1;
- (id)sc_attributedStringByUpdatingTextWithStyle:(unsigned long long)arg1;
- (id)sc_attributedStringByChangingFont:(id)arg1 shouldKeepStyles:(_Bool)arg2;
- (id)_mutableAttributedStringWithSuffixImagesEnumerator:(id)arg1 font:(id)arg2 shouldAddFirstSpace:(_Bool)arg3;
- (id)attributedStringWithSuffixImages:(id)arg1 isDirectionRightToLeft:(_Bool)arg2;
@end

