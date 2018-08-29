/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton, UIVisualEffectView, UILabel, RoundedProgressOverlayView;

__attribute__((visibility("hidden")))
@interface StoryFullscreenFooterView : XXUnknownSuperclass {
	unsigned _mode;
	float _uploadProgress;
	int _viewsCount;
	UIButton* _sendMessageButton;
	UIButton* _moreActionsButton;
	UIButton* _shareButton;
	UIButton* _retryUploadButton;
	UIButton* _viewsCountButton;
	RoundedProgressOverlayView* _uploadProgressView;
	UILabel* _uploadStatusLabel;
	UILabel* _failedUploadStatusLabel;
	UIVisualEffectView* _failedUploadBackgroundView;
}
@property(readonly, assign, nonatomic) UIButton* viewsCountButton;
@property(readonly, assign, nonatomic) UIButton* retryUploadButton;
@property(readonly, assign, nonatomic) UIButton* shareButton;
@property(readonly, assign, nonatomic) UIButton* moreActionsButton;
@property(readonly, assign, nonatomic) UIButton* sendMessageButton;
@property(assign, nonatomic) int viewsCount;
@property(assign, nonatomic) float uploadProgress;
@property(assign, nonatomic) unsigned mode;
@property(retain, nonatomic) UIVisualEffectView* failedUploadBackgroundView;
@property(retain, nonatomic) UILabel* failedUploadStatusLabel;
@property(retain, nonatomic) UILabel* uploadStatusLabel;
@property(retain, nonatomic) RoundedProgressOverlayView* uploadProgressView;
-(void).cxx_destruct;
-(void)setUploadStatusText:(id)text;
-(void)updateContentForMode:(unsigned)mode;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end
