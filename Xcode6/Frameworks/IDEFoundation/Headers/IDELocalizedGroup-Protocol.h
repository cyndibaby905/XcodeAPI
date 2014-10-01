

#import <Foundation/Foundation.h>

@class DVTFileDataType, DVTFilePath, DVTLocale, IDEContainer, IDEFileReference;

@protocol IDELocalizedContainer;

@protocol IDELocalizedGroup <NSObject>
- (void)addNewReferenceForLocale:(DVTLocale *)arg1 filePath:(DVTFilePath *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (DVTFilePath *)proposedFilePathForLocalization:(DVTLocale *)arg1 fileType:(DVTFileDataType *)arg2;
- (IDEFileReference *)subitemForLocale:(DVTLocale *)arg1;
- (IDEContainer<IDELocalizedContainer> *)localizedContainer;
- (NSArray *)subitems;
@end

