//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXCNetWorkDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WXCReportEngine : NSObject <WXCNetWorkDelegate>
{
    NSMutableDictionary *_reportDic;
    NSString *_savePath;
    NSMutableArray *_curReportKeys;
    NSMutableArray *_emergentKeys;
    _Bool _isNeedAddStreamStart;
    NSString *_streamHead;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addClickStreamReportItem:(id)arg1 interval:(long long)arg2;
- (void)addReportItem:(int)arg1 WapID:(int)arg2 value:(id)arg3;
- (void)addReportItem:(int)arg1 wapID:(int)arg2 count:(int)arg3;
- (id)buildFirstKVString:(id)arg1;
- (id)buildOtherKVString:(id)arg1 range:(struct _NSRange)arg2 itemStr:(id)arg3;
- (void)clearAllReportData;
- (void)clearCurReportKeys;
- (void)clearOldVersionReportData;
- (void)clearReportData;
- (void)doEMergentReport;
- (void)doTaskWhenAppBecomeBackground;
- (id)getClickStreamHead;
- (id)getReportData:(_Bool)arg1;
- (id)getStaticKey:(int)arg1 wapID:(int)arg2;
- (id)init;
- (void)initEmergentKeys;
@property(nonatomic) _Bool isNeedAddStreamStart; // @synthesize isNeedAddStreamStart=_isNeedAddStreamStart;
- (_Bool)isNeedReportCommonData;
- (void)onNewMsgReceived:(id)arg1;
- (void)onRespData:(id)arg1 taskId:(int)arg2 retCode:(int)arg3 retBuf:(id)arg4 backfillData:(id)arg5;
- (void)reportStaticData;
@property(copy, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
- (void)saveReportData;
@property(copy, nonatomic) NSString *streamHead; // @synthesize streamHead=_streamHead;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
