/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VKStats, AudioSearchHistoryStorage;

__attribute__((visibility("hidden")))
@interface AudioSearchHistoryVKStats : XXUnknownSuperclass {
	AudioSearchHistoryStorage* _storage;
	VKStats* _stats;
}
@property(readonly, retain, nonatomic) AudioSearchHistoryStorage* storage;
@property(retain, nonatomic) VKStats* stats;
+(id)stats:(id)stats;
-(void).cxx_destruct;
-(void)clear;
-(void)save;
-(id)initWithStats:(id)stats;
@end

