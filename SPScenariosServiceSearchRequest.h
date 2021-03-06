//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, SPSearchDebugParams, SPSessionToken;

@interface SPScenariosServiceSearchRequest : NSObject
{
    _Bool _keyboardOnly;
    _Bool _showTwoPersonsScenarios;
    _Bool _skipDebugRestrictionsCheck;
    _Bool _searchByStickers;
    _Bool _nonEmptyResult;
    NSArray *_requiredScenariosIds;
    NSString *_searchText;
    unsigned long long _gender;
    unsigned long long _secondPersonGender;
    unsigned long long _faceMode;
    unsigned long long _searchMode;
    unsigned long long _itemsInRow;
    NSArray *_recentScenarioIds;
    SPSessionToken *_sessionToken;
    unsigned long long _scenariosResourceType;
    NSNumber *_scenariosLimit;
    NSString *_overrideText;
    SPSearchDebugParams *_debugParams;
}

@property(readonly) SPSearchDebugParams *debugParams; // @synthesize debugParams=_debugParams;
@property(readonly, copy, nonatomic) NSString *overrideText; // @synthesize overrideText=_overrideText;
@property(readonly, nonatomic) _Bool nonEmptyResult; // @synthesize nonEmptyResult=_nonEmptyResult;
@property(readonly, nonatomic) _Bool searchByStickers; // @synthesize searchByStickers=_searchByStickers;
@property(readonly, nonatomic) NSNumber *scenariosLimit; // @synthesize scenariosLimit=_scenariosLimit;
@property(readonly, nonatomic) unsigned long long scenariosResourceType; // @synthesize scenariosResourceType=_scenariosResourceType;
@property(readonly, nonatomic) _Bool skipDebugRestrictionsCheck; // @synthesize skipDebugRestrictionsCheck=_skipDebugRestrictionsCheck;
@property(readonly, nonatomic) SPSessionToken *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(readonly, nonatomic) NSArray *recentScenarioIds; // @synthesize recentScenarioIds=_recentScenarioIds;
@property(readonly, nonatomic) unsigned long long itemsInRow; // @synthesize itemsInRow=_itemsInRow;
@property(readonly, nonatomic) _Bool showTwoPersonsScenarios; // @synthesize showTwoPersonsScenarios=_showTwoPersonsScenarios;
@property(readonly, nonatomic) unsigned long long searchMode; // @synthesize searchMode=_searchMode;
@property(readonly, nonatomic) _Bool keyboardOnly; // @synthesize keyboardOnly=_keyboardOnly;
@property(readonly, nonatomic) unsigned long long faceMode; // @synthesize faceMode=_faceMode;
@property(readonly, nonatomic) unsigned long long secondPersonGender; // @synthesize secondPersonGender=_secondPersonGender;
@property(readonly, nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(readonly, copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(readonly, copy, nonatomic) NSArray *requiredScenariosIds; // @synthesize requiredScenariosIds=_requiredScenariosIds;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRequiredScenariosIds:(id)arg1 searchText:(id)arg2 gender:(unsigned long long)arg3 secondPersonGender:(unsigned long long)arg4 faceMode:(unsigned long long)arg5 keyboardOnly:(_Bool)arg6 searchMode:(unsigned long long)arg7 showTwoPersonsScenarios:(_Bool)arg8 recentScenarioIds:(id)arg9 itemsInRow:(unsigned long long)arg10 nonEmptyResult:(_Bool)arg11 overrideText:(id)arg12 debugParams:(id)arg13 sessionToken:(id)arg14 skipDebugRestrictionsCheck:(_Bool)arg15 scenariosResourceType:(unsigned long long)arg16 scenariosLimit:(id)arg17 searchByStickers:(_Bool)arg18;

@end

