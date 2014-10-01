

#import <Foundation/Foundation.h>

@class DVTMapTable, NSOperationQueue;

@interface IDEBuildArbitrator : NSObject
{
    NSOperationQueue *_serializationQueue;
    DVTMapTable *_fileProducingBuildTasksByFilePath;
    DVTMapTable *_registeringBuildersByFilePath;
    DVTMapTable *_registeredFilePathsByBuilder;
}

+ (id)sharedBuildArbitrator;
+ (void)initialize;
- (void)unregisterAllBuildTasksForBuilder:(id)arg1;
- (void)unregisterBuildTaskWhichProducesFileAtPath:(id)arg1 forBuilder:(id)arg2;
- (id)registerBuildTask:(id)arg1 asProducerOfFileAtPath:(id)arg2 forBuilder:(id)arg3;
- (id)init;

@end

