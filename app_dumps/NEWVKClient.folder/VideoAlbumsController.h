/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMLiveController.h"
#import "VKClient-Structs.h"

@class VideoAlbumsInfoToolbar, VideoAlbumsModel;

__attribute__((visibility("hidden")))
@interface VideoAlbumsController : VKMLiveController {
	VideoAlbumsInfoToolbar* _toolbar;
}
@property(retain, nonatomic) VideoAlbumsModel* model;
@property(retain, nonatomic) VideoAlbumsInfoToolbar* toolbar;
-(void).cxx_destruct;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(BOOL)VKMControllerHideTabBarShadow;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(void)actionAdd:(id)add;
-(void)dialogWithTitle:(id)title text:(id)text completeBlock:(id)block;
-(void)actionVideoAlbumsInfoSegment:(id)segment;
-(void)updateInsets;
-(void)viewDidLoad;
-(void)VKMControllerSetAutocloseButton:(id)button;
-(void)loadView;
@end

