

#import <Foundation/Foundation.h>

@class DVTFilePath, DVTSourceCodeSymbolKind, IDEIndexCollection, NSString;

@protocol IDEAutoImportable <NSObject>
@property(readonly, nonatomic) IDEIndexCollection *definitions;
@property(readonly, nonatomic, getter=isAutoImportable) BOOL autoImportable;
@property(readonly, nonatomic) DVTFilePath *filePathToHeaderToImport;
@property(readonly, nonatomic) DVTSourceCodeSymbolKind *symbolKind;
@property(readonly, nonatomic, getter=isInProject) BOOL inProject;
@property(readonly, nonatomic) NSString *completionString;
@property(readonly, nonatomic) NSString *name;
@end

