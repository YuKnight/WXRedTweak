//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NotifyFromMainCtrlDelegate.h"

@class CMessageWrap, NSMutableArray, NSRecursiveLock;

@interface CDownloadVideoMgr : NSObject <NotifyFromMainCtrlDelegate>
{
    NSRecursiveLock *m_oLock;
    NSMutableArray *m_arrDownloadList;
    NSMutableArray *m_arrDownloadStatList;
    CMessageWrap *m_wrapCurDownloadMsg;
    unsigned int m_uiCurDownloadEventID;
}

- (void).cxx_destruct;
- (_Bool)CheckDownloadPart:(id)arg1 messageWrap:(id)arg2;
- (void)DelMsgInDownloadQueue:(id)arg1;
- (id)GetMsg:(id)arg1;
- (id)GetStatInfo:(id)arg1;
- (void)InitWithLock:(id)arg1;
- (_Bool)IsMsgInDownloadQueue:(id)arg1;
- (void)NotifyFromMainCtrl:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)OnDownloadPartFail:(id)arg1 RetCode:(int)arg2;
- (void)OnDownloadPartOK:(id)arg1 messageWrap:(id)arg2;
- (void)StartDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)Stop;
- (void)StopCurrentDownload;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)StopDownloadByChatName:(id)arg1;
- (_Bool)createDownloadEvent:(id)arg1;
- (void)dealloc;
- (void)downloadVideo:(id)arg1;
- (id)getDownloadingMesageWrap:(id)arg1;
- (id)getFilePath:(id)arg1;
- (unsigned int)getFileSize:(id)arg1;
- (id)init;
- (void)interStopDownload:(id)arg1;
- (void)logStatInfo:(id)arg1 retCode:(int)arg2;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock;
@property(retain, nonatomic) CMessageWrap *m_wrapCurDownloadMsg; // @synthesize m_wrapCurDownloadMsg;
- (void)resetCurrentDownloadStatus;
- (_Bool)saveData:(id)arg1 file:(id)arg2;
- (void)updateMessageWrap:(id)arg1 downloadStatus:(unsigned int)arg2;
- (void)updateMessageWrapDownload:(id)arg1 offset:(unsigned int)arg2;

@end
