/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ThumbnailEditAttachmentView.h"
#import "VKClient-Structs.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface LabeledThumbnailEditAttachmentView : ThumbnailEditAttachmentView {
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
}
@property(readonly, retain, nonatomic) UILabel* subtitleLabel;
@property(readonly, retain, nonatomic) UILabel* titleLabel;
-(void).cxx_destruct;
-(void)renderTitle:(id)title subtitle:(id)subtitle;
-(id)initWithAttachment:(id)attachment style:(id)style enableDeletion:(BOOL)deletion;
@end

