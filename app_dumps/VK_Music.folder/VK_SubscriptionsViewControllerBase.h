/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_TableControllerSwitcherDelegate.h"
#import "VK_BaseTableViewController.h"
#import "VK_InlineSearchParent.h"
#import "VK_Music-Structs.h"

@class VK_SegmentControl, UIView, VK_TableControllerSwitcher, VK_InlineSearchViewController, UIActivityIndicatorView, NSDictionary, UIImage, NSString, NSArray, VK_InlineSearchAnimationManager, VK_InlineSearchableNavigationControllerDelegate, VK_InlineSearchConfiguration;

__attribute__((visibility("hidden")))
@interface VK_SubscriptionsViewControllerBase : VK_BaseTableViewController <VK_InlineSearchParent, VK_TableControllerSwitcherDelegate> {
	BOOL _needToHandleContentOffset;
	int _currentSegmentType;
	VK_SegmentControl* _segmentControl;
	UIView* _topBarView;
	UIView* _contentView;
	UIActivityIndicatorView* _activityIndicatorView;
	NSDictionary* _segmentNames;
	UIImage* _noResultImage;
	NSString* _noResultString;
	NSArray* _supportedSegmentsTypes;
	VK_TableControllerSwitcher* _tableControllerSwitcher;
	VK_InlineSearchAnimationManager* _inlineSearchAnimationManager;
	VK_InlineSearchableNavigationControllerDelegate* _navigationControllerDelegate;
	VK_InlineSearchConfiguration* _friendsInlineSearchConfiguration;
	VK_InlineSearchConfiguration* _groupsInlineSearchConfiguration;
	VK_InlineSearchViewController* _inlineSearchViewController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) int currentSegmentType;
@property(assign, nonatomic) __weak VK_InlineSearchViewController* inlineSearchViewController;
@property(retain, nonatomic) VK_InlineSearchConfiguration* groupsInlineSearchConfiguration;
@property(retain, nonatomic) VK_InlineSearchConfiguration* friendsInlineSearchConfiguration;
@property(retain, nonatomic) VK_InlineSearchableNavigationControllerDelegate* navigationControllerDelegate;
@property(retain, nonatomic) VK_InlineSearchAnimationManager* inlineSearchAnimationManager;
@property(readonly, assign, nonatomic) float searchHiddenOffset;
@property(assign, nonatomic) BOOL needToHandleContentOffset;
@property(retain, nonatomic) VK_TableControllerSwitcher* tableControllerSwitcher;
@property(retain, nonatomic) NSArray* supportedSegmentsTypes;
@property(retain, nonatomic) NSString* noResultString;
@property(retain, nonatomic) UIImage* noResultImage;
@property(retain, nonatomic) NSDictionary* segmentNames;
@property(assign, nonatomic) __weak UIActivityIndicatorView* activityIndicatorView;
@property(assign, nonatomic) __weak UIView* contentView;
@property(assign, nonatomic) __weak UIView* topBarView;
@property(assign, nonatomic) __weak VK_SegmentControl* segmentControl;
-(void).cxx_destruct;
-(void)presentInlineSearchViewControllerWithSearchView:(id)searchView andConfiguration:(id)configuration;
-(void)hideSearchViewContainer;
-(void)showSearchViewContainer;
-(void)tableControllerCellItemsAllocated:(id)allocated;
-(id)friendsInlineSearchDataProvider;
-(void)showNoResultMessage;
-(void)dataProviderDidDataChanged:(id)dataProvider;
-(void)dataProviderErrorReceived:(id)received error:(id)error;
-(id)internalDataProviderForSegmentType:(int)segmentType;
-(int)segmentTypeForIndex:(unsigned)index;
-(void)internalWillSegmentChanging:(int)internal;
-(id)internalNoItemsTitleForSegment:(int)segment;
-(void)updateNoItemsView;
-(void)goToSegment:(int)segment;
-(void)addPixelSeparatorToTopBarView;
-(void)prepareSegmentController;
-(float)internalDefaultMinimalContentHeight;
-(id)internalCreateTableControllerConfiguration;
-(void)internalSetup;
-(id)internalContentView;
-(void)viewDidAppear:(BOOL)view;
-(void)setCustomTableController:(id)controller;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
@end
