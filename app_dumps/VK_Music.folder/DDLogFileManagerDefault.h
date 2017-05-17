/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DDLogFileManager.h"

@class NSString;

@interface DDLogFileManagerDefault : XXUnknownSuperclass <DDLogFileManager> {
	unsigned _maximumNumberOfLogFiles;
	unsigned long long _logFilesDiskQuota;
	NSString* _logsDirectory;
	NSString* _defaultFileProtectionLevel;
}
@property(assign) unsigned long long logFilesDiskQuota;
@property(assign) unsigned maximumNumberOfLogFiles;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, copy) NSString* newLogFileName;
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
-(void).cxx_destruct;
-(id)applicationName;
-(id)createNewLogFile;
-(id)sortedLogFileInfos;
-(id)sortedLogFileNames;
-(id)sortedLogFilePaths;
-(id)unsortedLogFileInfos;
-(id)unsortedLogFileNames;
-(id)unsortedLogFilePaths;
-(id)logFileDateFormatter;
-(BOOL)isLogFile:(id)file;
-(id)logsDirectory;
-(id)defaultLogsDirectory;
-(void)deleteOldLogFiles;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)dealloc;
-(id)initWithLogsDirectory:(id)logsDirectory defaultFileProtectionLevel:(id)level;
-(id)initWithLogsDirectory:(id)logsDirectory;
-(id)init;
@end
