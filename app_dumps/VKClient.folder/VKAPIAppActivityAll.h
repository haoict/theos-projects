/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VKAPIAppActivityAll : VKRenderable {
	NSNumber* _appID;
	unsigned _count;
}
@property(readonly, assign, nonatomic) unsigned count;
@property(readonly, retain, nonatomic) NSNumber* appID;
+(id)allActivitiesWithCount:(unsigned)count appID:(id)anId;
-(void).cxx_destruct;
-(Class)cellClass;
@end

