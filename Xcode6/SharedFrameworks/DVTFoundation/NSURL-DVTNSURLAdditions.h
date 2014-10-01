

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTSimpleSerialization-Protocol.h>

@interface NSURL (DVTNSURLAdditions) <DVTSimpleSerialization>
+ (id)dvt_URLWithScheme:(id)arg1 path:(id)arg2 documentParameters:(id)arg3 locationParameters:(id)arg4;
+ (id)dvt_fileURLWithAbsoluteOrRelativePath:(id)arg1;
- (id)dvt_locationParameters;
- (id)dvt_documentParameters;
- (id)dvt_sanitizedFilePath;
@end

