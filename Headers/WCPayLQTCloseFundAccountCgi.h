//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@class NSString;

@interface WCPayLQTCloseFundAccountCgi : WCPayBaseCgi
{
    NSString *_pwdEnString;
    id <WCPayLQTCloseFundAccountCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayLQTCloseFundAccountCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (id)initWithdelegate:(id)arg1;
@property(retain, nonatomic) NSString *pwdEnString; // @synthesize pwdEnString=_pwdEnString;
- (void)startSendRequest;

@end

