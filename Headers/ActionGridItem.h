//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface ActionGridItem : NSObject <NSCoding>
{
    NSString *_name;
    NSString *_iconUrl;
    NSString *_productID;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (id)toXml;

@end

