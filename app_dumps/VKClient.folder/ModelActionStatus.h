/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class VKIdentity, NSString;

__attribute__((visibility("hidden")))
@interface ModelActionStatus : ModelAction {
	NSString* _status;
}
@property(retain, nonatomic) NSString* status;
@property(retain, nonatomic) VKIdentity* target;
+(int)domainType;
-(void).cxx_destruct;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
@end
