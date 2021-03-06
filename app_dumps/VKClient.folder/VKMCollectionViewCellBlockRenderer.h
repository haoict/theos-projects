/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKMCollectionViewCellRenderer.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKMCollectionViewCellBlockRenderer : XXUnknownSuperclass <VKMCollectionViewCellRenderer> {
	Class _modelClass;
	Class _cellClass;
	id _configurationBlock;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, copy, nonatomic) id configurationBlock;
@property(readonly, retain, nonatomic) Class cellClass;
@property(readonly, retain, nonatomic) Class modelClass;
+(id)rendererWithModelClass:(Class)modelClass cellClass:(Class)aClass block:(id)block;
-(void).cxx_destruct;
-(id)collectionView:(id)view cellForObject:(id)object atIndexPath:(id)indexPath;
-(void)registerToCollectionView:(id)collectionView;
-(id)reuseIdentifier;
-(BOOL)canRenderObject:(id)object;
-(id)initWithModelClass:(Class)modelClass cellClass:(Class)aClass block:(id)block;
@end

