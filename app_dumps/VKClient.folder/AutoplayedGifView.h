/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMGifLoaderDelegate.h"
#import "VKClient-Structs.h"
#import "AutoplayedBaseView.h"

@class UIView, VKMGifLoader, NSString;

__attribute__((visibility("hidden")))
@interface AutoplayedGifView : AutoplayedBaseView <VKMGifLoaderDelegate> {
	BOOL _forcePlay;
	VKMGifLoader* _gifLoader;
	UIView* _badgeView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL forcePlay;
@property(assign, nonatomic) __weak UIView* badgeView;
@property(readonly, assign, nonatomic) VKMGifLoader* gifLoader;
-(void).cxx_destruct;
-(void)viewTrackingBoundsDidChange:(float)viewTrackingBounds previousValue:(float)value;
-(CGSize)playerSize;
-(void)gifLoader:(id)loader complete:(id)complete;
-(void)gifLoader:(id)loader reportProgress:(double)progress;
-(void)load:(id)load;
-(void)attach:(id)attach previewVariant:(id)variant;
-(void)renderVideoHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)reuse;
-(BOOL)readyToDisplay;
-(void)tapped:(id)tapped;
-(id)initWithFrame:(CGRect)frame synchronized:(BOOL)synchronized fallback:(BOOL)fallback;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end
