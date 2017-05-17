/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITextViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "VK_Music-Structs.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UICollectionViewDelegate.h"
#import "VKSdkDelegate.h"
#import "VKSdkUIDelegate.h"

@class NSMutableArray, NSObject, UIBarButtonItem, VKShareDialogController, VKPostSettings, UICollectionView, NSString;
@protocol OS_dispatch_queue;

@interface VKShareDialogControllerInternal : XXUnknownSuperclass <UITextViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, VKSdkDelegate, VKSdkUIDelegate> {
	NSObject<OS_dispatch_queue>* imageProcessingQueue;
	BOOL _prepared;
	VKShareDialogController* _parent;
	UIBarButtonItem* _sendButton;
	NSMutableArray* _attachmentsArray;
	VKPostSettings* _postSettings;
	id<VKSdkUIDelegate> _oldDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<VKSdkUIDelegate> oldDelegate;
@property(assign, nonatomic) BOOL prepared;
@property(retain, nonatomic) VKPostSettings* postSettings;
@property(retain, nonatomic) NSMutableArray* attachmentsArray;
@property(retain, nonatomic) UIBarButtonItem* sendButton;
@property(readonly, assign, nonatomic) UICollectionView* attachmentsScrollView;
@property(assign, nonatomic) __weak VKShareDialogController* parent;
-(void).cxx_destruct;
-(void)textViewDidChange:(id)textView;
-(void)removeAttachIfExists:(id)exists;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(CGSize)collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)indexPath;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(void)createAttachments;
-(void)vkSdkUserAuthorizationFailed;
-(void)vkSdkAuthorizationStateUpdatedWithResult:(id)result;
-(void)vkSdkAccessAuthorizationFinishedWithResult:(id)result;
-(void)vkSdkShouldPresentViewController:(id)vkSdk;
-(void)vkSdkNeedCaptchaEnter:(id)enter;
-(void)authorize:(id)authorize;
-(void)openSettings:(id)settings;
-(void)sendMessage:(id)message;
-(void)close:(id)close;
-(id)rightBarButtonItems;
-(void)prepare;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)setAuthorizationState:(unsigned)state;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidLoad;
-(void)loadView;
-(id)init;
-(void)dealloc;
@end
