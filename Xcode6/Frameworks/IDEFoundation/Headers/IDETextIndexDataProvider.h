

#import <Foundation/Foundation.h>

@class IDEWorkspace, NSArray;

@interface IDETextIndexDataProvider : NSObject
{
    NSArray *_fileDataTypes;
    IDEWorkspace *_workspace;
}

@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly) NSArray *fileDataTypes; // @synthesize fileDataTypes=_fileDataTypes;
- (id)findableForFilePath:(id)arg1;
- (BOOL)wantsIndexedFindResultsForFileDataType:(id)arg1;
- (id)textRepresentationOfContentsAtPath:(id)arg1;
- (id)initWithFileDataTypes:(id)arg1 workspace:(id)arg2;

@end

