/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GiftsStatContext, NSNumber;

__attribute__((visibility("hidden")))
@interface VKGiftsContext : XXUnknownSuperclass {
	NSNumber* _owner_id;
	NSNumber* _chat_id;
	GiftsStatContext* _stat_context;
}
@property(retain, nonatomic) GiftsStatContext* stat_context;
@property(retain, nonatomic) NSNumber* chat_id;
@property(retain, nonatomic) NSNumber* owner_id;
+(id)withDialogId:(id)dialogId;
+(id)withChatId:(id)chatId;
+(id)withUserId:(id)userId;
-(void).cxx_destruct;
-(id)withStatContext:(id)statContext;
@end
