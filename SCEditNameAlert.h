//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCEditNameAlertDelegate;

@interface SCEditNameAlert : NSObject
{
    id <SCEditNameAlertDelegate> _editNameAlertDelegate;
}

@property(nonatomic) __weak id <SCEditNameAlertDelegate> editNameAlertDelegate; // @synthesize editNameAlertDelegate=_editNameAlertDelegate;
- (void).cxx_destruct;
- (void)didPressEditNameButton:(id)arg1;
- (void)didPressEditNameButton:(id)arg1 inAlertFlow:(id)arg2 shouldScrollAfterEdit:(_Bool)arg3;

@end

