//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VideoStreamPlayerView.h"

@class CMessageWrap;

@interface C2CVideoStreamPlayerView : VideoStreamPlayerView
{
    CMessageWrap *m_oMessageWrap;
}

- (void).cxx_destruct;
- (void)genThumbIfNeed;
- (id)getFormalVideoPath;
- (id)initWithFrame:(struct CGRect)arg1 MessageWrap:(id)arg2;
- (_Bool)isStreamingPlayMode;
- (void)updateVideoArgs;

@end
