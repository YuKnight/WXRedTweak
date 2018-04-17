//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "ILocationMgrExt.h"

@class MMTimer, NSString, UIButton, UIImageView, UILabel;

@interface NetworkCheckViewController : MMWindowViewController <ILocationMgrExt>
{
    UIButton *m_cancelBtn;
    UIImageView *m_iconView;
    UILabel *m_statusLabel;
    UILabel *m_detailLabel;
    UIButton *m_confirmBtn;
    MMTimer *m_progressTimer;
    int m_progressCounter;
    int m_progress;
    int m_progressStep;
    unsigned long long m_locationTag;
    _Bool m_connetOK;
    _Bool m_baseNetOK;
    _Bool m_longlinkOK;
    NSString *m_kvString;
}

- (void).cxx_destruct;
- (void)dealloc;
- (int)getCheckingProgress;
- (void)onCancelBtnClicked;
- (void)onConfirmBtnClicked;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onNetworkCheckFinished:(_Bool)arg1 baseNetOK:(_Bool)arg2 longLinkOK:(_Bool)arg3 kvString:(id)arg4;
- (void)updateForNetworkFail;
- (void)updateForNetworkOK;
- (void)updateForSubmitInfoWithLocation:(id)arg1;
- (void)updateProgress;
- (void)updateViewWithStatus:(id)arg1 detail:(id)arg2 hasConfirmBtn:(_Bool)arg3;
- (_Bool)useBlackStatusbar;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;

@end
