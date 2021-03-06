/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCopying.h"
#import "VKClient-Structs.h"
#import "VKRenderable.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface VKMobileSupportConfiguration : VKRenderable <NSCopying> {
	NSURL* _url;
	double _interval;
}
@property(assign, nonatomic) double interval;
@property(copy, nonatomic) NSURL* url;
-(void).cxx_destruct;
-(unsigned)hash;
-(BOOL)isEqualToConfiguration:(id)configuration;
-(BOOL)isEqual:(id)equal;
-(BOOL)process:(id)process context:(id)context;
-(id)copyWithZone:(NSZone*)zone;
@end

