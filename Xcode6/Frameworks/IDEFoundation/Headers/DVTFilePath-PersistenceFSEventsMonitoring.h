

#import <DVTFoundation/DVTFilePath.h>

@interface DVTFilePath (PersistenceFSEventsMonitoring)
- (BOOL)subpathsChangedSinceDate:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)relativePathOnVolume;
- (void)doneAddingChangedFilesFromStream:(struct __FSEventStream *)arg1;
- (void)addChangedFilePath:(char *)arg1;
@end

