//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayCardListViewControllerDelegate.h"

@class JSEvent, NSDictionary, NSString;

@interface WCPayJumpPayCardListLogic : WCPayControlLogic <WCPayCardListViewControllerDelegate>
{
    JSEvent *_m_jsEvent;
    id <WCPayJumpPayCardListLogicDelegate> _m_delegate;
    NSDictionary *_m_param;
}

- (void).cxx_destruct;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)dealloc;
- (id)initWithJSEvent:(id)arg1 delegate:(id)arg2 param:(id)arg3;
@property(nonatomic) __weak id <WCPayJumpPayCardListLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) JSEvent *m_jsEvent; // @synthesize m_jsEvent=_m_jsEvent;
@property(retain, nonatomic) NSDictionary *m_param; // @synthesize m_param=_m_param;
- (void)onWCPayCardListViewControllerBack;
- (void)onWCPayCardListViewControllerWillBack;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

