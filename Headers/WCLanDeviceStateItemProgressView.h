//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer;

@interface WCLanDeviceStateItemProgressView : UIView
{
    CAShapeLayer *m_shapeLayer;
    double _progress;
}

+ (id)progressView;
- (void).cxx_destruct;
- (void)completeAnimate:(_Bool)arg1;
- (void)initShapeLayer;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double progress; // @synthesize progress=_progress;

@end

