/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIPanGestureRecognizer;
@protocol VMSeekingViewDelegate;

__attribute__((visibility("hidden")))
@interface VMSeekingView : XXUnknownSuperclass {
	id<VMSeekingViewDelegate> _delegate;
	UIPanGestureRecognizer* _panGesture;
	float _xAtBeginning;
	float _progressAtBeginning;
}
@property(assign, nonatomic) __weak id<VMSeekingViewDelegate> delegate;
@property(assign, nonatomic) BOOL enabled;
@property(assign, nonatomic) float progressAtBeginning;
@property(assign, nonatomic) float xAtBeginning;
@property(retain, nonatomic) UIPanGestureRecognizer* panGesture;
-(void).cxx_destruct;
-(float)progressForTouchX:(float)touchX;
-(void)actionPanGesture:(id)gesture;
-(id)initWithFrame:(CGRect)frame;
@end
