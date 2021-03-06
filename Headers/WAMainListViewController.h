//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWAAppEntryExtension.h"
#import "MMUIViewControllerTransitionInfo.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "WAAppItemManagerExtension.h"
#import "WAContactMgrExtension.h"
#import "WAMainListGameEntryLogicDelegate.h"
#import "WAMainListNearByLogicDelegate.h"
#import "WAMainListPageLogicDelegate.h"
#import "WAMainListStarLogicDelegate.h"
#import "WAPermissionMgrExtension.h"
#import "WASearchControllerDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMTableView, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIPercentDrivenInteractiveTransition, UISearchBar, UIView, UIViewController, WAAppItemData, WAMainListGameEntryLogic, WAMainListNearByLogic, WAMainListPageLogic, WAMainListStarLogic, WAPackageSweeperLogic, WASearchController, WAToastViewController;

@interface WAMainListViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WAContactMgrExtension, WCActionSheetDelegate, WAAppItemManagerExtension, WASearchControllerDelegate, IWAAppEntryExtension, WAMainListPageLogicDelegate, WAMainListNearByLogicDelegate, WAMainListGameEntryLogicDelegate, WAMainListStarLogicDelegate, WAPermissionMgrExtension, UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    NSMutableArray *m_unStarHistoryItemMenuArray;
    NSMutableArray *m_staredHistoryItemMenuArray;
    NSMutableDictionary *m_contactViewCache;
    WAAppItemData *m_appItemToDelete;
    WAAppItemData *m_starItemToDelete;
    WAPackageSweeperLogic *m_sweepLogic;
    NSString *m_showSessionId;
    _Bool _isShowSearchBar;
    NSMutableArray *m_sessionData;
    _Bool _isViewHasLayout;
    _Bool _hasClickHistoryItem;
    _Bool _hasClickNearBySection;
    _Bool _isViewAppeared;
    UIView *_movingFakeCell;
    _Bool _needLogRedDot;
    unsigned int _onRedDotTime;
    unsigned long long m_scene;
    NSString *m_relatedUserName;
    NSString *m_sceneNote;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    UIViewController *_animatedTransitionRespondViewController;
    WASearchController *_searchController;
    UISearchBar *_searchBar;
    UIView *_topNavView;
    MMTableView *_tableView;
    WAToastViewController *_toastView;
    UIView *_emptyView;
    NSDictionary *_searchResult;
    WAMainListPageLogic *_pageLogic;
    WAMainListNearByLogic *_nearByLogic;
    WAMainListStarLogic *_starLogic;
    WAMainListGameEntryLogic *_gameEntryLogic;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)animateTransition:(id)arg1;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController=_animatedTransitionRespondViewController;
- (void)appItemDidStaredFailedWithCountLimit:(id)arg1;
- (void)appItemDidStaredFailedWithUnknownError:(id)arg1;
- (void)appItemDidStaredSuccess:(id)arg1;
- (void)appItemDidUnStaredFailedWithUnknownError:(id)arg1;
- (void)appItemDidUnStaredSuccess:(id)arg1;
- (void)checkAndUpdateContactInList:(id)arg1;
- (void)dealloc;
- (void)deleteHistoryItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)deleteStarItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didEndSearch;
- (void)didFinishFetchNextPageItems:(id)arg1 pageNum:(unsigned int)arg2 beginPos:(unsigned long long)arg3;
- (void)didFinishFetchNextPageItemsErrorWithErrCode:(int)arg1;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
- (void)fixNavigationBarTitle;
- (void)fixTableViewOffset;
@property(retain, nonatomic) WAMainListGameEntryLogic *gameEntryLogic; // @synthesize gameEntryLogic=_gameEntryLogic;
- (id)genStaredHistoryItemMenuArray;
- (id)genUnStarHistoryItemMenuArray;
- (id)getContactByUserName:(id)arg1;
- (_Bool)hasRunningAppTask;
- (long long)indexOfSessionId:(id)arg1;
- (id)init;
- (void)initCustomNavigationBar;
- (void)initEmptyView;
- (void)initRefreshControl;
- (void)initSearchController;
- (void)initTableView;
- (void)initTopNavView;
- (unsigned long long)insertGameEntrySection;
- (unsigned long long)insertNearBySection;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
- (_Bool)isInSearch;
- (void)loadMoreIfNeeded;
@property(copy, nonatomic) NSString *m_relatedUserName; // @synthesize m_relatedUserName;
@property(nonatomic) unsigned long long m_scene; // @synthesize m_scene;
@property(copy, nonatomic) NSString *m_sceneNote; // @synthesize m_sceneNote;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
@property(retain, nonatomic) WAMainListNearByLogic *nearByLogic; // @synthesize nearByLogic=_nearByLogic;
@property(nonatomic) _Bool needLogRedDot; // @synthesize needLogRedDot=_needLogRedDot;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onClickGameEntryCell;
- (void)onClickNearbyCell;
- (void)onDeleteAppListItemAtIndexPath:(id)arg1 appItem:(id)arg2;
- (void)onDeleteStaredItem:(id)arg1 atIndexPath:(id)arg2;
- (void)onFirstTimeGetNearByInfo;
- (void)onGetGameEntry;
- (void)onGetGameEntryFailedWithErrCode:(int)arg1;
- (void)onGetNearByInfoFailedWithErrCode:(int)arg1;
- (void)onGetNearByInfoFailedWithLocationInvalid;
- (void)onLaunchPermissionUpdateHistoryList:(id)arg1;
- (void)onModifyWeAppContact:(id)arg1;
- (void)onMoreOperate;
- (void)onNearByInfoTriggerUpdated;
- (void)onOpenGameEntry;
- (void)onOpenGameEntryH5Version;
- (void)onOpenGameEntryWeappVersion;
- (void)onOpenNearWeApps;
@property(nonatomic) unsigned int onRedDotTime; // @synthesize onRedDotTime=_onRedDotTime;
- (void)onReturn;
- (void)onSearchPlaceHolderUpdate:(id)arg1;
- (void)onStarBarButton;
- (void)onWeAppItemOpened:(id)arg1;
- (void)openStarListView;
@property(retain, nonatomic) WAMainListPageLogic *pageLogic; // @synthesize pageLogic=_pageLogic;
- (void)reloadGameEntrySection;
- (void)reloadNearBySection;
- (void)reloadTableView;
- (void)reloadTableViewNonAnimated;
- (void)reportDestopOpWithAppItem:(id)arg1 eventId:(unsigned long long)arg2;
- (void)reportDestopStateWhenViewAppear;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) WASearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) NSDictionary *searchResult; // @synthesize searchResult=_searchResult;
- (void)setNavigationBarViewsHidden:(_Bool)arg1;
@property(retain, nonatomic) WAMainListStarLogic *starLogic; // @synthesize starLogic=_starLogic;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WAToastViewController *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) UIView *topNavView; // @synthesize topNavView=_topNavView;
- (void)showTipsViewController:(id)arg1;
- (void)showToast:(id)arg1;
- (void)starAppItem:(id)arg1 atIndexPath:(id)arg2;
- (void)starDataDidUpdated;
- (unsigned int)stateFlagForAppItem:(id)arg1 withIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tranferDynamicViewModelFromNearByInfo:(id)arg1;
- (id)transferDynamicViewModelFromGameEntryInfo:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)tryFixSearchController;
- (void)unstarAppItem:(id)arg1 atIndexPath:(id)arg2;
- (void)updateEmptyViewState;
- (void)updateFooterNoMoreDataState;
- (void)updateNavigationItems;
- (void)updateRefreshFooterHiddenState;
- (void)updateSectionData;
- (void)updateViewStates;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willBeginSearch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

