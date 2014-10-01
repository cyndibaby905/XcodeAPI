

#import <Foundation/Foundation.h>

@class DVTDirectoryBasedCustomDataStore, DVTFilePath, NSData, NSOperationQueue, NSSet;

@protocol DVTDirectoryBasedCustomDataStoreDelegate <NSObject>

@optional
- (void)customDataStore:(DVTDirectoryBasedCustomDataStore *)arg1 removeItemAtFilePath:(DVTFilePath *)arg2 completionQueue:(NSOperationQueue *)arg3 completionBlock:(void (^)(BOOL, NSError *))arg4;
- (void)customDataStore:(DVTDirectoryBasedCustomDataStore *)arg1 moveItemAtFilePath:(DVTFilePath *)arg2 toFilePath:(DVTFilePath *)arg3 completionQueue:(NSOperationQueue *)arg4 completionBlock:(void (^)(BOOL, NSError *))arg5;
- (void)customDataStore:(DVTDirectoryBasedCustomDataStore *)arg1 writeData:(NSData *)arg2 toFilePath:(DVTFilePath *)arg3 completionQueue:(NSOperationQueue *)arg4 completionBlock:(void (^)(BOOL, NSError *))arg5;
- (void)customDataStore:(DVTDirectoryBasedCustomDataStore *)arg1 makeFilePathsWritable:(NSSet *)arg2 completionQueue:(NSOperationQueue *)arg3 completionBlock:(void (^)(BOOL, NSError *))arg4;
@end

