//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavoritesItem, NSArray, NSString;

@protocol IFavoritesExt <NSObject>

@optional
- (void)OnAddFavoritesItem:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)OnDelAllFavItem;
- (void)OnDelFavoritesItem:(unsigned int)arg1;
- (void)OnDownloadFavoritesItem:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)OnDownloadFavoritesItemFail:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2;
- (void)OnDownloadFavoritesItemOK:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2;
- (void)OnFavoritesItemDownloadFinished:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)OnFavoritesItemStartAsyncUpload:(FavoritesItem *)arg1;
- (void)OnGetFirstPageFavoritesCapacityItemList:(NSArray *)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetFirstPageFavoritesItemList:(NSArray *)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetNextPageFavoritesCapacityItemList:(NSArray *)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetNextPageFavoritesItemList:(NSArray *)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnHasAnyFavoriteData:(_Bool)arg1;
- (void)OnLoadMoreFavoritesItemFail;
- (void)OnModFavoritesItem:(NSArray *)arg1;
- (void)OnNewFavoritesItemUpdate:(NSArray *)arg1;
- (void)OnNoteSecurityCheckFail:(unsigned int)arg1;
- (void)OnNoteSecurityCheckOK:(unsigned int)arg1;
- (void)OnRemoveFavoritesItem;
- (void)OnRestartAllUploadFailItems;
- (void)OnSearch:(NSArray *)arg1;
- (void)OnStartDownloadFavoritesItem:(FavoritesItem *)arg1;
- (void)OnStartUploadFavoritesItem:(FavoritesItem *)arg1;
- (void)OnUpdateItemDescription:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)OnUpdateItemRemark:(unsigned int)arg1 ErrCode:(int)arg2;
- (void)OnUpdateItems:(NSArray *)arg1;
- (void)OnUpdateScheduleItem:(FavoritesItem *)arg1 hasHandle:(_Bool *)arg2;
- (void)OnUploadFavoritesItem:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
@end

