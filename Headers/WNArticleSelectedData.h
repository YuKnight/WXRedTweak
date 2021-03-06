//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class MMTableView, NSMutableDictionary, WNArticleDataController;

@interface WNArticleSelectedData : MMObject
{
    NSMutableDictionary *_selectedDic;
    _Bool _bSelectAll;
    MMTableView *_tableView;
    WNArticleDataController *_dataController;
    long long _selectStartIndex;
    long long _selectEndIndex;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bSelectAll; // @synthesize bSelectAll=_bSelectAll;
- (void)clearAll;
- (struct _NSRange)convertTextRange:(id)arg1 InTextView:(id)arg2;
- (id)copySelectedFromParagraphData:(id)arg1;
@property(nonatomic) __weak WNArticleDataController *dataController; // @synthesize dataController=_dataController;
- (_Bool)delectSelectedFromParagraphData:(id)arg1;
- (void)fixSelectRange;
- (id)getParaForInfo:(long long)arg1;
- (unsigned int)getSelectTextStyle:(id)arg1;
- (struct _NSRange)getSelectedRangeFor:(long long)arg1;
- (id)getTextViewFor:(long long)arg1;
- (id)init;
@property(nonatomic) long long selectEndIndex; // @synthesize selectEndIndex=_selectEndIndex;
@property(nonatomic) long long selectStartIndex; // @synthesize selectStartIndex=_selectStartIndex;
- (void)setBold:(id)arg1;
- (void)setSelectRange:(struct _NSRange)arg1 forSection:(long long)arg2;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)setUnBold:(id)arg1;

@end

