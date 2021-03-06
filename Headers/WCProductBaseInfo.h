//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, WCProductPriceRange;

@interface WCProductBaseInfo : NSObject
{
    unsigned int leftBuyQuantity;
    unsigned int totalStock;
    unsigned int createTime;
    unsigned int modifyTime;
    unsigned int version;
    unsigned int stockID;
    NSString *name;
    NSArray *categoryList;
    WCProductPriceRange *price;
    NSString *feeType;
    NSArray *imageList;
    NSString *digest;
    NSString *detail;
    NSArray *labelList;
    NSArray *propertyList;
    NSArray *skuTable;
    NSArray *tagList;
    NSArray *actionGroupList;
    NSString *sourceUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *actionGroupList; // @synthesize actionGroupList;
@property(retain, nonatomic) NSArray *categoryList; // @synthesize categoryList;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
- (void)dealloc;
@property(retain, nonatomic) NSString *detail; // @synthesize detail;
@property(retain, nonatomic) NSString *digest; // @synthesize digest;
@property(retain, nonatomic) NSString *feeType; // @synthesize feeType;
@property(retain, nonatomic) NSArray *imageList; // @synthesize imageList;
@property(retain, nonatomic) NSArray *labelList; // @synthesize labelList;
@property(nonatomic) unsigned int leftBuyQuantity; // @synthesize leftBuyQuantity;
@property(nonatomic) unsigned int modifyTime; // @synthesize modifyTime;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) WCProductPriceRange *price; // @synthesize price;
@property(retain, nonatomic) NSArray *propertyList; // @synthesize propertyList;
@property(retain, nonatomic) NSArray *skuTable; // @synthesize skuTable;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl;
@property(nonatomic) unsigned int stockID; // @synthesize stockID;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList;
@property(nonatomic) unsigned int totalStock; // @synthesize totalStock;
@property(nonatomic) unsigned int version; // @synthesize version;

@end

