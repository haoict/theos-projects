/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"
#import "vkclient-Structs.h"

@class VKCurrency, VKMarketCollection, PriceRange, NSNumber, NSString, MarketModelFilter;

__attribute__((visibility("hidden")))
@interface MarketModelFilterOptions : XXUnknownSuperclass <NSCopying> {
	PriceRange* _allowedPriceRange;
	NSNumber* _albumID;
	VKMarketCollection* _collection;
	NSString* _query;
	VKCurrency* _filterCurrency;
	MarketModelFilter* _filter;
	MarketSorting_t _sort;
}
@property(assign, nonatomic) MarketSorting_t sort;
@property(retain, nonatomic) MarketModelFilter* filter;
@property(copy, nonatomic) NSString* query;
@property(retain, nonatomic) VKMarketCollection* collection;
@property(retain, nonatomic) NSNumber* albumID;
@property(retain, nonatomic) VKCurrency* filterCurrency;
@property(retain, nonatomic) PriceRange* allowedPriceRange;
-(id)copyWithNewAllowedPriceRange:(id)newAllowedPriceRange currency:(id)currency;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithAllowedPriceRange:(id)allowedPriceRange currency:(id)currency;
-(void)dealloc;
@end
