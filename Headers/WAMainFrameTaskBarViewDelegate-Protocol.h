//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WAMainFrameTaskBarView, WAMainFrameTaskItem;

@protocol WAMainFrameTaskBarViewDelegate <NSObject>

@optional
- (void)taskBarView:(WAMainFrameTaskBarView *)arg1 didSelectTaskItem:(WAMainFrameTaskItem *)arg2;
- (void)taskBarViewDidEndDragging:(WAMainFrameTaskBarView *)arg1;
- (void)taskBarViewDidSelectMore:(WAMainFrameTaskBarView *)arg1;
@end
