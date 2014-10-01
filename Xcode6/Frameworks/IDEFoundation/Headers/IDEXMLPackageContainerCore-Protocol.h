

#import <IDEFoundation/IDEContainerCore.h>

@class DVTFilePath;

@protocol IDEXMLPackageContainerCore <IDEContainerCore>
- (BOOL)writeToFile:(DVTFilePath *)arg1 error:(id *)arg2;
- (id)initWithContentsOfFile:(DVTFilePath *)arg1 error:(id *)arg2;
@end

