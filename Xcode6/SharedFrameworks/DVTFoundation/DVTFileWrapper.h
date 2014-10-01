

#import <Foundation/Foundation.h>

@class DVTFilePath;

@interface DVTFileWrapper : NSFileWrapper
{
    DVTFilePath *_filePath;
    CDUnknownBlockType _updateFilePathBlock;
}

@property(copy) CDUnknownBlockType updateFilePathBlock; // @synthesize updateFilePathBlock=_updateFilePathBlock;
@property(retain) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (id)addWrapper:(id)arg1;
- (void)_updateChildFilePaths;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;

@end

