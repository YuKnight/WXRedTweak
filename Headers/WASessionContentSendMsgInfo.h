//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface WASessionContentSendMsgInfo : NSObject
{
    unsigned int _appVersion;
    unsigned int _appType;
    NSString *_title;
    NSString *_path;
    NSString *_imageURL;
    NSData *_imageData;
    NSString *_appID;
    NSString *_userName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) unsigned int appType; // @synthesize appType=_appType;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
- (id)description;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

