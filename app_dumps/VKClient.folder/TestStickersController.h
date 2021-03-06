/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "ExtraInputPanelViewPhotoEditorModeDelegate.h"
#import "VKMController.h"

@class NSString, ExtrasInputView;

__attribute__((visibility("hidden")))
@interface TestStickersController : VKMController <ExtraInputPanelViewPhotoEditorModeDelegate> {
	ExtrasInputView* _extrasView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) ExtrasInputView* extrasView;
-(void).cxx_destruct;
-(void)extraInputViewDidCancel:(id)extraInputView;
-(void)extraInputView:(id)view didSelectEmojiImage:(id)image emojiString:(id)string;
-(void)extraInputView:(id)view didSelectStickerImage:(id)image stickerId:(id)anId;
-(void)viewDidLoad;
-(BOOL)VKMControllerStatusBarHidden;
@end

