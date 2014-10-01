

#import <IDEFoundation/IDEBuildable-Protocol.h>

@class DVTFileDataType, DVTFilePath, IDEBuildParameters, NSDictionary, NSString;

@protocol IDEBuildableProduct <IDEBuildable>
@property(readonly) NSDictionary *copiedFilePathsMap;
@property(readonly) BOOL productIsExecutable;
@property(readonly) NSDictionary *productSettings;
@property(readonly) NSString *iconPath;
@property(readonly, copy) DVTFileDataType *fileDataType;
@property(readonly) DVTFilePath *filePath;
- (DVTFilePath *)filePathForBuildParameters:(IDEBuildParameters *)arg1;
- (NSString *)productTypeIdentifier;
@end

