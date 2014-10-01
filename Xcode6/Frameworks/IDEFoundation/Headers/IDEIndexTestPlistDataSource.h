

#import <IDEFoundation/IDEIndexDataSource.h>

@class IDEIndexImportSession, NSString;

@interface IDEIndexTestPlistDataSource : IDEIndexDataSource
{
    IDEIndexImportSession *_session;
    NSString *_target;
}

+ (void)initialize;
- (void)_processFile:(id)arg1 newFiles:(id)arg2;
- (id)_newFilesForDictionaries:(id)arg1;
- (void)_processSymbol:(id)arg1 inFile:(id)arg2 container:(id)arg3 containerName:(id)arg4;
- (BOOL)generateDataForJob:(id)arg1;
- (void)generateDataForPlist:(id)arg1;
- (id)initWithSession:(id)arg1 target:(id)arg2;

@end

