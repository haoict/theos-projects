/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface ModelActionSendGameInvite : ModelAction {
	NSNumber* _friendID;
	NSNumber* _gameID;
	id _completionBlock;
}
@property(readonly, retain, nonatomic) NSNumber* gameID;
@property(readonly, retain, nonatomic) NSNumber* friendID;
@property(readonly, copy, nonatomic) id completionBlock;
+(int)domainType;
+(id)actionToInviteFriend:(id)inviteFriend toPlayGame:(id)playGame completionBlock:(id)block;
-(void).cxx_destruct;
-(BOOL)actionShowsFailureConfirmation;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
@end
