//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPConfigModel, SSScenariosSearch;

@interface SPConfig : NSObject
{
    SPConfigModel *_configModel;
    SSScenariosSearch *_ssScenariosSearch;
}

@property(retain, nonatomic) SSScenariosSearch *ssScenariosSearch; // @synthesize ssScenariosSearch=_ssScenariosSearch;
@property(retain, nonatomic) SPConfigModel *configModel; // @synthesize configModel=_configModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool needSearchSessionId;
@property(readonly, nonatomic) _Bool needChatSessionId;
@property(readonly, nonatomic) _Bool needSessionId;
@property(readonly, nonatomic) NSString *scenariosSearchConfigurationName;
- (id)initWithConfigModel:(id)arg1 ssScenariosSearch:(id)arg2;

@end

