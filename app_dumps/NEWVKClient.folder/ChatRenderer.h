/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "MessagesListRenderer.h"

@class UsersModel;

__attribute__((visibility("hidden")))
@interface ChatRenderer : MessagesListRenderer {
	unsigned offset;
	BOOL _multi;
	UsersModel* _usersModel;
}
@property(retain, nonatomic) UsersModel* usersModel;
@property(assign, nonatomic) BOOL multi;
-(void).cxx_destruct;
-(void)prerenderr:(id)prerenderr;
-(id)sectionKeyForMessage:(id)message;
-(unsigned)miscSections;
-(id)initWithOwner:(id)owner;
@end
