/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@class NSURL, NSData, VKVideo;

@protocol IVideoUploadContext <NSObject>
@optional
@property(readonly, retain, nonatomic) VKVideo* video;
@required
@property(readonly, assign, nonatomic) float videoDuration;
@property(assign, nonatomic) long long totalBytesUploaded;
@property(assign, nonatomic) BOOL is_private;
@property(retain, nonatomic) NSData* uploadResumeData;
@property(readonly, retain, nonatomic) NSURL* fileURL;
@end
