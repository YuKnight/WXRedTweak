//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, WSStreamPlayerView, WSVideoModel;

@protocol WSVideoPlayerViewDelegate <NSObject>

@optional
- (_Bool)canPlayNextVideo;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(WSStreamPlayerView *)arg3;
- (void)enableWebViewScroll:(_Bool)arg1;
- (_Bool)isForground;
- (void)onDelayPlayVideo;
- (void)onOperateShare:(WSVideoModel *)arg1;
- (WSVideoModel *)onPlayNextVideo:(_Bool)arg1 currentVideo:(WSVideoModel *)arg2;
- (void)onVideoEvent:(NSString *)arg1 param:(NSDictionary *)arg2;
- (_Bool)onVideoPlayEnd;
- (void)onVideoStateChange:(long long)arg1;
- (void)onVoiceButtonClick:(unsigned int)arg1 isMutedAfterClicked:(_Bool)arg2;
- (void)onVolumeChange:(double)arg1;
@end

