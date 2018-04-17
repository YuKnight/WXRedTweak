//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMsgContentViewController.h"

#import "EnterpriseBrandSelectSheetViewDelegate.h"

@class NSString, WCActionSheet;

@interface EnterpriseMsgContentViewController : BaseMsgContentViewController <EnterpriseBrandSelectSheetViewDelegate>
{
    WCActionSheet *_enterpriseActionSheet;
}

- (void).cxx_destruct;
- (_Bool)canShowEnterpriseBrandEntry;
- (_Bool)canShowFavEntry;
- (_Bool)canShowLocation;
- (void)initAllowNameCardFollowRedEnvelope;
- (void)initAllowShareCard;
- (void)initAllowWxTalkFollowSight;
- (void)onBackButtonClicked:(id)arg1;
- (void)onEnterpriseSelectBrandContact:(id)arg1 sheetView:(id)arg2;
- (void)openEnterpriseBrandEntry;
- (void)switchEarMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
