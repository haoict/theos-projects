/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKIdentity.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKPrivacyIdentity : VKIdentity {
	NSString* _key;
}
@property(copy, nonatomic) NSString* key;
+(id)idenWithKey:(id)key;
-(BOOL)isEqualToIdentity:(id)identity;
-(BOOL)isEqual:(id)equal;
-(void)dealloc;
@end
