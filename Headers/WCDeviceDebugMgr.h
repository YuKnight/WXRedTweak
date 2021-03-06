//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, WCDevicedebugSettingData;

@interface WCDeviceDebugMgr : MMService <MMService>
{
    NSMutableArray *m_logs;
    NSMutableArray *m_contacts;
    WCDevicedebugSettingData *m_settingData;
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_userIndex;
}

- (void).cxx_destruct;
- (void)addDebugLog:(id)arg1 forDevice:(id)arg2;
- (void)addDebugLog:(id)arg1 forDid:(long long)arg2;
- (void)addErrorLog:(id)arg1 forDevice:(id)arg2;
- (void)addErrorLog:(id)arg1 forDid:(long long)arg2;
- (void)addInfo:(id)arg1;
- (void)addLog:(id)arg1 isError:(_Bool)arg2 forDevice:(id)arg3;
- (void)addLog:(id)arg1 isError:(_Bool)arg2 forDid:(long long)arg3;
- (void)addObjecttoLogs:(id)arg1;
- (void)addTips:(id)arg1;
- (_Bool)checkPremissionIsOk:(id)arg1;
- (void)cleanAllLogs;
- (id)getAllLogUser;
- (long long)getLastIndexForUser:(id)arg1;
- (id)getLogsFrom:(int)arg1 Limit:(int)arg2;
- (id)getSettingPath;
- (_Bool)hasCanLogUser;
- (id)init;
- (_Bool)isUserOpenLog:(id)arg1;
- (void)onServiceInit;
- (_Bool)onServiceMemoryWarning;
- (void)reloadContacts;
- (void)setLastIndex:(long long)arg1 forUser:(id)arg2;
- (void)setUserLog:(id)arg1 State:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

