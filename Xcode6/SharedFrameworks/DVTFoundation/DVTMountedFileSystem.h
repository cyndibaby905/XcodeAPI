

#import <Foundation/Foundation.h>

@class DVTMapTable, NSString;

@interface DVTMountedFileSystem : NSObject
{
    int _deviceNumber;
    NSString *_mountPath;
    DVTMapTable *_inodesToVNodes;
}

+ (id)mountedFileSystemWithDeviceNumber:(int)arg1;
@property(readonly) NSString *mountPath; // @synthesize mountPath=_mountPath;
@property(readonly) int deviceNumber; // @synthesize deviceNumber=_deviceNumber;
- (NSString *)description;
- (void)removeVNode:(id)arg1;
- (void)addVNode:(id)arg1;
- (void)noteFileSystemWasUnmounted;
- (id)vnodeForInodeNumber:(unsigned long long)arg1;
- (id)initWithDeviceNumber:(int)arg1 statfsInfo:(const struct statfs *)arg2;

@end

