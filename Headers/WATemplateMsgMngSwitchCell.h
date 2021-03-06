//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UISwitch;

@interface WATemplateMsgMngSwitchCell : UITableViewCell
{
    UILabel *_titleLabel;
    UISwitch *_switchButton;
    id <WATemplateMsgMngSwitchCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WATemplateMsgMngSwitchCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initSubViews;
- (void)initSwitchButton;
- (void)initTitleLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)onSwitch:(id)arg1;
@property(retain, nonatomic) UISwitch *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateSwitchStatus:(_Bool)arg1;

@end

