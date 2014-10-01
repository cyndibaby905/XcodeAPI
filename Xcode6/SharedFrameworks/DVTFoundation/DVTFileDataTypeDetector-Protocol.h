

@class NSNumber, NSString, NSURL;

@protocol DVTFileDataTypeDetector
+ (NSNumber *)fileURL:(NSURL *)arg1 matchesFileDataTypeDetectorForExtension:(NSString *)arg2 error:(id *)arg3;
@end

