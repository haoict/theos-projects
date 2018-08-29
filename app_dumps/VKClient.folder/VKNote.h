/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"
#import "VKTextPage.h"

@class VKPageContent, NSString;

__attribute__((visibility("hidden")))
@interface VKNote : VKDomain <VKTextPage> {
	unsigned _date;
	VKPageContent* _text;
	NSString* _view_url;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* view_url;
@property(retain, nonatomic) VKPageContent* text;
@property(assign, nonatomic) unsigned date;
+(id)note:(id)note owner:(id)owner;
-(void).cxx_destruct;
-(id)URLForTextPage;
-(Class)rendererClass;
-(BOOL)process:(id)process context:(id)context;
@end
