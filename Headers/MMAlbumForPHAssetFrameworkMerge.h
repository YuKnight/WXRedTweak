//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMAlbumForiOS8Plus.h"

@class NSArray, NSMutableDictionary, NSString;

@interface MMAlbumForPHAssetFrameworkMerge : MMAlbumForiOS8Plus
{
    NSString *_m_albumId;
    NSArray *_m_albumArray;
    NSMutableDictionary *_m_assetDic;
}

- (void).cxx_destruct;
- (id)albumId;
- (id)assetOfIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)coverImage;
- (id)initWithAlbumId:(id)arg1 AlbumArray:(id)arg2;
- (id)lastAssetWithSecond:(double)arg1;
@property(retain, nonatomic) NSArray *m_albumArray; // @synthesize m_albumArray=_m_albumArray;
@property(retain, nonatomic) NSString *m_albumId; // @synthesize m_albumId=_m_albumId;
@property(retain, nonatomic) NSMutableDictionary *m_assetDic; // @synthesize m_assetDic=_m_assetDic;
- (id)name;
- (unsigned long long)photosCount;
- (void)retriveCoverImageWithAsyncBlock:(CDUnknownBlockType)arg1;
- (void)retrivePhotoCountWithAsyncBlock:(CDUnknownBlockType)arg1;

@end
