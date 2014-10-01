

@class IDEIndexDatabase, IDEIndexImportSession, NSArray, NSDictionary;

@protocol IDEIndexDatabaseDelegate

@optional
- (void)database:(IDEIndexDatabase *)arg1 reportAutoQueryProgress:(double)arg2;
- (void)clearPCHFailuresForDatabase:(IDEIndexDatabase *)arg1;
- (void)database:(IDEIndexDatabase *)arg1 didForgetFiles:(NSArray *)arg2;
- (NSDictionary *)databaseProvidersAndVersions:(IDEIndexDatabase *)arg1;
- (void)databaseDidReportError:(IDEIndexDatabase *)arg1;
- (void)database:(IDEIndexDatabase *)arg1 didEndImportSession:(IDEIndexImportSession *)arg2;
- (void)databaseDidSave:(IDEIndexDatabase *)arg1;
- (void)databaseDidIndexHotFile:(IDEIndexDatabase *)arg1;
- (void)databaseDidLoad:(IDEIndexDatabase *)arg1;
- (void)databaseDidOpen:(IDEIndexDatabase *)arg1;
@end

