/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class VKDomain, NSNumber;

__attribute__((visibility("hidden")))
@interface ModelActionMove : ModelAction {
	NSNumber* _from;
	NSNumber* _to;
}
@property(retain, nonatomic) NSNumber* to;
@property(retain, nonatomic) NSNumber* from;
@property(retain, nonatomic) VKDomain* target;
-(void)dealloc;
@end
