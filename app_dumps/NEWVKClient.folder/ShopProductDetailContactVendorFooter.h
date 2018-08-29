/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIColor, UIButton;
@protocol ShopProductDetailContactVendorFooterDelegate;

__attribute__((visibility("hidden")))
@interface ShopProductDetailContactVendorFooter : XXUnknownSuperclass {
	id<ShopProductDetailContactVendorFooterDelegate> _delegate;
	UIColor* _floatingColor;
	UIColor* _stickingColor;
	UIButton* _contactVendorButton;
	int _headerState;
}
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;
@property(copy, nonatomic) NSString* title;
@property(retain, nonatomic) UIColor* stickingColor;
@property(retain, nonatomic) UIColor* floatingColor;
@property(assign, nonatomic) __weak id<ShopProductDetailContactVendorFooterDelegate> delegate;
@property(assign, nonatomic) int headerState;
@property(readonly, retain, nonatomic) UIButton* contactVendorButton;
-(void).cxx_destruct;
-(void)setFloating:(BOOL)floating animated:(BOOL)animated;
-(void)applyBackgroundColorForState;
-(void)layoutSubviews;
-(void)contactVendorButtonTapped;
-(id)createSubviews;
-(id)initWithReuseIdentifier:(id)reuseIdentifier;
@end
