

#import <IDEFoundation/IDEDataProvider.h>

@interface IDEDataProvider_NetworkStatistics : IDEDataProvider

+ (id)sharedDataProvider;
- (id)captureAttributes:(id)arg1 forPIDs:(id)arg2;
- (void)dealloc;
- (BOOL)captureAttributes:(id)arg1 toDictionary:(id)arg2 forPID:(id)arg3;
- (id)supportedAttributes;

@end

