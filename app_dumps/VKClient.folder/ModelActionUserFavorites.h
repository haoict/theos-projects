/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class VKUser;

__attribute__((visibility("hidden")))
@interface ModelActionUserFavorites : ModelAction {
	BOOL _add;
}
@property(assign, nonatomic) BOOL add;
@property(retain, nonatomic) VKUser* target;
+(int)domainType;
-(id)actionSuccessMessage:(id)message;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
-(id)setupAdd:(BOOL)add;
-(void)dealloc;
@end
