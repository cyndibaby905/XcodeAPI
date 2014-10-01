

#import <IDEFoundation/IDERunOperationWorker.h>

@class DVTFilePath, NSMutableDictionary;

@interface IDERunOperationPathWorker : IDERunOperationWorker
{
}

@property(readonly) NSMutableDictionary *compositeEnvironmentVariables;
@property(readonly) DVTFilePath *filePath;

@end

