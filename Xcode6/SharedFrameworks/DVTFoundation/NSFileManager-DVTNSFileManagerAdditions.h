

#import <Foundation/Foundation.h>

@interface NSFileManager (DVTNSFileManagerAdditions)
+ (BOOL)dvt_isPathValidForFileManagerOperations:(id)arg1;
- (BOOL)dvt_unzipArchiveAtPath:(id)arg1 toPath:(id)arg2 withIntermediateDirectories:(BOOL)arg3;
- (BOOL)dvt_zipArchiveAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (id)dvt_availableFilenameInDirectory:(id)arg1 desiredFilename:(id)arg2;
@end

