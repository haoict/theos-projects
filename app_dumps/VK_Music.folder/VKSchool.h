/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKApiObject.h"

@class NSString, NSNumber;

@interface VKSchool : VKApiObject {
	NSNumber* _id;
	NSNumber* _country;
	NSNumber* _city;
	NSString* _name;
	NSNumber* _year_from;
	NSNumber* _year_to;
	NSNumber* _year_graduated;
	NSString* _Mclass;
	NSString* _speciality;
	NSNumber* _type;
	NSString* _type_str;
}
@property(retain, nonatomic) NSString* type_str;
@property(retain, nonatomic) NSNumber* type;
@property(retain, nonatomic) NSString* speciality;
@property(retain, nonatomic) NSString* Mclass;
@property(retain, nonatomic) NSNumber* year_graduated;
@property(retain, nonatomic) NSNumber* year_to;
@property(retain, nonatomic) NSNumber* year_from;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSNumber* city;
@property(retain, nonatomic) NSNumber* country;
@property(retain, nonatomic) NSNumber* id;
-(void).cxx_destruct;
-(id)initWithDictionary:(id)dictionary;
@end
