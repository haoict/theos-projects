/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextViewDelegate.h"
#import "EditController.h"
#import "UITableViewDelegate.h"
#import "VKClient-Structs.h"
#import "UITableViewDataSource.h"

@class NSString, UITableView, UITextView, UITextField, ItemEditContext, UILabel;

__attribute__((visibility("hidden")))
@interface ItemEditController : EditController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate> {
	BOOL group;
	int titleMin;
	int titleMax;
	int descrMin;
	int descrMax;
	float DESCR_H;
	float keyboardHeight;
	BOOL firstAppear;
	BOOL _privacy;
	UITextField* _fieldTitle;
	UITextView* _textDescription;
	UITableView* _tableView;
	UILabel* _textPlaceholder;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UITextView* textDescription;
@property(retain, nonatomic) UITextField* fieldTitle;
@property(retain, nonatomic) ItemEditContext* context;
@property(retain, nonatomic) UILabel* textPlaceholder;
@property(retain, nonatomic) UITableView* tableView;
@property(assign, nonatomic) BOOL privacy;
+(id)main:(id)main context:(id)context;
-(void).cxx_destruct;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)loadPrivacyObjectsIfRequired;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)textViewDidChange:(id)textView;
-(void)updatePlaceholder;
-(void)buttonConfirm:(id)confirm;
-(void)titleChanged:(id)changed;
-(void)render;
-(void)VKMEditDataChanged:(BOOL)changed;
-(int)VKMEditDataState;
-(void)rerender;
-(void)updateInsets;
-(void)notificationKeyboard:(id)keyboard;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)loadView;
-(void)dealloc;
@end

