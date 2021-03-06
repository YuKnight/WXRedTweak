//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AttributeLabel, FTSFeatureItem, MMBrandHeadImageView, NSString;

@interface FTSFeatureCell : MMTableViewCell
{
    FTSFeatureItem *_featureItem;
    NSString *_searchText;
    MMBrandHeadImageView *_thumbImageView;
    AttributeLabel *_titleLabel;
    AttributeLabel *_detailLabel;
}

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void)updateFeatureItem:(id)arg1 searchText:(id)arg2;
- (void)updateStatus:(_Bool)arg1;

@end

