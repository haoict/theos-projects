/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMLiveController.h"
#import "vkclient-Structs.h"

@class FriendListsModel;

__attribute__((visibility("hidden")))
@interface FriendListsController : VKMLiveController {
}
@property(retain, nonatomic) FriendListsModel* model;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(void)actionAdd:(id)add;
-(void)dialogWithTitle:(id)title text:(id)text completeBlock:(id)block;
-(void)viewDidLoad;
@end
