//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface SCImageProcessProgram : NSObject
{
    _Bool _compiled;
    _Bool _linked;
    NSString *_vshString;
    NSString *_fshString;
    unsigned int _vShader;
    unsigned int _fShader;
    _Bool _readyToUse;
    unsigned int _program;
    NSError *_error;
}

@property(readonly, nonatomic) unsigned int program; // @synthesize program=_program;
@property(readonly, nonatomic) _Bool readyToUse; // @synthesize readyToUse=_readyToUse;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (_Bool)use;
- (_Bool)linkWithError:(id *)arg1;
- (_Bool)compileWithError:(id *)arg1;
- (id)initWithVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;

@end

