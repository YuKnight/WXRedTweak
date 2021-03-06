//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBMessageObserverDelegate.h"

@class FTSWebSearchMgr, NSMutableArray, NSMutableDictionary, NSString, WSVideoModel;

@interface WSVideoFlowDataLogic : NSObject <PBMessageObserverDelegate>
{
    _Bool _isWorking;
    _Bool _isFakeInitVideo;
    int _cgiStatus;
    NSString *_searchId;
    NSString *_sessionId;
    unsigned int _category;
    NSMutableDictionary *_dicRequestingUrlVideo;
    long long _lastPlayingVideoIndex;
    NSMutableDictionary *_dicCachedPlayTime;
    NSMutableDictionary *_dicExposeVideoInfo;
    unsigned int _maxCgiExposedReportCount;
    unsigned int _maxCgiExposedReportIntervalInMinute;
    NSMutableDictionary *_dicOperateVideo;
    NSMutableDictionary *_dicRequestingExposeInfo;
    WSVideoModel *_lastPlayVideoModel;
    unsigned int _browseBeginTime;
    _Bool _isEnablePrefetch;
    _Bool _isHomepage;
    unsigned int _offset;
    unsigned int _scene;
    id <WSVideoFlowDataDelegate> _delegate;
    FTSWebSearchMgr *_webSearchMgr;
    NSMutableArray *_arrVideoModel;
    NSMutableDictionary *_dicVideoModel;
    WSVideoModel *_defaultVideo;
    long long _lastExposedIndex;
    NSString *_reqQuery;
    long long _blockType;
    long long _resultType;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)appendPageForJson:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *arrVideoModel; // @synthesize arrVideoModel=_arrVideoModel;
- (void)asyncGetWebRecommendVideo;
@property(nonatomic) long long blockType; // @synthesize blockType=_blockType;
- (void)cacheVideoPlayTime:(unsigned int)arg1 forVideo:(id)arg2;
- (void)cleanOutOfDateRequestingExposeInfo;
- (void)commonInit;
- (void)dealloc;
@property(readonly, nonatomic) WSVideoModel *defaultVideo; // @synthesize defaultVideo=_defaultVideo;
@property(nonatomic) __weak id <WSVideoFlowDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableDictionary *dicVideoModel; // @synthesize dicVideoModel=_dicVideoModel;
- (id)findKvItemByKey:(id)arg1 array:(id)arg2;
- (void)finishUrlRequestingForVideo:(id)arg1;
- (id)generateClientRequestingExposeInfo;
- (unsigned int)getCachedVideoPlayTime:(id)arg1;
- (id)getHttpVideoDownloadInfoAtIndex:(long long)arg1;
- (id)getLatestRequestingExposeInfo;
- (unsigned int)getValidMaxRequestingExposeCount;
- (unsigned int)getValidRequestingExposeDuration;
- (unsigned int)getValidScene;
- (_Bool)hasReachEnd;
- (id)initWithDefaultVideo:(id)arg1 isFakeInitVideo:(_Bool)arg2;
- (void)internalRequestVideoInfoFor:(id)arg1;
@property(readonly, nonatomic) _Bool isEnablePrefetch; // @synthesize isEnablePrefetch=_isEnablePrefetch;
@property(nonatomic) _Bool isHomepage; // @synthesize isHomepage=_isHomepage;
- (_Bool)isRequestingExposeInfoOutOfDate:(id)arg1;
@property(nonatomic) long long lastExposedIndex; // @synthesize lastExposedIndex=_lastExposedIndex;
- (void)markBeginBrowse;
- (void)markOperateVideo:(id)arg1;
- (void)mergeVideosAndFetchVideoUrl:(id)arg1;
- (void)notifyModel:(id)arg1;
@property(readonly, nonatomic) unsigned int offset; // @synthesize offset=_offset;
- (void)reportBrowseInfo;
- (void)reportExposeBatchVideoIfNeeded;
- (void)reportItemClick:(id)arg1 clickType:(int)arg2;
- (void)reportSuccessShare:(id)arg1 types:(id)arg2;
- (void)reportVideoPlay:(id)arg1;
@property(retain, nonatomic) NSString *reqQuery; // @synthesize reqQuery=_reqQuery;
@property(nonatomic) long long resultType; // @synthesize resultType=_resultType;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void)sendRealTimeCgiReport:(id)arg1;
- (void)sendRealTimeExposeReport:(id)arg1;
@property(retain, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
- (void)tryAsyncGetVideoInfoFor:(id)arg1;
- (void)updateExposeTimeForVideo:(id)arg1;
- (void)updatePreloadVideoByCurrentIndex:(long long)arg1;

@end

