//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TextParser.h"

@class NSString;

@interface AddressTextParser : TextParser
{
    NSString *_nsUrl;
    NSString *_nsSourceUrl;
}

+ (struct _NSRange)RangeOfObjectInString:(id)arg1 withRange:(struct _NSRange)arg2;
+ (_Bool)needParserAddress;
+ (id)newInstance;
- (void).cxx_destruct;
- (id)attributeStringForContent:(id)arg1;
- (id)getStyle;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)init;
- (struct _NSRange)rangeOfObjectInString:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)stylesForString:(id)arg1 withRange:(struct _NSRange)arg2 withParserPosition:(struct _NSParserPosition *)arg3;

@end

