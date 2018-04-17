//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EJAudioSource.h"

@class EJOpenALBuffer, NSObject<EJAudioSourceDelegate>, NSString, NSTimer;

@interface EJAudioSourceOpenAL : NSObject <EJAudioSource>
{
    NSString *path;
    unsigned int sourceId;
    EJOpenALBuffer *buffer;
    _Bool looping;
    NSTimer *endTimer;
    NSObject<EJAudioSourceDelegate> *delegate;
    float _duration;
}

@property(nonatomic) float currentTime;
- (void)dealloc;
@property(nonatomic) NSObject<EJAudioSourceDelegate> *delegate; // @synthesize delegate;
@property(nonatomic) float duration; // @synthesize duration=_duration;
- (void)ended:(id)arg1;
- (id)initWithPath:(id)arg1 fileSystem:(id)arg2;
- (void)pause;
- (void)play;
- (void)setLooping:(_Bool)arg1;
- (void)setPlaybackRate:(float)arg1;
- (void)setVolume:(float)arg1;

@end
