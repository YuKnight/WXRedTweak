//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WAContactMgrExtension.h"

@class MMTimer, NSMutableArray, NSString;

@interface WAJSEventHandler_batchGetContact : WAJSEventHandler_BaseEvent <WAContactMgrExtension>
{
    NSMutableArray *_arrRequestAppId;
    NSMutableArray *_arrResponseContact;
    MMTimer *_contactGetterTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrRequestAppId; // @synthesize arrRequestAppId=_arrRequestAppId;
@property(retain, nonatomic) NSMutableArray *arrResponseContact; // @synthesize arrResponseContact=_arrResponseContact;
- (void)asyncBatchUpdateContacts:(id)arg1;
@property(retain, nonatomic) MMTimer *contactGetterTimer; // @synthesize contactGetterTimer=_contactGetterTimer;
- (void)dealloc;
- (void)getContactFromServerWithAppIdList:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)onGetContactTimeout;
- (void)onUpdateWeAppContactSuccess:(id)arg1;
- (void)returnResultWithContactList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
