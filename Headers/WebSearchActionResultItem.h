//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WebSearchActionResultItem : MMObject
{
    _Bool _hasResult;
    _Bool _hasClicked;
    unsigned int _type;
    NSString *_query;
}

- (void).cxx_destruct;
- (int)getActionType;
@property(nonatomic) _Bool hasClicked; // @synthesize hasClicked=_hasClicked;
@property(nonatomic) _Bool hasResult; // @synthesize hasResult=_hasResult;
- (id)init;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) unsigned int type; // @synthesize type=_type;

@end

