/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SKPaymentTransactionObserver.h"

@class VKSession, NSMutableSet, NSMutableDictionary, NSNumberFormatter, NSString;

__attribute__((visibility("hidden")))
@interface StoreStockManager : XXUnknownSuperclass <SKPaymentTransactionObserver> {
	VKSession* _weakSession;
	NSMutableSet* _pendingSKProductIds;
	NSMutableDictionary* _loadedSKProducts;
	NSMutableDictionary* _pendingGiftStats;
	NSMutableSet* _invalidSKProductIds;
	NSMutableSet* _processingProductIds;
	NSMutableSet* _processingSKProductIds;
	NSMutableSet* _purchasedProductIds;
	NSMutableDictionary* _errors;
	NSNumberFormatter* _priceFormatter;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) VKSession* weakSession;
@property(readonly, retain, nonatomic) NSNumberFormatter* priceFormatter;
@property(retain, nonatomic) NSMutableDictionary* errors;
@property(retain, nonatomic) NSMutableSet* purchasedProductIds;
@property(retain, nonatomic) NSMutableSet* processingSKProductIds;
@property(retain, nonatomic) NSMutableSet* processingProductIds;
@property(retain, nonatomic) NSMutableSet* invalidSKProductIds;
@property(retain, nonatomic) NSMutableDictionary* pendingGiftStats;
@property(retain, nonatomic) NSMutableDictionary* loadedSKProducts;
@property(retain, nonatomic) NSMutableSet* pendingSKProductIds;
+(void)handlePurchaseNotification:(id)notification withProductType:(int)productType quite:(BOOL)quite;
+(BOOL)stateNotification:(id)notification updatesStockItem:(id)item;
-(void)restoreProducts;
-(void)handleStoreError:(id)error;
-(void)runActionForStock:(id)stock referrerContext:(id)context;
-(void)touchMerchantProductIds:(id)ids;
-(BOOL)productPurchased:(id)purchased;
-(id)priceForStock:(id)stock;
-(int)stateForStock:(id)stock;
-(int)errorForStock:(id)stock;
-(void)processProductPurchase:(id)purchase;
-(void)checkBalanceAndPurchase:(id)purchase attempt:(int)attempt guid:(id)guid referrerContext:(id)context;
-(void)balancePopupWithCallback:(id)callback;
-(void)getBalanceWithCallback:(id)callback hud:(id)hud;
-(void)buyAPIProduct:(id)product attempt:(int)attempt repeatRate:(float)rate guid:(id)guid onRepeat:(id)repeat referrerContext:(id)context;
-(void)purchaseAPIProductId:(id)anId transaction:(id)transaction attempt:(int)attempt repeatRate:(float)rate;
-(void)purchaseAPIProductId:(id)anId transaction:(id)transaction attempt:(int)attempt;
-(void)processPurchaseResult:(id)result transaction:(id)transaction productId:(id)anId merchantProductId:(id)anId4 attempt:(int)attempt onRepeat:(id)repeat;
-(void)paymentQueueRestoreCompletedTransactionsFinished:(id)finished;
-(void)paymentQueue:(id)queue restoreCompletedTransactionsFailedWithError:(id)error;
-(void)paymentQueue:(id)queue updatedTransactions:(id)transactions;
-(void)finishTransaction:(id)transaction;
-(void)purchaseMerchantProductId:(id)anId;
-(id)currentApplicationUserName;
-(void)clearErrorForProductId:(id)productId merchantProductId:(id)anId;
-(id)errorForStoreItem:(id)storeItem;
-(void)registerError:(id)error;
-(void)updateProcessing:(BOOL)processing force:(BOOL)force productId:(id)anId merchantProductId:(id)anId4;
-(void)notifyProductId:(id)anId merchantProductId:(id)anId2;
-(void)notifyProductIds:(id)ids merchantProductIds:(id)ids2;
-(void)_clearErrors;
-(void)_clearLocalProducts;
-(void)applicationBecomeActive:(id)active;
-(void)drop;
-(void)dealloc;
-(id)init;
@end
