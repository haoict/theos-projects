/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "EditController.h"
#import "vkclient-Structs.h"
#import "UITableViewDataSource.h"
#import "UITextViewDelegate.h"

@class UITableViewCell, UITableView, PollEditTextCell, PollEditContext, NSString;

__attribute__((visibility("hidden")))
@interface PollEditController : EditController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate> {
	float keyboardHeight;
	BOOL forced;
	UITableView* _tableView;
	PollEditTextCell* _sampleCell;
	PollEditTextCell* _titleCell;
	UITableViewCell* _anonCell;
	UITableViewCell* _addCell;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) PollEditContext* context;
@property(retain, nonatomic) UITableViewCell* addCell;
@property(retain, nonatomic) UITableViewCell* anonCell;
@property(retain, nonatomic) PollEditTextCell* titleCell;
@property(retain, nonatomic) PollEditTextCell* sampleCell;
@property(retain, nonatomic) UITableView* tableView;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textViewDidEndEditing:(id)textView;
-(void)textViewDidBeginEditing:(id)textView;
-(void)textViewDidChange:(id)textView;
-(void)scrollToCell:(id)cell focus:(BOOL)focus;
-(id)cellForTextView:(id)textView;
-(void)VKMEditDataChanged:(BOOL)changed;
-(void)removeAnswer:(id)answer;
-(void)addAnswer;
-(void)withAnswers:(id)answers;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)updateForOrientation;
-(void)notificationKeyboard:(id)keyboard;
-(void)VKMControllerChromeInsetsApply;
-(void)actionToggleAnon:(id)anon;
-(void)actionDismiss:(id)dismiss;
-(int)VKMEditDataState;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)loadView;
-(void)dealloc;
-(id)initWithMain:(id)main andModel:(id)model;
@end
