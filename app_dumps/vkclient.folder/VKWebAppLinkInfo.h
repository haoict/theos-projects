/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VKWebAppLinkInfo : XXUnknownSuperclass {
	NSNumber* _appId;
	NSNumber* _ownerId;
	NSArray* _queryItems;
	NSString* _fragment;
}
@property(copy, nonatomic) NSString* fragment;
@property(retain, nonatomic) NSArray* queryItems;
@property(retain, nonatomic) NSNumber* ownerId;
@property(retain, nonatomic) NSNumber* appId;
-(void)dealloc;
@end
